float numero1 = 0.0;
float numero2 = 0.0;
float soma = 0.0;
float Subtrair = 0.0;
float Multiplicar = 0.0;
float Dividir = 0.0;
int escolhaDaOperacao;
int contador;
void setup()
{
  Serial.begin(9600);
  do{
    Serial.println("Bem-vindo (a) a calculadora mega inteligente : Valeu por usar.");
    Serial.println("Escolha uma das opcoes/operacoes:");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtrair");
    Serial.println("3 - multiplicar");
    Serial.println("4 - Dividir");

    while(!Serial.available());{} //Espera o usuário digitar

    escolhaDaOperacao = Serial.parseInt(); // Armazena o que o usuário digitou na variavel

    Serial.println("Agora, para realizar a operacao, digite o primeiro numero");
    while(!Serial.available());{} //Espera o usuário digitar
    numero1 = Serial.parseFloat();

    Serial.println("Agora, digite o segundo numero");
    while(!Serial.available());{} //Espera o usuário digitar
    numero2 = Serial.parseFloat();

   
    Serial.println("Voce deseja continuar? Se sim, digite [s], se nao digite [n]");
    while(!Serial.available()){} //Esperar o usuario digitar
    
    switch(escolhaDaOperacao){
        case 1:
          soma = numero1 + numero2;
          Serial.println("WOW!!! O resultado foi: " + String(soma) );
        
          break;
        
        case 2:
          Subtrair = numero1 + numero2;
          Serial.println("WOW!!! O resultado foi: " + String(Subtrair) );
        
          break; 
        
        case 3:
          Multiplicar = numero1 + numero2;
          Serial.println("WOW!!! O resultado foi: " + String(Multiplicar) );
        
           break;
        
        case 4:
         Dividir = numero1 + numero2;
         Serial.println("WOW!!! O resultado foi: " + String(Dividir) );
         
           break;
        
        default:
          Serial.println("Opcao invalida");
      }
  

    if (Serial.readString() == "s"){
      contador++;
    }
    else{
      contador = 0;
      Serial.println("Valeu meu mano, volte sempre e nozes");
      Serial.println("Man se tu quiser voltar, reinicia o sistema.");
      
      
      while(contador != 0);

}

void loop()
{
  //sem codigo
}
  
