

int btn1 = 2;int led1 = 14; //ok
int btn2 = 4;  int led2 = 5; //cup bigg led


int hot1 =15;
int motor =16;

int tempC;

void setup() {
 Serial.begin(9600);  /* Define baud rate for serial communication */

pinMode(btn1,INPUT_PULLUP);
pinMode(btn2,INPUT_PULLUP);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(hot1,OUTPUT);
pinMode(motor,OUTPUT);
digitalWrite(led1, 0);
digitalWrite(led2, 0);
digitalWrite(hot1, 0);
digitalWrite(motor, 0);
}

int btnst1 = 0;  
int btnst2 = 0;  

void loop()
{
   
       tempC = analogRead(A0);
         tempC = (3.3 * tempC * 100.0) / 1024.0;
         
         btnst1 = digitalRead(btn1); btnst2 = digitalRead(btn2);
            delay(1000);
         Serial.println(tempC);
    
         
         if (btnst1 == LOW)
         {
          Serial.println("make caffe");
          
         digitalWrite(led1, 1);Serial.println("led1 on");
          digitalWrite(hot1, 1);Serial.println("hot on");
         } else{};
         delay(100);
         
          if (tempC > 150){
          digitalWrite(led1, 0);Serial.println("led1 off");
          digitalWrite(hot1, 0);Serial.println("hot off");
          digitalWrite(motor, 1);Serial.println("motor on");

          } 
          delay(100);
          if (tempC < 80){
  
          digitalWrite(motor, 0);

          }

}
