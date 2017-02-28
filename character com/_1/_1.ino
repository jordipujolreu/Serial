/******************************************************************************
**        Prem tecla i mostra valor en dec, hex, oct i binari                **
******************************************************************************/
//********** Variables ********************************************************
int thisByte;
int thatByte = 33;     // you can also write ASCII characters in single quotes.
// ex: '!' is the same as 33, so you could also use this: int thatByte = '!'; 
//********** Setup ************************************************************
void setup() {
  Serial.begin(9600);    //Initialize serial and wait for port to open:
  Serial.println("Prem una tecla..."); // prints title with ending line break
}
//********** Loop *************************************************************
void loop() {
  while (Serial.available() > 0) { // see if there's incoming serial data:
    thisByte = thatByte;
    thatByte = Serial.read();
    if (thatByte == '\n') {// look for the newline. Is the end of your sentence:   
      
    }
  } 
}

