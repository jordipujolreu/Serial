/**********************************************************************************
**                                                                               **
**                               SERIAL                                          **
**                           Control soruces                                     **
**  NOM : Jordi Pujlreu Sala                                   DATA: 13/2/17     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int kgCO2m2 = 15;
//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (kgCO2m2 < 3.5 ) //si compleix condició...

  Serial.print (" Qualificació energètica A "); // escriurà aixo...

  else if (kgCO2m2 <6.5)

  Serial.print ( "Qualificació energègtica B");

  else if ( kgCO2m2 <11.1)

  Serial.print("Qualificació energètica C");

   else if ( kgCO2m2 <17.7)

  Serial.print("Qualificació energètica D");

 else if ( kgCO2m2 <38.2)

  Serial.print("Qualificació energètica E");

 else if ( kgCO2m2 <43.2)

  Serial.print("Qualificació energètica F");

   else if ( kgCO2m2 <=43.2)

  Serial.print("Qualificació energètica C");

}
//********** Loop *****************************************************************
 void loop()   // we need this to be here even though its empty
{
}


//********** Funcions *************************************************************




 
  



