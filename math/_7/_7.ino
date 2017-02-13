/**********************************************************************************
**                                                                               **
**                               Serial                                          **
**                            math is fun.7                                      **
**  NOM : Jordi Pujlreu Sala                                   DATA: 06/2/17     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
int test = 32767;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1; //operació
 
  Serial.print("Now it is "); //escriu missatge entre comes
  Serial.println(test); // resultat operació
}

void loop()   // we need this to be here even though its empty
{
}

