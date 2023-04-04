int led1 = D7; // led 1 = D7 set 

void setup()  //setup - runs once at the beginning of your program
{
  pinMode(led1, OUTPUT);
}

void loop()  // loop for blinking "Irene" in argon particle
{
    //Morse code for "I"
    
    digitalWrite (led1, HIGH);
    delay (500);
    digitalWrite (led1, LOW);
    delay (1000);
    digitalWrite (led1, HIGH);	   
    delay (500);				
    digitalWrite (led1, LOW);	  
    delay (1000);
    
    
    //Morse code for "R"
    
    digitalWrite (led1, HIGH);
    delay (500);
    digitalWrite (led1, LOW);
    delay (1000);
    digitalWrite (led1, HIGH);	   
    delay (1000);				
    digitalWrite (led1, LOW);	  
    delay (1000);
    digitalWrite (led1, HIGH);	   
    delay (500);				
    digitalWrite (led1, LOW);	  
    delay (1000);
    
    
    //Morse code for "E"
    
    digitalWrite (led1, HIGH);
    delay (500);
    digitalWrite (led1, LOW);
    delay (1000);
    
    //Morse code for "N"
    
    digitalWrite(led1, HIGH);	   
    delay(1000);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000); 

    //Morse code for "E"

    digitalWrite (led1, HIGH);
    delay (500);
    digitalWrite (led1, LOW);
    delay (1000);
    
        //END
    
    digitalWrite(led1,LOW);
    delay(5000);
    
    // And repeat!

}

       
