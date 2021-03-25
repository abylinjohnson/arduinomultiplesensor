int sensor1 = 2;
int sensor2 = 3;
int sensor3 = 4;
int sensor4 = 5;
int led1 = 6;
int led2 = 7;
int led3 = 8;
int led4 = 9;
int sv1, sv2, sv3, sv4,t1,t2,t3,t4;
void setup() {
 pinMode(sensor1, INPUT_PULLUP);
 pinMode(sensor2, INPUT_PULLUP);
 pinMode(sensor3, INPUT_PULLUP);
 pinMode(sensor4, INPUT_PULLUP);
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 digitalWrite(led1, LOW);
 digitalWrite(led2, LOW);
 digitalWrite(led3, LOW);
 digitalWrite(led4, LOW);
 
}
void loop() {
  sv1 = digitalRead(sensor1);
  sv2 = digitalRead(sensor2);
  sv3 = digitalRead(sensor3);
  sv4 = digitalRead(sensor4);
  
    if(sv1 == 0)
    {
      digitalWrite(led1, HIGH);
      t1 = millis();
    }
    if(sv2 == 0)
    {
      digitalWrite(led2, HIGH);
      t2 = millis();
    }
    if(sv3 == 0)
    {
      digitalWrite(led3, HIGH);
      t3 = millis();
    }
    if(sv4 == 0)
    {
      digitalWrite(led4, HIGH);
      t4 = millis();
    }
    if( sv1 == 1 && millis()-t1>10000)
    {
      digitalWrite(led1, LOW);
      t1 = 0; 
    }
    if( sv2 == 1 && millis()-t2>10000)
    {
      digitalWrite(led2, LOW);
      t2 = 0; 
    }
    if( sv3 == 1 && millis()-t3>10000)
    {
      digitalWrite(led3, LOW);
      t3 = 0; 
    }
    if( sv4 == 1 && millis()-t4>10000)
    {
      digitalWrite(led4, LOW);
      t4 = 0; 
    }
    
}
