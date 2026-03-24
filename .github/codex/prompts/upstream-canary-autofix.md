# Upstream Canary Auto-Fix

You are fixing `tree-sitter-noir` after a failed upstream canary run.

Start by reading:

- `tmp/codex/upstream-canary-context.md`
- `tmp/canary-artifact/upstream-canary-report.json`

The workflow has already checked out the matching upstream Noir commit into
`tmp/upstream-noir`.

Important notes:

- The downloaded canary report already captures the failing state from the triggering run.
- All required context is local to this workspace. Do not fetch the failed workflow URL or browse the network.
- If you choose to run `bun scripts/check-upstream-corpus.js --source tmp/upstream-noir --label upstream-canary --report tmp/canary-artifact/upstream-canary-report.json` before making changes, its non-zero exit is expected diagnostic output, not a blocker.

Requirements:

1. Use the downloaded report and the checked out upstream Noir sources to identify the smallest parser gap.
2. Make the smallest repository changes needed so both `bun run test` and the upstream canary reproduction pass.
3. Add or update focused corpus tests for any grammar changes.
4. Do not edit files under `tmp/` except to regenerate the canary report during verification.
5. Do not update dependencies, workflow files, or the pinned upstream manifest unless they are directly required for the parser fix.

Stop once the parser fix is in place and both verification commands succeed.
