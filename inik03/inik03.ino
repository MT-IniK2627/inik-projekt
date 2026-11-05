// C++ code
//
void setup()
{
  pinMode(2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  while (digitalRead(2) == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(LED_BUILTIN, LOW);
    delay(500); // Wait for 500 millisecond(s)
  }
}