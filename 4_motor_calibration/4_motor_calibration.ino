#define pwmPin1 5  //BLDC Motor
#define pwmPin2 4
#define pwmPin3 13
#define pwmPin4 25

#define frequency 200  // Motor frequency: changing this need some change inside the code related ESC signals
#define resolution 12  // Resolution 8 means 255 max value, 12 means

void setup() {
  Serial.begin(500000);
  ledcAttach(pwmPin1, frequency, resolution);
  ledcAttach(pwmPin2, frequency, resolution);
  ledcAttach(pwmPin3, frequency, resolution);
  ledcAttach(pwmPin4, frequency, resolution);

}

void loop() {
  char x = 'k';
if(Serial.available()> 0){
 x = Serial.read();
}

if(x == 'a'){
  ledcWrite(pwmPin1, 0.819*1000);//////////////////////////////////////////////////////////////////////////////////
  ledcWrite(pwmPin2, 0.819*1000);
  ledcWrite(pwmPin3, 0.819*1000);
  ledcWrite(pwmPin4, 0.819*1000);
  Serial.println("1000");
}
else if(x == 'z'){
  ledcWrite(pwmPin1, 0.819*2000);//////////////////////////////////////////////////////////////////////////////////
  ledcWrite(pwmPin2, 0.819*2000);
  ledcWrite(pwmPin3, 0.819*2000);
  ledcWrite(pwmPin4, 0.819*2000);
  Serial.println("2000");
}
else if(x == 'p'){
  ledcWrite(pwmPin1, 0.819*1200);//////////////////////////////////////////////////////////////////////////////////
  ledcWrite(pwmPin2, 0.819*1200);
  ledcWrite(pwmPin3, 0.819*1200);
  ledcWrite(pwmPin4, 0.819*1200);
  Serial.println("1300");
}
}
