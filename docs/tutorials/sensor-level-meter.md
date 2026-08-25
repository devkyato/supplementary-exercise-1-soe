# Sensor level meter

SensorLevelMeter reads A0 every 50 ms and converts the reading into a four-output
bar. A potentiometer with its ends at 5 V and ground and its wiper at A0 is a
simple test source.

## Challenge

Reduce visible flicker by averaging four samples without blocking between them.
