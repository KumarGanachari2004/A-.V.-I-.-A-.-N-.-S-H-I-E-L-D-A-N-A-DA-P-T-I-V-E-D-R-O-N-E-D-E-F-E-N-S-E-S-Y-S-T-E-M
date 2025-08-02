// A.V.I.A.N. Shield - VIRTUAL PROTOTYPE SIMULATION
// Project by: [Your Name]
// This code uses button inputs to simulate threat levels and trigger a tiered defense system.

// --- Pin Definitions for Wokwi Simulation ---
#define LASER_PIN_1 12
#define LASER_PIN_2 13
#define STROBE_PIN  14
#define SPEAKER_PIN 2

// Button pins to simulate threat detection
#define THREAT_LVL1_PIN 25
#define THREAT_LVL2_PIN 26
#define THREAT_LVL3_PIN 27

void setup() {
  Serial.begin(115200);
  Serial.println("A.V.I.A.N. Shield VIRTUAL PROTOTYPE Initializing...");

  // Initialize deterrent pins as outputs
  pinMode(LASER_PIN_1, OUTPUT);
  pinMode(LASER_PIN_2, OUTPUT);
  pinMode(STROBE_PIN, OUTPUT);
  pinMode(SPEAKER_PIN, OUTPUT);

  // Initialize button pins as inputs with pull-up resistors
  pinMode(THREAT_LVL1_PIN, INPUT_PULLUP);
  pinMode(THREAT_LVL2_PIN, INPUT_PULLUP);
  pinMode(THREAT_LVL3_PIN, INPUT_PULLUP);

  Serial.println("System Ready. Status: PASSIVE SCAN. Awaiting threat simulation...");
}

void loop() {
  // Read the state of the simulation buttons
  bool level1_active = (digitalRead(THREAT_LVL1_PIN) == LOW);
  bool level2_active = (digitalRead(THREAT_LVL2_PIN) == LOW);
  bool level3_active = (digitalRead(THREAT_LVL3_PIN) == LOW);

  // Deactivate all deterrents first
  digitalWrite(LASER_PIN_1, LOW);
  digitalWrite(LASER_PIN_2, LOW);
  digitalWrite(STROBE_PIN, LOW);
  noTone(SPEAKER_PIN);

  // Execute defense protocol based on which button is pressed
  if (level3_active) {
    Serial.println("SIMULATING THREAT: Level 3 - DISRUPTION! Imminent Attack.");
    trigger_level_3();
  } else if (level2_active) {
    Serial.println("SIMULATING THREAT: Level 2 - INTIMIDATION! Threat Closing.");
    trigger_level_2();
  } else if (level1_active) {
    Serial.println("SIMULATING THREAT: Level 1 - WARNING! Threat Detected.");
    trigger_level_1();
  } else {
    Serial.println("Status: PASSIVE SCAN. No threat simulated.");
  }

  delay(100); // Check for button presses 10 times per second
}

// Level 1: Blinking lasers to serve as a visual warning.
void trigger_level_1() {
  digitalWrite(LASER_PIN_1, millis() % 500 > 250);
  digitalWrite(LASER_PIN_2, millis() % 500 < 250);
}

// Level 2: Solid lasers and a warning tone.
void trigger_level_2() {
  digitalWrite(LASER_PIN_1, HIGH);
  digitalWrite(LASER_PIN_2, HIGH);
  tone(SPEAKER_PIN, 1500, 200);
}

// Level 3: All systems active for maximum disruption.
void trigger_level_3() {
  digitalWrite(LASER_PIN_1, HIGH);
  digitalWrite(LASER_PIN_2, HIGH);
  digitalWrite(STROBE_PIN, millis() % 100 > 50);
  tone(SPEAKER_PIN, 3000, 200);
}
