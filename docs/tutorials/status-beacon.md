# Status beacon

Use StatusBeacon when a device needs a visible heartbeat without pausing its
main work. An LED on pin 8 turns on briefly once per second while loop remains
available for sensors, serial input, or communication.

## Try it

1. Upload examples/StatusBeacon/StatusBeacon.ino.
2. Connect pin 8 through a 220–330 ohm resistor to an LED and confirm it flashes
   for about 120 ms every second.
3. Add a serial message every two seconds without using delay().

## Challenge

Add a second pattern for an error state and switch patterns when a button is
held. Stop the current animator before starting the replacement.
