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
void setup() 
{
  Serial.begin(9600);
  
  Serial.print("Ara comptare de 0 a "); //escriure el seguent missatge
  Serial.println(comptar); //escriure el valor
  for (int i=0; i < comptar; i++) // comença amb 0 acaba en 12 i conta ascendent
  {
    Serial.print(i); 
    Serial.print("-");
  }
  Serial.print(comptar); // finalitzem el missatge escrivint el numero
}

//********** Loop *****************************************************************
void loop()  
{
}

//********** Funcions *************************************************************
