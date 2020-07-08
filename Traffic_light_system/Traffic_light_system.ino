
int greenled = 8; 
int yellowled = 9;
int redled = 10;
int pedgreenled = 7;//Pedestrian light
int pedredled = 6;
void setup(){
pinMode(greenled, OUTPUT); //Pinmodes of the leds
pinMode(yellowled, OUTPUT);
pinMode(redled, OUTPUT);
pinMode(pedredled, OUTPUT);
pinMode(pedgreenled, OUTPUT);
}
void loop(){
digitalWrite(greenled, HIGH); //Green on for 7 seconds
digitalWrite(pedredled, HIGH); // ped red on
delay(7000);
// flash the ped green
for (int x=0; x<8; x++) {
digitalWrite(greenled, HIGH);
delay(250);
digitalWrite(greenled, LOW);
delay(250);
}
digitalWrite(greenled, LOW); //Green off,
digitalWrite(pedredled, LOW);// ped.red off
digitalWrite(redled, HIGH); // red on
digitalWrite(pedgreenled, HIGH); // ped green on
delay(7000);
// flash the green
for (int x=0; x<10; x++) {
digitalWrite(pedgreenled, HIGH);
delay(250);
digitalWrite(pedgreenled, LOW);
delay(250);
}
digitalWrite(redled, LOW);//red off,yellow on,ped red on,
digitalWrite(yellowled, HIGH);
digitalWrite(pedredled, HIGH);
delay(3000);
digitalWrite(yellowled, LOW);//yellow off,pedgreen off
digitalWrite(pedgreenled, LOW);
}
