# 🧰 Wiring Instructions

## ESP32 + Transistor + Relay

- ESP32 GPIO19 → 1kΩ resistor → Transistor base
- Transistor emitter → Relay GND → Common GND with ESP32 and arduino
- Transistor collector → Relay IN
- Relay VCC → 5V ( from Arduino Uno)

## Ignition Circuit

- Battery + → Relay NO
- Relay COM → End A of Nichrome wire
- End B of Nichrome wire → Battery –
- Matchsticks are placed in between two ends of nichrome wire