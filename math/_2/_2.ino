/**********************************************************************************
**                                                                               **
**                               Serial                                          **
**                            math is fun.2                                      **
**  NOM : Jordi Pujlreu Sala                                   DATA: 30/1/17     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
int a = 3;b // posem valors a les incognites
int b = 4;
int h = sqrt(a*a + b*b); // fem pitagoras

void setup()              // executar quan iniciem el programa
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("lets calculate an hipotenuse"); // missage incicial
  Serial.print("  a = "); // mostrem el valor de a
  Serial.println(a);
  Serial.print("  b = "); // mostrem el valor de b
  Serial.println(b);
  Serial.print("  h = "); // mostrem el valor de h
  Serial.println(h);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
