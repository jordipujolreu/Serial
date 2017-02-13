/**********************************************************************************
**                                                                               **
**                               Serial                                          **
**                            math is fun.8                                      **
**  NOM : Jordi Pujlreu Sala                                   DATA: 06/2/17     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
long drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;
long miss_kb;
//********** Setup ****************************************************************

void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);      // set up Serial library at 9600 bps

  Serial.print("Your HD is ");
  Serial.print( drive_gb  );
  Serial.print("  ");
  Serial.println(" GB large.");

  drive_mb = drive_gb * 1024;

  Serial.print("In theory, it can store ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");
  drive_kb = drive_mb * 1024 ;
  Serial.print(drive_kb);
  Serial.println(" Kilobytes");
  Serial.print("But it really only store ");
  real_drive_mb = 1000 * drive_gb ;
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes, ");
  real_drive_kb = real_drive_mb * 1000 ;
  Serial.print(real_drive_kb);
  Serial.println(" Kilobytes.");
  Serial.print("You are missing ");
  miss_kb = drive_kb - real_drive_kb ;
  Serial.print(miss_kb);
  Serial.print(" Kilobytes!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
