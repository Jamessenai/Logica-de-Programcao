// Variáveis
int anoNascimento = 0;
int anoAtual = 0;
int idade = 0;
long idadeSemana = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
 
  //Cabeçalho 
  Serial.println("|------------------------------|");//primeira linha 
  Serial.println("|                              |");//primeira linha 
  Serial.println("|      Lopal - EX_01           |");//primeira linha           
  Serial.println("|                              |");//primeira linha 
  Serial.println("|------------------------------|");//primeira linha 
  
  
  
  Serial.println();//pula duas linha 
  
  Serial.println();//pula duas linha 
  
  
  
  // Entrada do ano de nascimento
  Serial.println("Digite o ano do seu nascimento:");
  while (!Serial.available());
  anoNascimento = Serial.parseInt();

  delay(500); // pequena pausa para leitura limpa

  // Entrada do ano atual
  Serial.println("Digite o ano atual:");
  while (!Serial.available());
  anoAtual = Serial.parseInt();

  // Processo
  idade = anoAtual - anoNascimento;
  idadeSemana = idade * 52.1429;

  // Saída
  Serial.println("Sua idade: " + String(idade) + " anos");
  Serial.println("Sua idade em semanas: " + String(idadeSemana) + " semanas");

  // Aguarda para não repetir
  while (true);
}