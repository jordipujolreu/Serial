/**********************************************************************************
**                                                                               **
**                               SERIAL                                          **
**                         Number comunication                                   **
**  NOM : Jordi Pujlreu Sala                                   DATA: 13/2/17     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ********************************************************

float r1, r2;             // variables for the R's
float rSerie, rParalel;   // variables for the results
//********** Setup ************************************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}
//********** Loop *************************************************************
void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
    r1 = Serial.parseInt();// look for valid int the incoming serial stream
    
    r2 = Serial.parseInt();
    
    if (Serial.read() == '\n') { // quan presionem enter significa que hem acabat d'enviar dades
    
    Serial.print (" R1=  "); //escriure els seguents missatges
    Serial.print (r1);
    Serial.print ("ohms");
    Serial.print (" R2= ");
    Serial.print (r2);
    Serial.println ("ohms");

    rSerie = r1 + r2 ; // operacions calcular rserie
    rParalel = r1*r2 / (r1+r2) ; //operacio per calcular rparalel

    Serial.print (" Rserie = ");//escriure....
    Serial.print (rSerie); //resultat operació
    Serial.print ("ohms");
    Serial.print (" rparalel = ");
    Serial.print (rParalel);
    Serial.println ("ohms");
    Serial.println ("Entra nous valors per a r1 i r2 ");
    
    
  
    
   

     
    
    }
  }
}

