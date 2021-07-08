void setup() {
pinMode(11,OUTPUT);
}

void loop() {

digitalWrite(11,HIGH);     // This creat a 60 Hz Square signal, for power saving 
delay(8.33);
digitalWrite(11,LOW);
delay(8.33);

  
}
