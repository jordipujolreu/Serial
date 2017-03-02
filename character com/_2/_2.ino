/*************************************************************************
**                                                                      **
**                             Serial                                   **
**                    Character communication                           **
**                                                                      ** 
**  NOM: Jordi Pujolre Sala                                 02/03/2017  **                                            
*************************************************************************/

//***************************** INCLUDE **********************************

//***************************** VARIABLES ********************************
char thisByte;
int thatByte = 33;     // you can also write ASCII characters in single quotes.
// ex: '!' is the same as 33, so you could also use this: int thatByte = '!'; 


//***************************** SETUP ************************************
void setup() {
  Serial.begin(9600);    //Initialize serial and wait for port to open:
  Serial.println("Es majuscula o minuscula?"); // prints title with ending line break
  Serial.println("");
}

//***************************** LOOP *************************************
void loop() {
  while (Serial.available() > 0) { // see if there's incoming serial data:
    thisByte = thatByte;
    thatByte = Serial.read();
    if (thatByte == '\n') {// look for the newline. Is the end of your sentence:   
  {
      if (thisByte > 64 &  thisByte < 91)
      {
        Serial.print("  La lletra ");
        Serial.print(thisByte);
        Serial.println(" es majuscula.");
        Serial.println(""); 
      }
      else  if (thisByte > 96 &  thisByte < 123)
      {
        Serial.print("  La lletra ");
        Serial.print(thisByte);
        Serial.println(" es minuscula.");
        Serial.println("");    
      }
      else
      {
        Serial.println("  Aixo no es una lletra");
        Serial.println(""); 
      }
      Serial.println("Es majuscula o minuscula?");
      Serial.println("");
    }
  }
  }
}

