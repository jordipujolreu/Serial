/**********************************************************************************
**                                                                               **
**                               SERIAL                                          **
**                           Control soruces                                     **
**  NOM : Jordi Pujlreu Sala                                   DATA: 13/2/17     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int sensorReading = 2;
//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  Serial.print("The day is "); 
   
  switch (sensorReading) { // a partir del resultat llegeix 3 opcions
  case 0:    
    Serial.println("dark"); //opcio 1
    break;
  case 1:    
    Serial.println("dim"); //opcio 2
    break;
  case 2:    
    Serial.println("medium"); // opcio 3
    break;
  case 3:
    Serial.println("bright"); //opcio 4
    break;
  default:
    Serial.println("... I don't know!!!"); //alternativa
  } 
}
//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************



