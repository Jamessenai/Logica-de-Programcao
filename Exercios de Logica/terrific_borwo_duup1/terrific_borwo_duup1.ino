// C++ code
//
void setup()
{
  Serial.begin(9600);
}
 //Inicianlização da Variaveis
 int caixaPequena = 0;// -32768 até 32767 
 long caixaGrande = 0;// -2147483648 até 2147483647

 void loop()
 {
 caixaPequena = 32768098;//truncou o valor (cortou, pois estoura a faixa permitida 
 caixaGrande = 32768098; 
   
 Serial.println(caixaPequena);
 Serial.println(caixaGrande); 
   
 delay(2000);//20 Segundo 
}