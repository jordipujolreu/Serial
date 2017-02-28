/**********************************************************************************
**                                                                               **
**                               SERIAL                                          **
**                         Number comunication                                   **
**  NOM : Jordi Pujlreu Sala                                   DATA: 28/2/17     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ********************************************************
int r ;
int numero ;             // variables for the R's
//********** Setup ************************************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Quina mida te el cargol en cm?");
}
//********** Loop *************************************************************
void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
    numero = Serial.parseInt();// look for valid int the incoming serial stream
   
    
    if (Serial.read() == '\n') { // quan presionem enter significa que hem acabat d'enviar dades
    
    if (numero > 11) { //cargl mes gran que 11
      Serial.println("El cargol es incorrecte");
    }
    else if ( numero  >= 8 ) { //de 8 fins que es incorrecte
      Serial.print ("El cargol amb una mida de ");
      Serial.print(numero);
      Serial.println( " cm es molt gran");
    }
    else if (numero  >= 5) { //de 5 fins que compleix la anterior
      Serial.print ("El cargol amb una mida de ");
      Serial.print(numero);
      Serial.println( " cm es gran");
    }
    else if (numero >= 3) { //de 3 fins que comleix la anterior
      Serial.print ("El cargol amb una mida de ");
      Serial.print(numero);
      Serial.println( " cm es mitja");
    }
    else { //si no es cap de les anteriors...
      Serial.print ("El cargol amb una mida de ");
      Serial.print(numero);
      Serial.println( " cm es petit");
      
    }
    
    
    
    Serial.println("Quina mida te el cargol en cm?");
    
    
    
        
    }
  }
}

