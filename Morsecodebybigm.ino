#define LED 11
char* morseCode[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};
const int Time=300;
void Dot();
void Dash();
void LetterSpace();
void WordSpace();
void morseAnalysis(char character);
void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{if(Serial.available()>0){
  String input=Serial.readString();
  for(int i=0; i<input.length();i++){
  char character=input.charAt(i);
    morseAnalysis(character);
    if(character !=' ')//ensuring that each letter, number, and space is transmitted with the appropriate pauses between elements and words
      LetterSpace();
  }
 } 
}
void Dot()
{digitalWrite(LED,HIGH);
 delay(Time);
 digitalWrite(LED,LOW);
 delay(Time);
}
void Dash()
  {int Delaytime=3*Time;
  digitalWrite(LED,HIGH);
 delay(Delaytime);
 digitalWrite(LED,LOW);
  delay(Time);
}
void LetterSpace()
  {int Delaytime=3*Time;
  delay(Delaytime);
}
void WordSpace()
  {int Delaytime=7*Time;
  delay(Delaytime);
}
void morseAnalysis(char character){
if(character >='A'|| character<= 'Z')
{  char* morse=morseCode[character-'A'];
  for(int i=0;i<strlen(morse);i++)
  {
   if(morse[i]=='.')
     Dot();
    else if(morse[i]=='-')
      Dash();
  }
 }
  else if(character >= 'a' && character <= 'z')
  { char* morse=morseCode[26+(character-'a')];
    for(int i=0;i<strlen(morse);i++)
    {
     if(morse[i]=='.')
       Dot();
    else if(morse[i]=='-')
      Dash();
    }
  }
  else if(character >= '0' && character <= '9')
  { char* morse=morseCode[52+(character-'0')];
    for(int i=0;i<strlen(morse);i++)
    {
     if(morse[i]=='.')
       Dot();
    else if(morse[i]=='-')
      Dash();
    }
  }
  else if(character == ' ')
    WordSpace();
}