float sensorValue;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  sensorValue = analogRead(A5);
  float average = 0;
  for (int i = 0; i < 10; i++) {
    average = average + sensorValue / 10;
    delay(1);
  }
float voltage = average * (5.0 / 1023.0);

  Serial.print("dia: ");

  Serial.println(voltage);

delay(10);
}
