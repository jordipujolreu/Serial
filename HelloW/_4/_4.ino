/**********************************************************************************
**                                                                               **
**                               Serial                                          **
**                            Hello world.4                                      **
**  NOM : Jordi Pujlreu Sala                                   DATA: 30/1/17     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup() {
 Serial.begin(9600);
 Serial.println(" ");
 Serial.println("Escull un numero de l'operacio que vols realitzar?"); 
 Serial.println(" 1.Comprovar numero de tarjeta de credit"); 
 Serial.println(" 2.Comprovar numero de compte bancari"); 
 Serial.println(" 3.Buscar un digit perdut de tarjeta de credit"); 
}

void loop() {
 

}
