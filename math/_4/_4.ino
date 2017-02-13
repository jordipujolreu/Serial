/**********************************************************************************
**                                                                               **
**                               Serial                                          **
**                            math is fun.4                                      **
**  NOM : Jordi Pujlreu Sala                                   DATA: 06/2/17     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
int drive_gb = 100;
int drive_mb;
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Your HD is "); 
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb; //operaciÃ³

  Serial.print("It can store "); //escriu el text entre comes
  Serial.print(drive_mb); //resultat de la operaciÃ³
  Serial.println(" Megabytes!"); // unitats de la operaciÃ³
}

void loop()     // no hi ha cap operaciÃ³ que es repeteixi
{
}


