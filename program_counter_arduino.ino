int button= 2;
int nilaitombol;
int count;

int pwmLED= 9;

void setup(){
  pinMode(button, INPUT);
  pinMode(pwmLED, OUTPUT);
}

void loop (){
  nilaitombol=digitalRead(button);

  if(nilaitombol ==1){
    delay(100);
    count++;
    delay(500);
    if(count==1){ 
      analogWrite(pwmLED,255);
    }
    if(count==2){ 
      analogWrite(pwmLED,200);
    }
    if(count==3){
      analogWrite(pwmLED,150);
    }
    if(count==4){
      analogWrite(pwmLED,100);
    }
    if(count==5){
      analogWrite(pwmLED,50);
    }
    if(count==6){
      analogWrite(pwmLED,25);
    }
    if(count==7){
      analogWrite(pwmLED,10);
    }
    if(count==8){
      analogWrite(pwmLED,0);
      count=0;
    }
    
}
}
