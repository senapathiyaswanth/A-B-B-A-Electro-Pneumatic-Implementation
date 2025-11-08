// Pneumatic sequence control using Arduino and relays (no sensor)
// Sequence: A extend → B extend → B retract → A retract → repeat

int relayA = 8;   // Relay for Cylinder A
int relayB = 9;   // Relay for Cylinder B

void setup() {
  pinMode(relayA, OUTPUT);
  pinMode(relayB, OUTPUT);

  // Both relays OFF initially (for active LOW relay modules)
  digitalWrite(relayA, HIGH);
  digitalWrite(relayB, HIGH);

  Serial.begin(3000);
  Serial.println("Automatic Pneumatic Sequence Started");
}

void loop() {
  // Step 1: Extend Cylinder A
  digitalWrite(relayA, LOW);   // Relay ON
  Serial.println("Cylinder A Extending...");
  delay(2000);                 // Adjust delay for full stroke

  // Step 2: Extend Cylinder B
  digitalWrite(relayB, LOW);   // Relay ON
  Serial.println("Cylinder B Extending...");
  delay(2000);

  // Step 3: Retract Cylinder B
  digitalWrite(relayB, HIGH);  // Relay OFF
  Serial.println("Cylinder B Retracting...");
  delay(2000);

  // Step 4: Retract Cylinder A
  digitalWrite(relayA, HIGH);  // Relay OFF
  Serial.println("Cylinder A Retracting...");
  delay(2000);

  // Pause before repeating
  Serial.println("Cycle Complete. Restarting...\n");
  delay(2000); // Wait before next cycle
}
