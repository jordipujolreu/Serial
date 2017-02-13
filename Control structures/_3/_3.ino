/**********************************************************************************
**                                                                               **
**                               SERIAL                                          **
**                           Control soruces                                     **
**  NOM : Jordi Pujlreu Sala                                   DATA: 13/2/17     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************

//********** Loop *****************************************************************

//********** Funcions *************************************************************
int tempAigua = 90;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua > 100)
  {
    Serial.print("Aigua bullint"); // passa quan a la variable temp aigua supera els 100 graus
  } 
  else if (tempAigua >= 90 & tempAigua < 100)
  {
    Serial.print(" Aigua a punt de bullir"); //passa quan l'aigua no bull
  }
  else
  {
    Serial.print("aigua encara no bull");// sino passa res de les opcions anteriors aigua bullint
  }
}

void loop()   // we need this to be here even though its empty
{
}



