/*************************************************************************
**                                                                      **
**                             Serial                                   **
**                       Number communication                           **
**                                                                      ** 
**  NOM: Jordi Pujolreu Sala                                02/03/2017  **                                            
*************************************************************************/

//***************************** INCLUDE **********************************

//***************************** VARIABLES ********************************
int a, t;// variables for the R's
long s;
double m;
//***************************** SETUP ************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.print("Entra numeros un per un (per acabar 0): ");
  
}
//***************************** LOOP *************************************
void loop() {
  a= 1;
  t = 0;
  do{
  while (Serial.available() > 0) {  // if there's any serial available, read it
    a = Serial.parseInt();// look for valid int the incoming serial stream
     Serial.print(a);
     Serial.print(" - ");
    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
      s = s + a;
      t++;
    }
  }
  }
    while (a!=0);
    t--;
    m = (float)s/t;
    Serial.println(""); 
    Serial.print("S'han entrat ");
    Serial.print(t);
    Serial.print(" numeros, la suma de tots ells es ");
    Serial.print(s);
    Serial.print(" i la mitja ");
    Serial.print(m);
    Serial.println(".");
    Serial.println("");
    Serial.print("Entrar numeros un a un (per acabar 0): ");
}
   
    

    
 
  
//***************************** FUNCIONS *********************************

