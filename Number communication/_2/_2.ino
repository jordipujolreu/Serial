/**********************************************************************************
**                                                                               **
**                               SERIAL                                          **
**                         Number comunication                                   **
**  NOM : Jordi Pujlreu Sala                                   DATA: 13/2/17     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ********************************************************
int r ;
int numero ;             // variables for the R's
//********** Setup ************************************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra un número");
}
//********** Loop *************************************************************
void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
    numero = Serial.parseInt();// look for valid int the incoming serial stream
   
    
    if (Serial.read() == '\n') { // quan presionem enter significa que hem acabat d'enviar dades
   
    r = numero % 2 ;
    
    if ( r == 0 )
    {
    Serial.print ("El");
    Serial.print (numero);
    Serial.println ("es parell");
    }
    
    
    else
    {
    Serial.print ("El");
    Serial.print (numero);
    Serial.println ("es imparell");
    }
    Serial.println("Entra nous valors per al numero");
        
    }
  }
}

