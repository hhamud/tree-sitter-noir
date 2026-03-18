const { spawnSync } = require("node:child_process");

const installRoot =
  process.env.INIT_CWD || process.env.npm_config_local_prefix;

if (!installRoot || installRoot === process.cwd()) {
  console.log("Skipping node-gyp rebuild for local development installs.");
  process.exit(0);
}

const command = process.platform === "win32" ? "node-gyp.cmd" : "node-gyp";
const result = spawnSync(command, ["rebuild"], { stdio: "inherit" });

if (result.error) {
  throw result.error;
}

process.exit(result.status ?? 1);
