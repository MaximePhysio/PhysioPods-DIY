#include "pitches.h"

int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};
int rouge = {
  NOTE_C4
};
int bleu = {
  NOTE_D4
};
int jaune = {
  NOTE_E4
};
int vert = {
  NOTE_F4
};

int ledpin5 = 3;
int ledpin6 = 5;
int ledpin7 = 6;
int ledpin8 = 9;

int buttonpin1 = 10;
int buttonpin2 = 11;
int buttonpin3 = 12;
int buttonpin4 = 8;

long nombre1;
long nombre2;
long nombre3;
long nombre4;
long nombre5;
long nombre6;

int x = (4);
int y = (4);
int z = (4);

byte var;


void setup() {
  Serial.begin(9600);

  randomSeed(analogRead(0));

  delay(1000);

  pinMode(ledpin5, OUTPUT);
  pinMode(ledpin6, OUTPUT);
  pinMode(ledpin7, OUTPUT);
  pinMode(ledpin8, OUTPUT);

  pinMode(buttonpin1, INPUT_PULLUP);
  pinMode(buttonpin2, INPUT_PULLUP);
  pinMode(buttonpin3, INPUT_PULLUP);
  pinMode(buttonpin4, INPUT_PULLUP);

  //
  // Séquence allumage
  //


  digitalWrite(ledpin5, HIGH);
  delay (200);
  digitalWrite(ledpin6, HIGH);
  delay (100);
  digitalWrite(ledpin5, LOW);
  delay (200);
  digitalWrite(ledpin7, HIGH);
  delay (100);
  digitalWrite(ledpin6, LOW);
  delay (200);
  digitalWrite(ledpin8, HIGH);
  delay (100);
  digitalWrite(ledpin7, LOW);
  delay (200);
  digitalWrite(ledpin5, HIGH);
  delay (100);
  digitalWrite(ledpin8, LOW);
  delay (200);
  digitalWrite(ledpin6, HIGH);
  delay (100);
  digitalWrite(ledpin5, LOW);
  delay (200);
  digitalWrite(ledpin7, HIGH);
  delay (100);
  digitalWrite(ledpin6, LOW);
  delay (200);
  digitalWrite(ledpin8, HIGH);
  delay (100);
  digitalWrite(ledpin7, LOW);
  delay (200);
  digitalWrite(ledpin8, LOW);

  delay (1500);
}

