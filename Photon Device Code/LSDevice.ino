int activator = D7;
int result = D0;
int LED = D1;
int tester;

void setup() {
    pinMode(activator, OUTPUT);
    pinMode(result, OUTPUT);
    pinMode(LED, OUTPUT);
    digitalWrite(activator, HIGH);
    digitalWrite(LED, LOW);
    Particle.subscribe("safe", safe, "440029000547343337373738");
}
void safe(const char *event, const char *data){
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, HIGH);
    delay(1000);
}

void loop() {
   tester = digitalRead(result);
if (tester == LOW) {

       Particle.publish( "help", "on");

}
}
/*void safe(){
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, HIGH);
    delay(100);
}*/
