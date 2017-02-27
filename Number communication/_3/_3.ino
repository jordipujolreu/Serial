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
   
    r = numero % 10000;
    
    if ( r == 1 )
    {
    Serial.print ("El");
    Serial.print (numero);
    Serial.println ("te cinc xifres");
    }
    
    r= numero % 1000;
    
    else if ( r == 1)
    {
     Serial.print ("El");
    Serial.print (numero);
    Serial.println ("te quatre xifres");
    }

   r= numero % 100;

   else if ( r == 1)
    {
    Serial.print ("El");
    Serial.print (numero);
    Serial.println ("te tres xifres");
    }
    r = numero % 10;

    else if ( r == 1)
    {
     Serial.print ("El");
    Serial.print (numero);
    Serial.println ("te dos xifres");
    }
    r= numero % 10;
    else if ( r == 0)
    {
     Serial.print ("El");
    Serial.print (numero);
    Serial.println ("te una xifres");
    }
    
    
    
 
    Serial.println("Entra nous valors per al numero");
        
    }
  }
}

