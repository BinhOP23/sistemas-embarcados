// C++ code
//
int ledAzul = 8;
int btnAzul = 2;

// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
    delay(1000);

  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
    delay(1000);

  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
    delay(1000);

}
