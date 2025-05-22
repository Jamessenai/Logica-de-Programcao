// C++ code
//
int ledInterno = 13;//0
int sensorUmidade = 7;
int ledInterno2 = 2;
int sensorUmidade20 = 20;
void setup()
{
  pinMode(ledInterno, OUTPUT);
  pinMode(ledInterno2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_BUILTIN, INPUT);
}

void loop()
{ 
  
  digitalWrite(ledInterno, HIGH);
  delay(1000); 
  digitalWrite(ledInterno, LOW);
  delay(1000); 
  digitalWrite(ledInterno2, HIGH);
  delay(1000); 
  digitalWrite(ledInterno2, LOW);
  delay(1000);  
}