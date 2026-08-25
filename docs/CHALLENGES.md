# Practice challenges

Each challenge should remain non-blocking and include a wiring note and a
repeatable verification procedure.

1. Finish the current traffic-light phase before serving a button request.
2. Let an error pattern override a heartbeat, then restore normal status.
3. Change a PeriodicOutput interval from serial commands.
4. Run an example with active-low outputs and verify safe startup.
5. Use a finite animation and print a completion message exactly once.
6. Start a sequence near UINT32_MAX in a native test and verify rollover.

Prefer composing the existing classes and small application state over adding a
new public API only for a challenge.
