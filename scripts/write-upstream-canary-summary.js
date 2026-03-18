const fs = require("node:fs");
const path = require("node:path");

const { parseArgs } = require("./upstream-noir");

function main() {
  const args = parseArgs(process.argv.slice(2));
  const reportPath = path.resolve(
    args.report || "/tmp/upstream-canary-report.json"
  );
  const summaryPath = process.env.GITHUB_STEP_SUMMARY;

  if (!fs.existsSync(reportPath)) {
    console.log("::warning::Upstream canary did not produce a report.");
    return;
  }

  const report = JSON.parse(fs.readFileSync(reportPath, "utf8"));
  const successRate = ((report.successfulCount / report.fileCount) * 100).toFixed(1);
  const lines = [
    "## Upstream Noir Canary",
    "",
    `- Commit: \`${report.commit}\``,
    `- Parsed successfully: ${report.successfulCount}/${report.fileCount} (${successRate}%)`,
    `- Failures: ${report.failureCount}`,
  ];

  if (report.failures.length > 0) {
    lines.push("");
    lines.push("First failures:");

    for (const failure of report.failures.slice(0, 10)) {
      lines.push(
        `- \`${failure.file}\` (${failure.start.row}:${failure.start.column} - ${failure.end.row}:${failure.end.column})`
      );
    }

    console.log(
      `::warning::Upstream canary found ${report.failureCount} parse failures against ${report.commit}.`
    );
  }

  if (summaryPath) {
    fs.appendFileSync(summaryPath, `${lines.join("\n")}\n`);
  } else {
    console.log(lines.join("\n"));
  }
}

main();
