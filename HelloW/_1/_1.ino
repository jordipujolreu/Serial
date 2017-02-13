/**********************************************************************************
**                                                                               **
**                               Serial                                          **
**                            Hello world.1                                      **
**  NOM : Jordi Pujlreu Sala                                   DATA: 30/1/17     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.println("Hello world!"); // prints Hello world! with brake line
}

void loop()   // run over and over again
{
       // do nothing
}