void loop() {

  //
  // Niveau 1, x5
  //

  for (var = 0 ; var < 5 ; var++) {

    //
    // Tirage
    //

    nombre1 = random(4);
    Serial.println((nombre1));
    Serial.print((x));

    //
    // Affichage du premier tirage aléatoire
    //

    if (nombre1 == (0))
    {
      digitalWrite(ledpin5, HIGH);
      tone(4, rouge, 700);
      delay (700);
      digitalWrite(ledpin5, LOW);
    }
    if (nombre1 == (1))
    {
      digitalWrite(ledpin6, HIGH);
            tone(4, bleu, 700);
      delay (700);
      digitalWrite(ledpin6, LOW);
    }
    if (nombre1 == (2))
    {
      digitalWrite(ledpin7, HIGH);
            tone(4, jaune, 700);
      delay (700);
      digitalWrite(ledpin7, LOW);
    }
    if (nombre1 == (3))
    {
      digitalWrite(ledpin8, HIGH);
            tone(4, vert, 700);
      delay (700);
      digitalWrite(ledpin8, LOW);
    }

    //
    // Appui des boutons et attribution de X
    //

    while (x == 4) {
      if (digitalRead(buttonpin1) == LOW) {
        x = (0);
      }

      if (digitalRead(buttonpin2) == LOW) {
        x = (1);
      }

      if (digitalRead(buttonpin3) == LOW) {
        x = (2);
      }

      if (digitalRead(buttonpin4) == LOW) {
        x = (3);
      }
    }

    //
    // Comparaison
    //
    
    if (x == nombre1) {
      digitalWrite(ledpin5, HIGH);
      digitalWrite(ledpin6, HIGH);
      digitalWrite(ledpin7, HIGH);
      digitalWrite(ledpin8, HIGH);
      delay (2000);
      digitalWrite(ledpin5, LOW);
      digitalWrite(ledpin6, LOW);
      digitalWrite(ledpin7, LOW);
      digitalWrite(ledpin8, LOW);
    }
    else {
      digitalWrite(ledpin5, HIGH);
      delay (2000);
      digitalWrite(ledpin5, LOW);
    }

    //
    // Reset de x
    //

    x = (4);

    //
    // Attente avant test suivant
    //

    delay (1000);
    
    //
    // Fin du premier test
    //
  }

  //
  // Niveau 2, x5
  //

  for (var = 4 ; var < 9 ; var++) {

    //
    // Tirage
    //

    nombre1 = random(4);
    nombre2 = random(4);
    Serial.println((nombre1));
    Serial.print((nombre2));

    //
    // Affichage du premier tirage aléatoire
    //

    if (nombre1 == (0))
    {
      digitalWrite(ledpin5, HIGH);
            tone(4, rouge, 700);
      delay (700);
      digitalWrite(ledpin5, LOW);
    }
    if (nombre1 == (1))
    {
      digitalWrite(ledpin6, HIGH);
            tone(4, bleu, 700);
      delay (700);
      digitalWrite(ledpin6, LOW);
    }
    if (nombre1 == (2))
    {
      digitalWrite(ledpin7, HIGH);
            tone(4, jaune, 700);
      delay (700);
      digitalWrite(ledpin7, LOW);
    }
    if (nombre1 == (3))
    {
      digitalWrite(ledpin8, HIGH);
            tone(4, vert, 700);
      delay (700);
      digitalWrite(ledpin8, LOW);
    }

    delay(1000); // Delai entre les deux affichages

    if (nombre2 == (0))
    {
      digitalWrite(ledpin5, HIGH);
            tone(4, rouge, 700);
      delay (700);
      digitalWrite(ledpin5, LOW);
    }
    if (nombre2 == (1))
    {
      digitalWrite(ledpin6, HIGH);
            tone(4, bleu, 700);
      delay (700);
      digitalWrite(ledpin6, LOW);
    }
    if (nombre2 == (2))
    {
      digitalWrite(ledpin7, HIGH);
            tone(4, jaune, 700);
      delay (700);
      digitalWrite(ledpin7, LOW);
    }
    if (nombre2 == (3))
    {
      digitalWrite(ledpin8, HIGH);
            tone(4, vert, 700);
      delay (700);
      digitalWrite(ledpin8, LOW);
    }


    //
    // Appui des boutons et attribution de X et Y
    //

    while (x == 4 && y == 4) {
      while (x == 4) {
        if (digitalRead(buttonpin1) == LOW) {
          x = (0);
        }

        if (digitalRead(buttonpin2) == LOW) {
          x = (1);
        }

        if (digitalRead(buttonpin3) == LOW) {
          x = (2);
        }

        if (digitalRead(buttonpin4) == LOW) {
          x = (3);
        }
      }
      delay (300);

      while (x < 4 & y == 4) {
        if (digitalRead(buttonpin1) == LOW) {
          y = (0);
        }

        if (digitalRead(buttonpin2) == LOW) {
          y = (1);
        }

        if (digitalRead(buttonpin3) == LOW) {
          y = (2);
        }

        if (digitalRead(buttonpin4) == LOW) {
          y = (3);
        }
      }
    }
    //
    // Comparaison
    //

    Serial.println(('Comparaison'));
    if (x == nombre1 & y == nombre2) {
      digitalWrite(ledpin5, HIGH);
      digitalWrite(ledpin6, HIGH);
      digitalWrite(ledpin7, HIGH);
      digitalWrite(ledpin8, HIGH);
      delay (2000);
      digitalWrite(ledpin5, LOW);
      digitalWrite(ledpin6, LOW);
      digitalWrite(ledpin7, LOW);
      digitalWrite(ledpin8, LOW);
    }
    else {
      digitalWrite(ledpin5, HIGH);
      delay (2000);
      digitalWrite(ledpin5, LOW);
      var = (var-2);
    }
    //
    // Reset de x et y
    //

    x = (4);
    y = (4);

    //
    // Attente avant test suivant
    //

    delay (1000);

    //
    // Fin du test
    //
  }

  //
  // Niveau 3, x5
  //

  for (var = 9 ; var < 15 ; var++) {

    //
    // Tirage
    //

    nombre1 = random(4);
    nombre2 = random(4);
    nombre3 = random(4);

    //
    // Affichage du premier tirage aléatoire
    //

    if (nombre1 == (0))
    {
      digitalWrite(ledpin5, HIGH);
            tone(4, rouge, 700);
      delay (700);
      digitalWrite(ledpin5, LOW);
    }
    if (nombre1 == (1))
    {
      digitalWrite(ledpin6, HIGH);
            tone(4, bleu, 700);
      delay (700);
      digitalWrite(ledpin6, LOW);
    }
    if (nombre1 == (2))
    {
      digitalWrite(ledpin7, HIGH);
            tone(4, jaune, 700);
      delay (700);
      digitalWrite(ledpin7, LOW);
    }
    if (nombre1 == (3))
    {
      digitalWrite(ledpin8, HIGH);
            tone(4, vert, 700);
      delay (700);
      digitalWrite(ledpin8, LOW);
    }

    delay(700); // Delai entre les deux affichages

    if (nombre2 == (0))
    {
      digitalWrite(ledpin5, HIGH);
            tone(4, rouge, 700);
      delay (700);
      digitalWrite(ledpin5, LOW);
    }
    if (nombre2 == (1))
    {
      digitalWrite(ledpin6, HIGH);
            tone(4, bleu, 700);
      delay (700);
      digitalWrite(ledpin6, LOW);
    }
    if (nombre2 == (2))
    {
      digitalWrite(ledpin7, HIGH);
            tone(4, jaune, 700);
      delay (700);
      digitalWrite(ledpin7, LOW);
    }
    if (nombre2 == (3))
    {
      digitalWrite(ledpin8, HIGH);
            tone(4, vert, 700);
      delay (700);
      digitalWrite(ledpin8, LOW);
    }

    delay(700); // Delai entre les deux affichages

    if (nombre3 == (0))
    {
      digitalWrite(ledpin5, HIGH);
            tone(4, rouge, 700);
      delay (700);
      digitalWrite(ledpin5, LOW);
    }
    if (nombre3 == (1))
    {
      digitalWrite(ledpin6, HIGH);
            tone(4, bleu, 700);
      delay (700);
      digitalWrite(ledpin6, LOW);
    }
    if (nombre3 == (2))
    {
      digitalWrite(ledpin7, HIGH);
            tone(4, jaune, 700);
      delay (700);
      digitalWrite(ledpin7, LOW);
    }
    if (nombre3 == (3))
    {
      digitalWrite(ledpin8, HIGH);
            tone(4, vert, 700);
      delay (700);
      digitalWrite(ledpin8, LOW);
    }


    //
    // Appui des boutons et attribution de X et Y et Z
    //

    while (x == 4 && y == 4 ) { // Vraiment nécessaire ?
      while (x == 4) {
        if (digitalRead(buttonpin1) == LOW) {
          x = (0);
        }

        if (digitalRead(buttonpin2) == LOW) {
          x = (1);
        }

        if (digitalRead(buttonpin3) == LOW) {
          x = (2);
        }

        if (digitalRead(buttonpin4) == LOW) {
          x = (3);
        }
      }
      delay (300);

      while (x < 4 & y == 4 & z == 4) {
        if (digitalRead(buttonpin1) == LOW) {
          y = (0);
        }

        if (digitalRead(buttonpin2) == LOW) {
          y = (1);
        }

        if (digitalRead(buttonpin3) == LOW) {
          y = (2);
        }

        if (digitalRead(buttonpin4) == LOW) {
          y = (3);
        }
      }
      delay (300);

      while (x < 4 & y < 4 & z == 4) {
        if (digitalRead(buttonpin1) == LOW) {
          z = (0);
        }

        if (digitalRead(buttonpin2) == LOW) {
          z = (1);
        }

        if (digitalRead(buttonpin3) == LOW) {
          z = (2);
        }

        if (digitalRead(buttonpin4) == LOW) {
          z = (3);
        }
      }
    }

    //
    // Comparaison
    //


    if (x == nombre1 & y == nombre2 & z == nombre3) {
      digitalWrite(ledpin5, HIGH);
      digitalWrite(ledpin6, HIGH);
      digitalWrite(ledpin7, HIGH);
      digitalWrite(ledpin8, HIGH);
      delay (2000);
      digitalWrite(ledpin5, LOW);
      digitalWrite(ledpin6, LOW);
      digitalWrite(ledpin7, LOW);
      digitalWrite(ledpin8, LOW);
    }
    else {
      digitalWrite(ledpin5, HIGH);
      delay (2000);
      digitalWrite(ledpin5, LOW);
    }

    //
    // Reset de x et y et z
    //

    x = (4);
    y = (4);
    z = (4);

    //
    // Attente avant test suivant
    //

    delay (1000);

    //
    // Fin du test
    //

  }


}
