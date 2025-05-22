// C++ code
//Variaveis Globais 
/*
   Criar um vetor tamanho 4
   fazendo parte do mesmo cadastro
*/ 
String convidados[4];
int idadeConvidados[4]; //Camel Case
String emailConvidados[4];

//Funcao 
void desenhaCabecalho()
{
  Serial.println("*** CHURRASCAO DO ZEH ***");
  Serial.println();
  Serial.println();
  delay(2000);//pausa de 2 segundo
}
  
  
void setup()
{
  Serial.begin(9600);
}


void loop()
{
  
  //fazer um cabecalho bonito para o programa 
    desenhaCabecalho();//chamar a funcao pra desenhar o cabecalho
  
  //cadastro os dados
  for(int i = 0; i < 4; i++)
  {
    
    //solicitar o nome do usuario
    Serial.println("Informe " +String(i + 1)+ "o nome para cadastro");
    while(!Serial.available());
    convidados[i] = Serial.readString();
    
    //solociatr a idade
    Serial.println("Informe  idade de " + convidados[i]);
    while(!Serial.available());
    idadeConvidados[i] = Serial.parseInt();

    //soliciatr o email
    Serial.println("Informe o email de " + convidados[i]);
    while(!Serial.available());
    emailConvidados[i] = Serial.readString();
    
    Serial.println();

    //exibir a lista de convidados 
    //obs: so vai na festa quem for maior de idade >= 18

    //criar um for ???
    //exibir com o print cada um dos arrays
    //pular uma linha 
    
  Serial.println("** Exibindo convidados eleitos pra a festa **");
  Serial.println();
  Serial.println();

  for(int i = 0; i < 3; i++)
  {
    Serial.println("Nome: " + convidados[i]);
    Serial.println("Idade: " + String(idadeConvidados[i]));
    Serial.println("Email: " + emailConvidados[i]);
    Serial.println("Permissao para a festa: " +  String(idadeConvidados[i] >= 18 ? "OK" : "Menor de Idade"));

    Serial.println("----------");
    Serial.println();

  }//fim do for

  Serial.println();

  delay(2000);//pausa de 2 segundos
}//fim do loop

    //fim do for 

    delay(2000);
  }