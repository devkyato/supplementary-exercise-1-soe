# Serial pattern selector

SerialPatternSelector demonstrates two LedAnimator objects sharing one LedBank.
Send 1 for a scanner, 2 for alternating outputs, or another character to clear
the bank.

Connect pins 2 through 5 to four LEDs through individual 220–330 ohm resistors.

## Challenge

Add a third SOS-style pattern. Keep all timing in PatternStep data and leave
loop free of delay().
