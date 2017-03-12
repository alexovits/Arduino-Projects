/*
  Digital output demonstration
  Morse code
  Microcontrollers Laboratory 1. problem
  March 2nd 2017

  dot(ti)   1 long
  dash(ta)  3 long
  between dots and dashes 1 long
  between letters         3 long
  between words           7 long

*/

/*
  things do to:
  1. make the dash() function
  2. complete the decoding table so it can deal with numbers
  3. complete the decoding tabel so it can handle big letters
  (the Morse code for big or small letters is the same)
  4. make the loop repeat the message
  5. change the message to your name
*/

const int lowerCaseConvert = 32;
char message[100];
int  dotlength;
int dashLength;
// the setup function runs once when you press reset or power the board

void setup()
{
  // initialize digital pin 13 as an output.
  //this is the pin that has the built-in LED on it
  pinMode(13, OUTPUT);

  //this is the message we are going to repeat
  strcpy(message, "zsolt");
  dotlength = 200; //this is in miliseconds
  dashLength = 600;
}

void dot()
{
  digitalWrite(13, HIGH);
  delay(dotlength);
  digitalWrite(13, LOW);
  delay(dotlength);
}

void dash()
{
  digitalWrite(13, HIGH);
  delay(dashLength);
  digitalWrite(13, LOW);
  delay(dotlength); // Between letters there's one "long"
}

void end_of_letter()
{
  //total pause: 3 lengths
  //1 already in the previous letter
  delay(2 * dotlength);
}

void space()
{
  //total pause: 7 lengths
  //1 already in the previous letter
  delay(6 * dotlength);
}

void decode_letter(char letter)
{
  // Convert uppercase letter to lowercase by shifting it's ASCII code with 32 (lowerCaseConvert constant)
  if (letter >= 65 && letter <= 90) {
    letter += lowerCaseConvert;
  }

  switch (letter)
  {
    case ' ': {
        space();
        break;
      }
    case 'a': {
        dot();
        dash();
        end_of_letter();
        break;
      }
    case 'b': {
        dash();
        dot();
        dot();
        dot();
        end_of_letter();
        break;
      }
    case 'c': {
        dash();
        dot();
        dash();
        dot();
        end_of_letter();
        break;
      }
    case 'd': {
        dash();
        dot();
        dot();
        end_of_letter();
        break;
      }
    case 'e': {
        dot();
        end_of_letter();
        break;
      }
    case 'f': {
        dot();
        dot();
        dash();
        dot();
        end_of_letter();
        break;
      }
    case 'g': {
        dash();
        dash();
        dot();
        end_of_letter();
        break;
      }
    case 'h': {
        dot();
        dot();
        dot();
        dot();
        end_of_letter();
        break;
      }
    case 'i': {
        dot();
        dot();
        end_of_letter();
        break;
      }
    case 'j': {
        dot();
        dash();
        dash();
        dash();
        end_of_letter();
        break;
      }
    case 'k': {
        dash();
        dot();
        dash();
        end_of_letter();
        break;
      }
    case 'l': {
        dot();
        dash();
        dot();
        dot();
        end_of_letter();
        break;
      }
    case 'm': {
        dash();
        dash();
        end_of_letter();
        break;
      }
    case 'n': {
        dash();
        dot();
        end_of_letter();
        break;
      }
    case 'o': {
        dash();
        dash();
        dash();
        end_of_letter();
        break;
      }
    case 'p': {
        dot();
        dash();
        dash();
        dot();
        end_of_letter();
        break;
      }
    case 'q': {
        dash();
        dash();
        dot();
        dash();
        end_of_letter();
        break;
      }
    case 'r': {
        dot();
        dash();
        dot();
        end_of_letter();
        break;
      }
    case 's': {
        dot();
        dot();
        dot();
        end_of_letter();
        break;
      }
    case 't': {
        dash();
        end_of_letter();
        break;
      }
    case 'u': {
        dot();
        dot();
        dash();
        end_of_letter();
        break;
      }
    case 'v': {
        dot();
        dot();
        dot();
        dash();
        end_of_letter();
        break;
      }
    case 'w': {
        dot();
        dash();
        dash();
        end_of_letter();
        break;
      }
    case 'x': {
        dash();
        dot();
        dot();
        dash();
        end_of_letter();
        break;
      }
    case 'y': {
        dash();
        dot();
        dash();
        dash();
        end_of_letter();
        break;
      }
    case 'z': {
        dash();
        dash();
        dot();
        dot();
        end_of_letter();
        break;
      }
    case '1': {
        dot();
        dash();
        dash();
        dash();
        dash();
        end_of_letter();
        break;
      }
    case '2': {
        dot();
        dot();
        dash();
        dash();
        dash();
        end_of_letter();
        break;
      }
    case '3': {
        dot();
        dot();
        dot();
        dash();
        dash();
        end_of_letter();
        break;
      }
    case '4': {
        dot();
        dot();
        dot();
        dot();
        dash();
        end_of_letter();
        break;
      }
    case '5': {
        dot();
        dot();
        dot();
        dot();
        dot();
        end_of_letter();
        break;
      }
    case '6': {
        dash();
        dot();
        dot();
        dot();
        dot();
        end_of_letter();
        break;
      }
    case '7': {
        dash();
        dash();
        dot();
        dot();
        dot();
        end_of_letter();
        break;
      }
    case '8': {
        dash();
        dash();
        dash();
        dot();
        dot();
        end_of_letter();
        break;
      }
    case '9': {
        dash();
        dash();
        dash();
        dash();
        dot();
        end_of_letter();
        break;
      }
    case '0': {
        dash();
        dash();
        dash();
        dash();
        dash();
        end_of_letter();
        break;
      }
  }

}

// the loop function runs over and over again forever
// make it repeat the message in morse code over and over again
void loop()
{
  int i;

  for (i = 0; i < strlen(message); i++) {
    decode_letter(message[i]);
  }

}

