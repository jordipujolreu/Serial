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
  Serial.println("Entra un número");
}
//********** Loop *************************************************************
void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
    numero = Serial.parseInt();// look for valid int the incoming serial stream
   
    
    if (Serial.read() == '\n') { // quan presionem enter significa que hem acabat d'enviar dades
    
    if (numero <38) //si treballa menys de 38 hores....
    { r = (numero*20)-((numero*20)*0.05); // al saber que cobra menys de 800 ja apliquem el sou
    Serial.print( "El salari per "); //escrivim....
    Serial.print(numero);
    Serial.print ("hores es de ");
    Serial.print (r);
    Serial.println ("euros");
    }
    
    else { //si treballa 38 o més....
    r = (37 * 20) + ((numero - 37) * 30); //calculem el sou cobrat per hores ja amb les extres
    }
    
    if (r >800) //si es superior a 800...
    {
    r= r-(r*0.1); //impost de 10 per cent
    Serial.print( "El salari per ");
    Serial.print(numero);
    Serial.print ("hores es de ");
    Serial.print (r);
    Serial.println ("euros");
    }
    
    else { //si és inferior a 800....
    r = r-(r*0.05); //impost del cinc per cent
    Serial.print( "El salari per ");
    Serial.print(numero);
    Serial.print ("hores es de ");
    Serial.print (r);
    Serial.println ("euros");
    }
    
    Serial.println("Entra nous valors per al numero");
    
    
    
        
    }
  }
}

