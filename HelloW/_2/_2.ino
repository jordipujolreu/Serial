/**********************************************************************************
**                                                                               **
**                               Serial                                          **
**                            Hello world.2                                      **
**  NOM : Jordi Pujlreu Sala                                   DATA: 30/1/17     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup()              
{
  Serial.begin(9600);    
}

void loop()                     
{
  Serial.print("Hello world!");  // prints Hello world!
  delay(1000);   // wait a second
}

