/**********************************************************************************
**                                                                               **
**                               Serial                                          **
**                               print                                           **
**  NOM : Jordi Pujlreu Sala                                   DATA: 06/2/17     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int thisByte = 33; 
//********** Setup ****************************************************************
void setup() 
{ 
  Serial.begin(9600); 
  Serial.println("ASCII Table ~ Character Map"); 
} 

void loop()
{ 
  Serial.write(thisByte);    
  
  Serial.print(", dec: "); //vaor de this byte en decimal
  Serial.print(thisByte);      
  Serial.print(", hex: "); /valor de this byte en hexa
  Serial.print(thisByte, HEX);     
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT); //valor de this byte en octa 
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);  //valor de this byte en binari 

  if(thisByte == 126)  // if printed last visible character '~'
  { 
    while(true)
    { 
    } 
  } 
  thisByte++;     // go on to the next character

} 




