int tabuadaEscolhida;
int resultado;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Seja Bem-Vindo a Tabuada");
  Serial.println("Digite qual tabuada voce deseja ver:");
  while(!Serial.available()){} //Espera o usuario
  tabuadaEscolhida = Serial.parseInt();
  
  for(int contador = 1; contador <= 10; contador++){
  resultado = tabuadaEscolhida * contador;
    
    // Exibir assim: 2 x 1 = 20
    Serial.println(String(tabuadaEscolhida) + " X " + String(contador) + " = " + String(resultado));
    
  } 
  
}