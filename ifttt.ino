int led = D7;
int lightval = 0;

void setup() 
{
    //Check code works 
    pinMode(led, OUTPUT);
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    
    
    Particle.variable("light", &lightval, INT);
}


void loop() 
{
    //To simulate sensor input
    int lightval = random(0,1);
    
    delay(50); //Delay required to not overload the system with publish       
}
