int led1=2;
int led2=3;
int led3=4;
int led4=5;

int boton1=7;
int boton2=8;
int boton3=9;
int boton4=10;

int val_boton1;
int val_boton2;
int val_boton3;
int val_boton4;

int tiempo;
int tiempo2;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  pinMode(boton1, INPUT);
  pinMode(boton2, INPUT);
  pinMode(boton3, INPUT);
  pinMode(boton4, INPUT);

  tiempo=1500;
  tiempo2=200;
}

void loop() {
  // put your main code here, to run repeatedly:
  val_boton1=digitalRead(boton1);
  val_boton2=digitalRead(boton2);
  val_boton3=digitalRead(boton3);
  val_boton4=digitalRead(boton4);

  if(val_boton1==0){
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    parpadear_1();
    delay(tiempo);
    }else digitalWrite(led1, HIGH);

   if(val_boton2==0){
    digitalWrite(led1,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    parpadear_2();
    delay(tiempo);
    }else digitalWrite(led2, HIGH);

   if(val_boton3==0){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led4,LOW);
    parpadear_3();
    delay(tiempo);
   }else digitalWrite(led3, HIGH);

   
   if(val_boton4==0){
    digitalWrite(led1, LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led2,LOW);
    parpadear_4();
    delay(tiempo);
   }else digitalWrite(led4, HIGH);
}


void parpadear_4(){
digitalWrite(led4, LOW);
delay(tiempo2);
digitalWrite(led4, HIGH);
delay(tiempo2);
digitalWrite(led4, LOW);
delay(tiempo2);
digitalWrite(led4, HIGH);
}

void parpadear_1(){
digitalWrite(led1, LOW);
delay(tiempo2);
digitalWrite(led1, HIGH);
delay(tiempo2);
digitalWrite(led1, LOW);
delay(tiempo2);
digitalWrite(led1, HIGH);
}

void parpadear_2(){
digitalWrite(led2, LOW);
delay(tiempo2);
digitalWrite(led2, HIGH);
delay(tiempo2);
digitalWrite(led2, LOW);
delay(tiempo2);
digitalWrite(led2, HIGH);
}

void parpadear_3(){
digitalWrite(led3, LOW);
delay(tiempo2);
digitalWrite(led3, HIGH);
delay(tiempo2);
digitalWrite(led3, LOW);
delay(tiempo2);
digitalWrite(led3, HIGH);
}
