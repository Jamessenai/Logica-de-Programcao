
float resultado;
int escolhaDaOperacao;
int contador;


float somar (float numero1Param, float numero2Param, float numero3Param = 10){
 int numero6; // variavel local 
  
  return(numero1Param + numero2Param + numero3Param); //retornar a soma 

}

//Quando usamos void na funcao, n precisamos de retoro 
void subtrair(float numero1Param, float numero2Param){
 
  resultado = numero1Param - numero2Param;
  Serial.println("WOW! O resultado foi:" + String(resultado));
}

void multiplicar (float numero1Param, float numero2Param){
  resultado = numero1Param * numero2Param;
  Serial.println("WOW! O resultado foi:" + String(resultado));
}

void dividir (float numero1Param, float numero2Param){
  resultado = numero1Param / numero2Param;
  Serial.println("WOW! O resultado foi:" + String(resultado));
}

void setup()
{
  Serial.begin(9600);
  
  float numero1 = 0.0; // variavel local
  float numero2 = 0.0;
  do{
    Serial.println("Oba,Bem-vindo (a) a calculadora mega inteligente : Valeu por usar.");
    Serial.println("Mano Escolha uma das opcoes/operacoes:");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtrair");
    Serial.println("3 - multiplicar");
    Serial.println("4 - Dividir");

    while(!Serial.available());{} //Espera o usuário digitar

    escolhaDaOperacao = Serial.parseInt(); // Armazena o que o usuário digitou na variavel

    Serial.println("Certo, Agora, para realizar a operacao, digite o primeiro numero");
    while(!Serial.available());{} //Espera o usuário digitar
    numero1 = Serial.parseFloat();

    Serial.println("Agora, digite o segundo numero");
    while(!Serial.available());{} //Espera o usuário digitar
    numero2 = Serial.parseFloat();


    switch(escolhaDaOperacao){
      case 1:
      
      resultado = somar(numero1, numero2,10); //chamada da funcao somar
      Serial.println("WOW! O resultado foi:" + String(resultado));
        //2a opcao - Serial.println("WOW!!! O resultado foi :" + String(soamr()));
        break;

      case 2:
        subtrair (numero1, numero2);

        break;

      case 3:
        multiplicar(numero1, numero2);
     
        break;

      case 4:
        dividir(numero1, numero2);
    
        break;

      default:
      Serial.println("Opcao invalida");
    } 

    Serial.println("Mano voce deseja continuar? Se sim, digite [s], se nao digite [n]");
    while(!Serial.available());{} //Esperar o usuario digitar

    if (Serial.readString() == "s"){
      contador++;
    }
    else{
      contador = 0;
      Serial.println("Valeu meu mano, volte sempre e nois");
      Serial.println("Mano se tu quiser voltar, reinicia o sistema.");
    }

  }
  while(contador != 0);
}

void loop()
{}
