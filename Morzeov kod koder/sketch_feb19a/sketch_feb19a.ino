int BuzzerPin = 13; // pin na kojem se prikljucuje buzzer
int LengthOfDot =100; // duzina tacke [ms]
int LengthOfLine = 3*LengthOfDot;  //duzina linije [ms]
int TonePitch = 250;  //visina tona
int Pause = LengthOfLine;  //pauza
int Input;  //unos korisnika

void setup() 
{
  pinMode(BuzzerPin,OUTPUT);
  Serial.begin(9600);
}

void dot()
{
  digitalWrite(BuzzerPin,HIGH);
  tone(BuzzerPin,TonePitch);   // declaring .
  delay(LengthOfDot);
  digitalWrite(BuzzerPin,LOW);
  noTone(BuzzerPin);
  delay(LengthOfDot);
}

void line()
{
  digitalWrite(BuzzerPin,HIGH);
  tone(BuzzerPin,TonePitch);   // declaring -
  delay(LengthOfLine);
  digitalWrite(BuzzerPin,LOW);
  noTone(BuzzerPin);
  delay(LengthOfDot);
}

void loop() 
{
  Input = Serial.read();
  char let = Input;
  
  
  if(let == 'a' || let =='A')
  {
    dot();
    line();
  }  
  if(let == 'b' || let =='B')
  {
    line();
    dot();
    dot();
    dot();
  }  
  if(let == 'c' || let =='C')
  {
    line();
    dot();
    line();
    dot();
  }  
  if(let == 'd' || let =='D')
  {
    line();
    dot();
    dot();
  }  
  if(let == 'e' || let =='E')
  {
    dot();
  } 
  if(let == 'f' || let =='F')
  {
   dot();
   dot();
   line();
   dot();
  }  
  if(let == 'g' || let =='G')
  {
    line();
    line();
    dot();
  }  
  if(let == 'h' || let =='H')
  {
    dot();
    dot();
    dot();
    dot();
  } 
  if(let == 'i' || let =='I')
  {
    dot();
    dot();
  }
  if(let == 'j' || let =='J')
  {
    dot();
    line();
    line();
    line();
  }
  if(let == 'k' || let =='K')
  {
    line();
    dot();
    line();
  } 
  if(let == 'l' || let =='L')
  {
    dot();
    line();
    dot();
    dot();
  } 
  if(let == 'm' || let =='M')
  {
    line();
    line();
  }
  if(let == 'n' || let =='N')
  {
    line();
    dot();
  }  
  if(let == 'o' || let =='O')
  {
    line();
    line();
    line();
  }  
  if(let == 'p' || let =='P')
  {
    dot();
    line();
    line();
    dot();
  }
  if(let == 'q' || let =='Q')
  {
    line();
    line();
    dot();
    line();
  }  
  if(let == 'r' || let =='R')
  {
    dot();
    line();
    dot();
  }
  if(let == 's' || let =='S')
  {
    dot();
    dot();
    dot();
  }  
  if(let == 't' || let =='T')
  {
    line();
  }
  if(let == 'u' || let =='U')
  {
    dot();
    dot();
    line();
  }
  if(let == 'v' || let =='V')
  {
    dot();
    dot();
    dot();
    line();
  }  
  if(let == 'w' || let =='W')
  {
    dot();
    line();
    line();
  } 
  if(let == 'x' || let =='X')
  {
    line();
    dot();
    dot();
    line();
  }  
  if(let == 'y' || let =='Y')
  {
    line();
    dot();
    line();
    line();
  }
  if(let == 'z' || let =='Z')
  {
    line();
    line();
    dot();
    dot();
  }  
  if(let == '1')
  {
    dot();
    line();
    line();
    line();
    line();
  }
  if(let == '2')
  {
    dot();
    dot();
    line();
    line();
    line();
  }
  if(let == '3')
  {
    dot();
    dot();
    dot();
    line();
    line();
  }
  if(let == '4')
  {
    dot();
    dot();
    dot();
    dot();
    line();
  }
  if(let == '5')
  {
    dot();
    dot();
    dot();
    dot();
    dot();
  }
  if(let == '6')
  {
    line();
    dot();
    dot();
    dot();
    dot();
  }
  if(let == '7')
  {
    line();
    line();
    dot();
    dot();
    dot();
  } 
  if(let == '8')
  {
    line();
    line();
    line();
    dot();
    dot();
  }
  if(let == '9')
  {
    line();
    line();
    line();
    line();
    dot();
  }
  if(let == '0')
  {
    line();
    line();
    line();
    line();
    line();;
  }
  if(let == '.')
  {
    dot();
    line();
    dot();
    line();
    dot();
    line();
  }
  if(let == ',')
  {
    line();
    line();
    dot();
    dot();
    line();
    line();
  }
  if(let == '?')
  {
    dot();
    dot();
    line();
    line();
    dot();
    dot();
  }
  if(let == ' ')
  {
    delay(Pause);  // ovo jos proveriti sa Robertom da li postoji, i koliko je 
  }
  delay(LengthOfLine-LengthOfDot);
}
