/*
Program for Common Anode Single Digit Decimal COunter using Arduino
for more Details visit - http://www.techiestuffs.com/electronics/single-digit-counter-arduino/ ‎

Program by - Vivek R aka Vividvilla ( http://vivek.techiestuffs.com/ )
*/

const int a=7;
const int b=6;
const int c=4;
const int d=2;
const int e=1;
const int f=9;
const int g=10;

void LightLed(int n)
{
  switch(n)
  {
    case 0:
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW); 
    digitalWrite(d, LOW); 
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    break;
       
        case 1:
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW); 
    digitalWrite(d, HIGH); 
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;
    
        case 2:
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH); 
    digitalWrite(d, LOW); 
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    break;
        case 3:
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW); 
    digitalWrite(d, LOW); 
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    break;
    
        case 4:
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW); 
    digitalWrite(d, HIGH); 
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    break;
    
        case 5:
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW); 
    digitalWrite(d, LOW); 
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    break;
    
        case 6:
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW); 
    digitalWrite(d, LOW); 
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    break;
    
        case 7:
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW); 
    digitalWrite(d, HIGH); 
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;
    
        case 8:
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW); 
    digitalWrite(d, LOW); 
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    break;
    
        case 9:
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW); 
    digitalWrite(d, LOW); 
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    break;
  }
};

void setup()
{
  pinMode(a, OUTPUT); 
  pinMode(b, OUTPUT); 
  pinMode(c, OUTPUT); 
  pinMode(d, OUTPUT); 
  pinMode(e, OUTPUT); 
  pinMode(f, OUTPUT); 
  pinMode(g, OUTPUT);
};

void loop ()
{
for (int i=0;i<10;i++) 

{
  LightLed(i);
  delay (1000);
}
};

/*
for Detailed Description of the code visit here - http://www.techiestuffs.com/electronics/single-digit-counter-arduino/ ‎
*/
