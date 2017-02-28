/**********************************************************************************
**                                                                               **
**                             Number comunication                               **
**                                                                               **
**   NOM: Jordi Pujolreu Sala                             DATA: 27 / 02 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int numero;           

//********** SETUP ****************************************************************
void setup() 
{                         // S'executa un sol cop
  Serial.begin(9600);     // Configura una biblioteca a 9600 bpm
  Serial.println ("Entra un numero");   // Escriu  (Entra un numero)
  
}
//********** LOOP *****************************************************************
 void loop ()
 {
   while (Serial.available() > 0) {      
    numero = Serial.parseFloat(); 
    Serial.print ("El numero ");     //escriu...   
    Serial.print (numero);                   
    if (numero / 10 == 0)   // significa que te 1 xifra      
      {
      Serial.println (" te 1 xifra");  // escriure...
      }     
    else if (numero / 100 == 0) // o dos.... 
      {   
      Serial.println (" te 2 xifres");  
      }
    else if (numero / 1000 == 0) //o tres....
      {
      Serial.println (" te 3 xifres");  
      }
    else if (numero / 10000 == 0)   // o quatre... 
      {
      Serial.println (" te 4 xifres");  
      }
    else if (numero / 100000 == 0)  //o cinc
      {
      Serial.println (" te 5 xifres");   
      }
  
      
    if (Serial.read() == '\n')
    Serial.println (" ");                    
    Serial.println ("Entra un altre numero");   
                      
  }
 }


