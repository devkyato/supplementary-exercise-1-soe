# Cooperative tasks

CooperativeTasks runs a three-output chase and a pin 8 heartbeat from
the same millis() value. Each component does a small amount of work and
immediately returns control to loop().

## Challenge

Add a serial counter that prints once per second. Verify that neither animation
changes speed while the messages are printed.
