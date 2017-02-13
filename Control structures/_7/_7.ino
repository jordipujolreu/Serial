/**********************************************************************************
**                                                                               **
**                               SERIAL                                          **
**                           Control soruces                                     **
**  NOM : Jordi Pujlreu Sala                                   DATA: 13/2/17     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int comptar = 12;
//********** Setup ****************************************************************
void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++) //primer de tot comença en 0 acaba en 11 i va comptant sumant
  {
    Serial.print(i); //valor 
    Serial.print("-"); //guió entre números
  } 
}
//********** Loop *****************************************************************
void loop()     // we need this to be here even though its empty
{
  
}

//********** Funcions *************************************************************



