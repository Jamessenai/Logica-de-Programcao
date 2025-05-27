// C++ code
//variaaveis

int primeroledAzul = 4;
int segundoledAzul = 3;
int terceiroledAzul = 2;
int ledVerde = 10;
int ledVermelho = 7;
int pontosObtidos = 1;
int quantidadeRodadas;
int  palpiteDigitado;

#include <Servo.h>
Servo portaDaFortaleza;

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
  pinMode (ledVermelho, OUTPUT);
  pinMode (ledVerde, OUTPUT);
  pinMode (terceiroledAzul, OUTPUT);
  pinMode (segundoledAzul, OUTPUT);
  pinMode (primeroledAzul, OUTPUT);


  Serial.println("Palpite errado");
  while(!Serial.available());
  palpiteDigitado = Serial.parseInt();

  if(palpiteDigitado == palpiteDigitado){
    digitalWrite(ledVerde, HIGH);
    delay(500);
    digitalWrite(ledVerde, LOW);
    Serial.println("Parabens, seu palite ta certo!");
  }else{
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(terceiroledAzul, HIGH);
    delay(500);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(segundoledAzul, LOW);
    Serial.print("Palpite Errado, tente outra vez!");


  }
}

  void loop()
  {  

    int DadoPalpites [quantidadeRodadas];
    int DadoResultados [quantidadeRodadas];  
 
  for(int q = 0; q < quantidadeRodadas; q++)
  {
    Serial.println("-------------------------------------------");
    Serial.println();
    Serial.println("Desafio do Palpite");
    Serial.println();
    Serial.println("-------------------------------------------"); 

    int palpite = 0;
    Serial.println("Digite um numero de 1 a 6:");
    while( ! Serial.available());
    palpite = Serial.parseInt();
    int numeroAleatorio = random(1, 7);
    Serial.println();
  }
}

