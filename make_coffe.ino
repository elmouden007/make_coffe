/*
tempC = analogRead(pinLM35);

  // Calculating temperature
  tempC = (3.3 * tempC * 100.0) / 1024.0;
      
      myGLCD.print( val , 182, 17);

        Serial.print(tempC);
  
  // myGLCD.setColor(255, 255, 255);
  myGLCD.print( "Set" , 120, 17);
    myGLCD.print( tempC , 15, 17);
digitalWrite(led, 0); 
  Serial.print("\n");

  delay(1000);
if (tempC > 150){
  digitalWrite(hot, 1);
         myGLCD.setColor(RED);
    myGLCD.print("* WARNNING *", CENTER, 70);
}
if (tempC > val){
  digitalWrite(hot, 1);
  digitalWrite(motor, 0);
  Serial.println("coffe on");
       myGLCD.setColor(255, 255, 255);
   // myGLCD.print("*  Caffe Ready  *", CENTER, 70);
  
  }
  if (tempC < 60){
  
  digitalWrite(motor, 1);
  Serial.println("coffe on");
       myGLCD.setColor(255, 255, 255);
    //myGLCD.print("* Caffe Done *", CENTER, 300);
    
  
}
*/

void run1(){
  


  
  }

int motor = 33;
int lm35 = 28;
int hot = 30;
int tempC;
int btn = 5;
// the setup routine runs once when you press reset:
void setup() {

  pinMode(motor, OUTPUT);
   pinMode(hot, OUTPUT);
    pinMode(lm35, INPUT);
       pinMode(btn, INPUT);
    Serial.begin(9600);
    digitalWrite(hot, 1);  
    digitalWrite(motor, 1);  
}

int buttonState = 0;  


void loop() {
tempC = analogRead(lm35);

  tempC = (3.3 * tempC * 100.0) / 1024.0;

            buttonState = digitalRead(btn);

            if (buttonState == HIGH) {   

                Serial.println("hot start");  
    // turn LED on:    
    digitalWrite(hot, 0);  
  } 
  
            
      delay(1000);
        Serial.println(tempC);  
           

    if (tempC > 150){
  digitalWrite(hot, 1);
  digitalWrite(motor, 0);
  Serial.println("coffe start");
  Serial.println("------");
  Serial.println("hot off");
   Serial.println("-----");
    Serial.println(" motor on");
       

  
  }
  if (tempC < 80){
  
  digitalWrite(motor, 1);
  Serial.println("temp - 60");
     
    //myGLCD.print("* Caffe Done *", CENTER, 300);
    
  
}
}
