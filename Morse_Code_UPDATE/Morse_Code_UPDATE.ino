/*
  Morse code
  
  Lets you type sentences in plain english and arduino will output sentences in more code via a LED
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
  
