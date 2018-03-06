/**************************************************************
**                                                           **
**                    TÍTOL: Cruïlla de semàfors             **
**                           Digital I/O                     **
**                                                           **
**  NOM: Danut Zupcau                   DATA: 05/03/2018     **
**************************************************************/
//******************* INCLUDE  *************************

//******************* VARIABLE *************************
const int LED_A_R = 7;          // donar nom al pin 7 de l’Arduino
const int LED_A_G = 8;          // donar nom al pin 8 de l’Arduino
const int LED_A_V = 9;          // donar nom al pin 9 de l’Arduino
const int LED_B_R = 10;         // donar nom al pin 10 de l’Arduino
const int LED_B_G = 11;         // donar nom al pin 11 de l’Arduino
const int LED_B_V = 12;         // donar nom al pin 12 de l’Arduino
//******************* SETUP ****************************
void setup()
{
  pinMode(LED_A_R, OUTPUT);     // definir el pin 12 com una sortida
  pinMode(LED_A_G, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(LED_A_V, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(LED_B_R, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(LED_B_G, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(LED_B_V, OUTPUT);     // definir el pin 11 com una sortida
  
}
//******************* LOOP *****************************
void loop()
{
  digitalWrite(LED_A_R, HIGH);    // posar a 5V el pin 6
  digitalWrite(LED_A_G, LOW);    // posar a 5V el pin 7
  digitalWrite(LED_A_V, LOW);    // posar a 5V el pin 8
  digitalWrite(LED_B_R, HIGH);    // posar a 5V el pin 9
  digitalWrite(LED_B_G, LOW);    // posar a 5V el pin 10
  digitalWrite(LED_B_V, LOW);    // posar a 5V el pin 11
  
  delay(300);                  // es queden leds 500ms encesos

  digitalWrite(LED_A_R, HIGH);    // posar a 5V el pin 6
  digitalWrite(LED_A_G, LOW);    // posar a 5V el pin 7
  digitalWrite(LED_A_V, LOW);    // posar a 5V el pin 8
  digitalWrite(LED_B_R, LOW);    // posar a 5V el pin 9
  digitalWrite(LED_B_G, LOW);    // posar a 5V el pin 10
  digitalWrite(LED_B_V, HIGH);    // posar a 5V el pin 11
  
  delay(1200);                  // es queden leds 500ms encesos
  
  
  digitalWrite(LED_A_R, HIGH);    // posar a 5V el pin 6
  digitalWrite(LED_A_G, LOW);    // posar a 5V el pin 7
  digitalWrite(LED_A_V, LOW);    // posar a 5V el pin 8
  digitalWrite(LED_B_R, LOW);    // posar a 5V el pin 9
  digitalWrite(LED_B_G, HIGH);    // posar a 5V el pin 10
  digitalWrite(LED_B_V, LOW);    // posar a 5V el pin 11
  
  delay(300);                  // es queden leds 500ms encesos

  digitalWrite(LED_A_R, HIGH);    // posar a 5V el pin 6
  digitalWrite(LED_A_G, LOW);    // posar a 5V el pin 7
  digitalWrite(LED_A_V, LOW);    // posar a 5V el pin 8
  digitalWrite(LED_B_R, HIGH);    // posar a 5V el pin 9
  digitalWrite(LED_B_G, LOW);    // posar a 5V el pin 10
  digitalWrite(LED_B_V, LOW);    // posar a 5V el pin 11
  
  delay(300);                  // es queden leds 500ms encesos

 
  digitalWrite(LED_A_R, LOW);    // posar a 5V el pin 6
  digitalWrite(LED_A_G, LOW);    // posar a 5V el pin 7
  digitalWrite(LED_A_V, HIGH);    // posar a 5V el pin 8
  digitalWrite(LED_B_R, HIGH);    // posar a 5V el pin 9
  digitalWrite(LED_B_G, LOW);    // posar a 5V el pin 10
  digitalWrite(LED_B_V, LOW);    // posar a 5V el pin 11
  
  delay(1200);                  
  
  digitalWrite(LED_A_R, LOW);    // posar a 5V el pin 6
  digitalWrite(LED_A_G, HIGH);    // posar a 5V el pin 7
  digitalWrite(LED_A_V, LOW);    // posar a 5V el pin 8
  digitalWrite(LED_B_R, HIGH);    // posar a 5V el pin 9
  digitalWrite(LED_B_G, LOW);    // posar a 5V el pin 10
  digitalWrite(LED_B_V, LOW);    // posar a 5V el pin 11
  
  delay(300);                  


  digitalWrite(LED_A_R, HIGH);    // posar a 5V el pin 6
  digitalWrite(LED_A_G, LOW);    // posar a 5V el pin 7
  digitalWrite(LED_A_V, LOW);    // posar a 5V el pin 8
  digitalWrite(LED_B_R, HIGH);    // posar a 5V el pin 9
  digitalWrite(LED_B_G, LOW);    // posar a 5V el pin 10
  digitalWrite(LED_B_V, LOW);    // posar a 5V el pin 11
  
  delay(300); 

}
