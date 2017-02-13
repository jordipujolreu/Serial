int a = 5; // donem valors a igual a cinc
/**********************************************************************************
**                                                                               **
**                               Serial                                          **
**                            math is fun.1                                      **
**  NOM : Jordi Pujlreu Sala                                   DATA: 30/1/17     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
int b = 10; // donem valors b igual a deu
int c = 20; // donem valors a c igual a vint

void setup()              // executa quan iniciem el programa
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Here is some math: "); // missatge inicial

  Serial.print("a = "); // mostrar el valor de a
  Serial.println(a);  // mostrar el valor de a
  Serial.print("b = ");  // mostrar el valor de b
  Serial.println(b);  // mostrar el valor de b 
  Serial.print("c = ");  // mostrar el valor de c
  Serial.println(c);  // mostrar el valor de c

  Serial.print("a + b = ");       // sumar
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiplicar
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // divideix
  Serial.println(c / b);

  Serial.print("c % b = ");       // modul
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // resta
  Serial.println(b - c);
}

void loop()  // we need this to be here even though its empty
{
}

