// C++ code
void setup()
{
  Serial.begin(9600);
  
 Serial.println("*** SACOLA DO ZH ***");
 Serial.println();
 //vetor tamanho 6: vai de 0 até 5
 String frutas[6];//cria um vetor tamanho 6 (preeenchendo as posicao com string vazias)
  
  
  Serial.println("Oh ZEH, bora cadastrar as frutas!");
  
  Serial.println();
  //Pede as frutas para o usuário 
  for(int i = 0; i <= 5; i++){
   //pega a frutas do usuario 
   Serial.println("Informe a "+ String(i + 1) + "a fruta:");
    while(!Serial.available());
    String fruta = Serial.readString();
    
    //poe a freuta na sacola / cadastra fruta no array/vetor
    frutas[i] = frutasDigitada;
    
  }//fim do for
 
  
}//fim do setup
  



void loop()
{
  
}