# Wiring reference

ArduinoPatterns controls logical digital outputs. It does not replace current
limiting, level shifting, isolation, or a load driver.

- Use one 220–330 ohm resistor per ordinary indicator LED.
- Never drive a motor, solenoid, lamp, relay coil, or high-current strip from a
  GPIO pin.
- Use a suitable transistor, MOSFET, driver board, flyback diode, and external
  supply for inductive or high-current loads.
- Confirm whether a module is active high or active low before energizing it.
- Disconnect power before changing wiring.

Test every pattern with LEDs first. Move to driven loads only after checking the
driver datasheet, voltage, current, and safe default state.
