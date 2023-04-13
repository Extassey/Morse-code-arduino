/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  J(); // Write what you want the LED to Display in morse code here
  A();
  M(); // Write the text vertically one letter at a time all caps followed by ();
  E(); // Example " A(); " Would write morse code for A
  S(); // for space write " SPACE(); "
  SPACE();
 
  
  
}
/*I still need to add all of the letters of the alphabet
 * but you can write sentences and words with 6 letters so far
 */

void J()
{
 digitalWrite(LED_BUILTIN, HIGH);   // Dot of J (First Letter)
  delay(200);                       
  digitalWrite(LED_BUILTIN, LOW);    // Short Pause
  delay(200);                       
    digitalWrite(LED_BUILTIN, HIGH);   // line of J
  delay(600);                       
  digitalWrite(LED_BUILTIN, LOW);     // Short Pause
  delay(200);                      
    digitalWrite(LED_BUILTIN, HIGH);   // line of J
  delay(600);                       
  digitalWrite(LED_BUILTIN, LOW);     // Short Pause
  delay(200);                     
    digitalWrite(LED_BUILTIN, HIGH);   // line of J
  delay(600);                      
  digitalWrite(LED_BUILTIN, LOW);    // Medium Pause
  delay(600);                     
}

void K()
{
 digitalWrite(LED_BUILTIN, HIGH);   // Dot of K (First Letter)
  delay(600);                       
  digitalWrite(LED_BUILTIN, LOW);    // Short Pause
  delay(200);                       
    digitalWrite(LED_BUILTIN, HIGH);   // line of K
  delay(200);                       
  digitalWrite(LED_BUILTIN, LOW);     // Short Pause
  delay(200);                      
    digitalWrite(LED_BUILTIN, HIGH);   // line of K
  delay(600);                       
  digitalWrite(LED_BUILTIN, LOW);     // Short Pause
  delay(200);                     
                    
}

  void A()

  {
  digitalWrite(LED_BUILTIN, HIGH);   // Dot of A (New Letter)
  delay(200);                     
  digitalWrite(LED_BUILTIN, LOW);    // Short Pause
  delay(200);                      
    digitalWrite(LED_BUILTIN, HIGH);   // Line of A
  delay(600);                     
  digitalWrite(LED_BUILTIN, LOW);    // Medium Pause 
  delay(600);                    
  }
  void M()
{
   digitalWrite(LED_BUILTIN, HIGH);   // Line of M (New Letter)
  delay(600);                      
  digitalWrite(LED_BUILTIN, LOW);    // short pause
  delay(200);                       
    digitalWrite(LED_BUILTIN, HIGH);   // Line of M
  delay(600);                      
  digitalWrite(LED_BUILTIN, LOW);    // Medium pause 
  delay(600);                      
}
void E()
{
   digitalWrite(LED_BUILTIN, HIGH);   // Dot of E (New Letter)
  delay(200);                      
  digitalWrite(LED_BUILTIN, LOW);    // Medium Pause 
  delay(600);                       
}

void S()
{
   digitalWrite(LED_BUILTIN, HIGH);   // Dot of S (New Letter)
  delay(200);                      
  digitalWrite(LED_BUILTIN, LOW);    // Short Pause
  delay(200);                       
    digitalWrite(LED_BUILTIN, HIGH);   // Dot of S
  delay(200);                      
  digitalWrite(LED_BUILTIN, LOW);    // Short Pause
  delay(200);                      
    digitalWrite(LED_BUILTIN, HIGH);   // Dot of S
  delay(200);                       
  digitalWrite(LED_BUILTIN, LOW);    // Long pause
  delay(200);               
}

void SPACE()
{
   delay(1200); 
}
  
