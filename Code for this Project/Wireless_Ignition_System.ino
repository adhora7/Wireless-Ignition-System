
#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

const int relayPin = 19;

void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32_BT");  // Bluetooth name
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Initially OFF
  Serial.println("Bluetooth Ready");
}

void loop() {
  if (SerialBT.available()) {
    char incoming = SerialBT.read();
    Serial.print("Received: ");
    Serial.println(incoming);

    if (incoming == '1') {
      digitalWrite(relayPin, HIGH); // Turn ON relay
      Serial.println("Relay ON");
    } else if (incoming == '0') {
      digitalWrite(relayPin, LOW); // Turn OFF relay
      Serial.println("Relay OFF");
    }
  }
}
