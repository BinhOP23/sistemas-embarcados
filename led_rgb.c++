// C++ code
//
int ledAzul = 8;
int btnAzul = 2;

int ledVermelho = 11;
int btnVermelho = 4;

int ledVerde = 9;
int btnVerde = 5;

void setup()
{
  pinMode(ledAzul, OUTPUT);
  pinMode(btnAzul, INPUT);
  
  pinMode(ledVermelho, OUTPUT);
  pinMode(btnVermelho, INPUT);
  
  pinMode(ledVerde, OUTPUT);
  pinMode(btnVerde, INPUT);
  
}

void loop()
{
  int valAzul = digitalRead(btnAzul);
  if(valAzul == HIGH){
 	digitalWrite(ledAzul, LOW);
  }
  else{
    digitalWrite(ledAzul, HIGH);
  }
  
  int valVermelho = digitalRead(btnVermelho);
  if(valVermelho == HIGH){
 	digitalWrite(ledVermelho, LOW);
  }
  else{
    digitalWrite(ledVermelho, HIGH);
  }
  
  int valVerde = digitalRead(btnVerde);
  if(valVerde == HIGH){
 	digitalWrite(ledVerde, LOW);
  }
  else{
    digitalWrite(ledVerde, HIGH);
  }
}


