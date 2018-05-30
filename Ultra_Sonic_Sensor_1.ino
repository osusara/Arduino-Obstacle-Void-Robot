int echo = 9;
int trig = 8;
long tim;

long dis;



void setup() {



  Serial.begin(9600);

  pinMode(2,OUTPUT);

  pinMode(3,OUTPUT);

  pinMode(10,OUTPUT);

  pinMode(11,OUTPUT);

  pinMode(12,OUTPUT);

  pinMode(13,OUTPUT);


  pinMode(echo,INPUT);

  pinMode(trig,OUTPUT);


}



void loop() {


  
digitalWrite(trig,LOW);

  delayMicroseconds(2);


  digitalWrite(trig,HIGH);

  delayMicroseconds(10);

  digitalWrite(trig,LOW);



  tim = pulseIn(echo,HIGH);

  dis = (tim/2) / 29.1;



  digitalWrite(2,HIGH);

  delay(50);

  digitalWrite(2,LOW);

  delay(50);

  digitalWrite(2,HIGH);

  delay(50);

  digitalWrite(2,LOW);

  delay(500);

  digitalWrite(3,HIGH);

  delay(50);

  digitalWrite(3,LOW);

  delay(50);

  digitalWrite(3,HIGH);

  delay(50);

  digitalWrite(3,LOW);

  delay(1000);



  if(dis < 25){


    delay(250);

    digitalWrite(13,HIGH);

    digitalWrite(10,HIGH);

    digitalWrite(12,LOW);

    digitalWrite(11,LOW);

    delay(750);

    digitalWrite(13,LOW);

    digitalWrite(10,HIGH);

    digitalWrite(12,HIGH);

    digitalWrite(11,LOW);

    delay(250);

  }
else{


    digitalWrite(12,HIGH);

    digitalWrite(11,HIGH);

    digitalWrite(13,LOW);

    digitalWrite(10,LOW);

  
}


}
