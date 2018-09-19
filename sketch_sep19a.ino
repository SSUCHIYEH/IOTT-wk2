const int ledcount=10;
const int buttonPin=27;
int num=0;
int i=1;
int buttonState=0;
int ledpins[]={
  19,18,5,17,16,4,0,2,15,14 };

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin,INPUT);
  digitalWrite(buttonPin,HIGH);
  // put your setup code here, to run once:
  for(int thisled = 0; thisled < ledcount; thisled++){
    pinMode(ledpins[thisled],OUTPUT); 
    }
 
}

void loop() {
  // put your main code here, to run repeatedly:
    buttonState=digitalRead(buttonPin);
    if (i==1){
    if(buttonState==HIGH){
         digitalWrite(ledpins[num],HIGH);
       num++;
       delay(200);
       if(num==10){i++;   num=9;}
      }
    }
     
     else{ 
    
      if (buttonState == HIGH) {
         digitalWrite(ledpins[num],LOW);
         num--;
         delay(200);
         if(num==0){i--;digitalWrite(ledpins[num],LOW);delay(200);}
       }
     }
  

    
  }
  
    
 
 

  

