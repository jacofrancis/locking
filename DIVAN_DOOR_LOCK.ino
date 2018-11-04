

int ledPin = 6;   //  LED is connected to digital pin 7
int ledPin13 = 7; // LED is connected to digital pin 6
int switchParkedPin = 8;  // park switch pin 8
int switchReversePin = 9;// reverse switch pin 2
int switchValue;   
bool ParkedPressed = false;
bool ReversePressed = false;


void setup()    
{    
      pinMode(ledPin, OUTPUT);
      pinMode(ledPin13, OUTPUT);
      pinMode(switchParkedPin, INPUT);   
      digitalWrite(switchParkedPin, HIGH);
      pinMode(switchReversePin, INPUT);   
      digitalWrite(switchReversePin, HIGH);  
}    
      
void loop()   // run over and over again
{    
    
    switchValue = digitalRead(switchParkedPin);   // check to see if the switch is pressed
      if ((switchValue == HIGH) ) {

        if(!ParkedPressed)
        {
          digitalWrite(ledPin, HIGH);   
          delay(1000);   
          digitalWrite(ledPin, LOW);   
           
          
          ParkedPressed = true;        
        }
        
      }else
      {
        ParkedPressed = false;
      }

       switchValue = digitalRead(switchReversePin);   // check to see if the switch is pressed
      if ((switchValue == HIGH) ) {

        if(!ReversePressed)
        {
          digitalWrite(ledPin13, HIGH);   
          delay(1000);   
          digitalWrite(ledPin13, LOW);   
           
          
          ReversePressed = true;        
        }
        
      }else
      {
        ReversePressed = false;
      }
      

}
