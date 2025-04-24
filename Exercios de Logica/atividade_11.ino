// Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//Variáveis 
// Ano de Nacimento 
int anoDeNasc = 0; 
int idade = 0;//inicia a idade 
long idadeMeses = 0; 
long idadeDias = 0; 
long idadeHoras = 0; 
long idadeMinutos = 0;



void setup()
{
  Serial.begin(9600); 
}

void loop()
{
  
    //Cabeçalho 
  Serial.println("|------------------------------|");//primeira linha 
  Serial.println("|                              |");//primeira linha 
  Serial.println("|      Lopal - EX_01           |");//primeira linha           
  Serial.println("|                              |");//primeira linha 
  Serial.println("|------------------------------|");//primeira linha 
  
  
  
  Serial.println();//pula duas linha 
  
  Serial.println();//pula duas linha 
  
  
  
  //entrada 
  Serial.println("Digite a sua ano de nacimento");//pergunta a idade
  while( ! Serial.available() ){}//Agurda o usuário digitar
  idade = Serial.parseInt();
        
  //processamento 
   
    idade = 2025 - anoDeNasc;
  
  idadeMeses = idade * 12; 
  idadeDias = idade * 365; 
  idadeHoras = idadeDias * 24; 
  idadeMinutos = idadeHoras * 60;
 
  
  //saída 
  Serial.println("Sua idadade em meses: " + String(idadeMeses) );
  Serial.println("Sua idade em dias: " + String(idadeDias) ); 
  Serial.println("Sua idade em horas: " + String(idadeHoras) ); 
  Serial.println("Sua idade em Minutos: " + String(idadeMinutos) );
}