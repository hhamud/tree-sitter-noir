const fs = require("node:fs")
const path = require("node:path")

const { parseArgs } = require("./upstream-noir")

function fail(message) {
  console.error(`::error::${message}`)
  process.exit(1)
}

function main() {
  const args = parseArgs(process.argv.slice(2))
  const reportPath = path.resolve(
    args.report || "tmp/upstream-canary-report.json"
  )
  const canaryOutcome = args["canary-outcome"] || "unknown"

  if (!fs.existsSync(reportPath)) {
    fail(
      `Upstream canary did not produce a report (step outcome: ${canaryOutcome}).`
    )
  }

  const report = JSON.parse(
    fs.readFileSync(reportPath, "utf8")
  )

  if (report.failureCount > 0) {
    fail(
      `Upstream canary found ${report.failureCount} parse failures against ${report.commit}.`
    )
  }

  if (canaryOutcome !== "success") {
    fail(
      `Upstream canary step finished with outcome ${canaryOutcome} even though the report had no parse failures.`
    )
  }

  console.log(
    `Upstream canary passed for ${report.commit}.`
  )
}

main()
