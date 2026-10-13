
 // EEEbot - ESP32 DC Motor Control
 // Week 3: Robot Construction and Testing

 // Motor A connections
 #define enA 23   // PWM pin for Motor A speed
 #define Ina 25   // Direction pin for Motor A
 #define Inb 26   // Direction pin for Motor A

 // Motor B connections
 #define enB 22   // PWM pin for Motor B speed
 #define Inc 27   // Direction pin for Motor B
 #define Ind 33   // Direction pin for Motor B

 void setup() {
   // Set Motor A pins as outputs
   pinMode(enA, OUTPUT);
   pinMode(Ina, OUTPUT);
   pinMode(Inb, OUTPUT);

   // Set Motor B pins as outputs
   pinMode(enB, OUTPUT);
   pinMode(Inc, OUTPUT);
   pinMode(Ind, OUTPUT);

   // Set initial motor speed
   analogWrite(enA, 500);
   analogWrite(enB, 500);

   // Set Motor A direction to forward
   digitalWrite(Ina, HIGH);
   digitalWrite(Inb, LOW);

   // Set Motor B direction to forward
   digitalWrite(Inc, HIGH);
   digitalWrite(Ind, LOW);
 }

 void loop() {
   // Motor outputs remain configured for forward movement
 }
