// C++ code
//

void desenhaCabecalho()
{
  Serial.println("--- PROGRAMA JOGO DE DADOS ---");
  Serial.println();
  delay(500);
}

/*
  Desenha quantos pontinhos o usuario quiser
  se o usuario nao passar nada, desenha 5 pontinhos 
  
 */
void desenhaPontinho(int qtdPonto = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdPonto; i++)
  {
    Serial.print(".");
    delay(tempo);
  }
}


void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));//inicia e normaliza a porta randomica para evitar pega o mesmo valor 
}

void loop()
{
  desenhaCabecalho();//desenha o cabecalho na tela 
  
  //solicitar o palpite do usuario 
  Serial.println("Digite um palpite entre 1 e 6: ");
  while(!Serial.available());//espero usuario digitar 
  int palpite = Serial.parseInt();//guarda o palpite do usuario

  //jogar o dado - sorteia um numero randomico/aleatorio de 1 ate 7 - 1, ou seja; 6
  int numeroSorteado = random(1, 7);//numero entre 1 e 6
  Serial.println("Seu palpite: " + String(palpite));//exibir o palpite do usuario
  Serial.println("Numero Sorteado: " + String(numeroSorteado));//exibir o numero

  if(palpite == numeroSorteado)
  {
    Serial.println("Parabens, voce acertou!!");
  } else {
    Serial.println("Que pena, tente outra vez!!");
  }

  Serial.println("Reiniciando o programa");
  Serial.println();
  delay(700);
}