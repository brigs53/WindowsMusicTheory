#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>
#include <dos.h>
#include <math.h>

#define BPM 120
#define MINUTE 60000
#define shortPause 100
#define freqMulti pow(2, 2)
#define freqMultiU pow(2, 6)
#define shortRhythm 2
#define shortAgain 60
#define ESC 27

void print_keyboard(void);

void music_menu(void);
void series_menu(void);
void keyboard_menu(void);

void beep_input(char *noteName, int octave, float length);
void overtone_series (char *noteName, int max_partial);
void undertone_series (char *noteName, int max_partial);
float return_fundFreq (char *noteName);

float whole;
float half;
float quarter;
float eight;
float sixteen;
float thirtyTwo;
float sixtyFour;
float shortest;

char c;

int main() {
    whole = (MINUTE/BPM)*4; //4 beats
    half = whole/2;
    quarter = half/2;
    printf("%d",quarter);
    eight = quarter/2;
    sixteen = eight/2 + 30;
    thirtyTwo = sixteen/2;
    sixtyFour = thirtyTwo/2;
    shortest = 100;
  printf("Hello World!");

  do {
    printf("Select Which Program You Wish to Run:\n");
    printf("OPTIONS  \t\t\tPRESS\n");
    printf("Music    \t\t\t  M  \n");
    printf("Series   \t\t\t  S  \n");
    printf("Keyboard \t\t\t  K  \n");
    printf("Quit     \t\t\t  Q  \n");
    scanf("%s", &c);
    printf("Your Choice: %c\n", c);
    switch (c) {
case 'm':
case 'M':
    printf("Music\n");
    system("cls");
    music_menu();
    break;
case 's':
case 'S':
    printf("Series\n");
    system("cls");
    series_menu();
    break;
case 'k':
case 'K':
    printf("Keyboard\n");
    system("cls");
    keyboard_menu();
    break;
case 'q':
case 'Q':
    printf("Quit\n");
    return 0;
default:
    printf("Default Choice: %c\n", c);
    printf("Invalid Selection: Please Try Again.\n");
    system("cls");
    break;
    }
} while(true);

  //Sleep(20000);
  //overtone_series("D", 10);
  //undertone_series("D", 100);
  /*
  for (int i = 0; i < 100; i++) {
    printf("\a");
    Beep(207.65, eight); //Ab3
    Sleep(shortPause);
    Beep(311.13, eight); //Eb4
    Sleep(shortPause);
    Beep(466.16, eight); //Bb4
    Sleep(shortPause);
    Beep(493.88, eight); //B4
    Sleep(shortPause);
    Beep(554.37, eight); //C#5
    Sleep(shortPause);
    Beep(739.99, eight); //F#5
    Sleep(shortPause);
    Beep(1244.51, eight); //D#6
    Sleep(shortPause);
    Beep(207.65, shortest);
    Beep(932.33, whole);
    Sleep(shortPause);
    beep_input("Ab", 3, half);
    beep_input("B", 3, quarter);

  }
  */

  for (int i = 0; i < 2; i++) {
    beep_input("F", 4, sixteen);
    //Sleep(500);
    //beep_input("D", 8, shortestSound);
    beep_input("D", 4, sixteen);
    beep_input("A", 5, sixteen);
    beep_input("D", 4, sixteen);
  }

  for (int i = 0; i < 2; i++) {
    beep_input("D", 4, sixteen);
    //Sleep(500);
    //beep_input("D", 8, shortestSound);
    beep_input("F", 4, sixteen);
    beep_input("A", 5, sixteen);
    beep_input("F", 4, sixteen);
  }
    //Sleep(500);

  /*
  for (int i = 0; i < 1; i++) {
  beep_input("D", 4, sixteen); //D
  Sleep(shortPause);
  beep_input("D", 4, sixteen); //D
  Sleep(shortPause);
  beep_input("D", 5, sixteen); //D
  Sleep(shortPause);
  beep_input("S", 5, sixteen); //
  Sleep(shortPause);
  beep_input("A", 4, eight);   //A
  Sleep(shortPause);
  beep_input("S", 5, sixteen); //
  Sleep(shortPause);
  beep_input("Ab", 4, sixteen);//Ab
  Sleep(shortPause);
  beep_input("S", 5, sixteen); //
  Sleep(shortPause);
  beep_input("G", 4, sixteen); //G
  Sleep(shortPause);
  beep_input("S", 5, sixteen); //
  Sleep(shortPause);
  beep_input("F", 4, eight);   //F
  Sleep(shortPause);
  beep_input("D", 4, sixteen);
  Sleep(shortPause);
  beep_input("F", 4, sixteen);
  Sleep(shortPause);
  beep_input("G", 4, sixteen);
  Sleep(shortPause);

  beep_input("C", 4, sixteen); //C
  Sleep(shortPause);
  beep_input("C", 4, sixteen); //C
  Sleep(shortPause);
  beep_input("D", 5, sixteen); //D
  Sleep(shortPause);
  beep_input("S", 5, sixteen); //
  Sleep(shortPause);
  beep_input("A", 4, eight);   //A
  Sleep(shortPause);
  beep_input("S", 5, sixteen); //
  Sleep(shortPause);
  beep_input("Ab", 4, sixteen);//Ab
  Sleep(shortPause);
  beep_input("S", 5, sixteen); //
  Sleep(shortPause);
  beep_input("G", 4, sixteen); //G
  Sleep(shortPause);
  beep_input("S", 5, sixteen); //
  Sleep(shortPause);
  beep_input("F", 4, eight);   //F
  Sleep(shortPause);
  beep_input("D", 4, sixteen);
  Sleep(shortPause);
  beep_input("F", 4, sixteen);
  Sleep(shortPause);
  beep_input("G", 4, sixteen);
  Sleep(shortPause);

  beep_input("B", 3, sixteen); //D
  Sleep(shortPause);
  beep_input("B", 3, sixteen); //D
  Sleep(shortPause);
  beep_input("D", 5, sixteen); //D
  Sleep(shortPause);
  beep_input("S", 5, sixteen); //
  Sleep(shortPause);
  beep_input("A", 4, eight);   //A
  Sleep(shortPause);
  beep_input("S", 5, sixteen); //
  Sleep(shortPause);
  beep_input("Ab", 4, sixteen);//Ab
  Sleep(shortPause);
  beep_input("S", 5, sixteen); //
  Sleep(shortPause);
  beep_input("G", 4, sixteen); //G
  Sleep(shortPause);
  beep_input("S", 5, sixteen); //
  Sleep(shortPause);
  beep_input("F", 4, eight);   //F
  Sleep(shortPause);
  beep_input("D", 4, sixteen);
  Sleep(shortPause);
  beep_input("F", 4, sixteen);
  Sleep(shortPause);
  beep_input("G", 4, sixteen);
  Sleep(shortPause);

  beep_input("Bb", 3, sixteen); //C
  Sleep(shortPause);
  beep_input("Bb", 3, sixteen); //C
  Sleep(shortPause);
  beep_input("D", 5, sixteen); //D
  Sleep(shortPause);
  beep_input("S", 5, sixteen); //
  Sleep(shortPause);
  beep_input("A", 4, eight);   //A
  Sleep(shortPause);
  beep_input("S", 5, sixteen); //
  Sleep(shortPause);
  beep_input("Ab", 4, sixteen);//Ab
  Sleep(shortPause);
  beep_input("S", 5, sixteen); //
  Sleep(shortPause);
  beep_input("G", 4, sixteen); //G
  Sleep(shortPause);
  beep_input("S", 5, sixteen); //
  Sleep(shortPause);
  beep_input("F", 4, eight);   //F
  Sleep(shortPause);
  beep_input("D", 4, sixteen);
  Sleep(shortPause);
  beep_input("F", 4, sixteen);
  Sleep(shortPause);
  beep_input("G", 4, sixteen);
  Sleep(shortPause);
  }
*/
  Sleep(3000);
  overtone_series("C", 10);
  Sleep(3000);
  undertone_series("C", 10);
  Sleep(3000);

  for (int i = 0; i < 1; i++) {
    printf("\a");
    Beep(207.65, eight); //Ab3
    Sleep(shortPause);
    Beep(311.13, eight); //Eb4
    Sleep(shortPause);
    Beep(466.16, eight); //Bb4
    Sleep(shortPause);
    Beep(493.88, eight); //B4
    Sleep(shortPause);
    Beep(554.37, eight); //C#5
    Sleep(shortPause);
    Beep(739.99, eight); //F#5
    Sleep(shortPause);
    Beep(1244.51, eight); //D#6
    Sleep(shortPause);
    Beep(207.65, shortest);
    Beep(932.33, whole);
    Sleep(shortPause);
    beep_input("Ab", 3, half);
    beep_input("B", 3, quarter);
  }
  return 0;
}

void beep_input(char *noteName, int octave, float length) {
  float freq = return_fundFreq (noteName); //hz

  Sleep(shortPause);
  printf("Note name: %s\n", noteName);
  printf("Octave: %d\n", octave);

freq = freq * pow(2, octave + 1);
printf("Frequency: %.6f\n", freq);
Beep(freq, length);
}

void overtone_series (char *noteName, int max_partial) {
  float freq = return_fundFreq (noteName); //hz
  freq *= freqMulti;

  for (int i = 0; i < max_partial; i++) {
  float actual_freq = freq * (i+1);
  printf("Frequency: %.6f\n", actual_freq);
  printf("Partial: %d\n", i+1);
  Beep(actual_freq, 800);
  }
}

void undertone_series (char *noteName, int max_partial) {
  float freq = return_fundFreq (noteName); //hz
  freq *= freqMultiU;

  for (int i = 0; i < max_partial; i++) {
  float actual_freq = freq / (i+1);
  printf("Frequency: %.6f\n", actual_freq);
  printf("Partial: %d\n", i+1);
  Beep(actual_freq, 800);
  }
}

float return_fundFreq (char *noteName) {
  float freq; //hz

  printf("Note name: %s\n", noteName);

  if (strcmp(noteName, "S") == 0) {
    printf("Silence\n");
    freq = 0;
  }
  else if (strcmp(noteName, "C") == 0) {
    printf("C\n");
    freq = 16.35;
  }
  else if (strcmp(noteName, "C#") == 0 || strcmp(noteName, "Db") == 0) {
    printf("C#/Db\n");
    freq = 17.32;
  }
  else if (strcmp(noteName, "D") == 0) {
    printf("D\n");
    freq = 18.35;
  }
  else if (strcmp(noteName, "D#") == 0 || strcmp(noteName, "Eb") == 0) {
    printf("D#/Eb\n");
    freq = 19.45;
  }
  else if (strcmp(noteName, "E") == 0) {
    printf("E\n");
    freq = 20.60;
  }
  else if (strcmp(noteName, "F") == 0) {
    printf("F\n");
    freq = 21.83;
  }
  else if (strcmp(noteName, "F#") == 0 || strcmp(noteName, "Gb") == 0) {
    printf("F#/Gb\n");
    freq = 23.12;
  }
  else if (strcmp(noteName, "G") == 0) {
    printf("G\n");
    freq = 24.50;
  }
  else if (strcmp(noteName, "G#") == 0 || strcmp(noteName, "Ab") == 0) {
    printf("G#/Ab\n");
    freq = 25.96;
  }
  else if (strcmp(noteName, "A") == 0) {
    printf("A\n");
    freq = 27.50;
  }
  else if (strcmp(noteName, "A#") == 0 || strcmp(noteName, "Bb") == 0) {
    printf("A#/Bb\n");
    freq = 29.14;
  }
  else if (strcmp(noteName, "B") == 0) {
    printf("B\n");
    freq = 30.87;
  }

  return freq;
}

void music_menu(void) {
}
void series_menu(void) {
do {
    char cs;
    printf("Select Which Harmonic Series You Wish to Run:\n");
    printf("OPTIONS  \t\t\tPRESS\n");
    printf("Overtone \t\t\t  O  \n");
    printf("Undertone\t\t\t  U  \n");
    printf("Back     \t\t\t  B  \n");
    scanf("%s", &cs);
    printf("Your Choice: %c\n", cs);
    switch (cs) {
case 'o':
case 'O':
    printf("Overtone\n");
    overtone_series("D", 10);
    break;
case 'u':
case 'U':
    printf("Undertone\n");
    undertone_series("D", 10);
    break;
case 'b':
case 'B':
    printf("Back\n");
    system("cls");
    return;
default:
    printf("Default Choice: %c\n", c);
    printf("Invalid Selection: Please Try Again.\n");
    break;
    }
} while(true);
}
void keyboard_menu(void) {
    char ck;
    int current_octave = 3;

    printf("Enter any character: \n");
printf(" _______________________________________ \n");
printf("|  | | | |  |  | | | | | |  |  | | | |  |\n");
printf("|  | | | |  |  | | | | | |  |  | | | |  |\n");
printf("|  |S| |D|  |  |G| |H| |J|  |  |L| |;|  |\n");
printf("|  |_| |_|  |  |_| |_| |_|  |  |_| |_|  |\n");
printf("|   |   |   |   |   |   |   |   |   |   |\n");
printf("| Z | X | C | V | B | N | M | , | . | / |\n");
printf("|___|___|___|___|___|___|___|___|___|___|\n");

printf("Current Octave: %d\n", current_octave);
print_keyboard();

printf("%c\n", 219);
printf("%c\n", 220);
printf("%c\n", 222);
printf("%c\n", 223);
printf("%c\n", 254);
printf("%c\n", 187);
printf("%c\n", 186);
printf("%c\n", 188);
printf("%c\n", 176);
printf("%c\n", 177);
printf("%c\n", 178);
printf("%c\n", 254);
printf("%c\n", 255);
printf("%c\n", 256);
printf("%c%c%c\n", 200, 205, 188);

    while(true) {
        //printf("Enter any character: ");
        if (kbhit()) {
            ck = getch();
            printf("%c is pressed.\n", ck);

            switch(ck) {
              case 'z':
              case 'Z':
                //printf("%c is pressed.\n", c);
                beep_input("C", current_octave, thirtyTwo);
                break;
              case 's':
              case 'S':
                //printf("%c is pressed.\n", c);
                beep_input("C#", current_octave, thirtyTwo);
                break;
              case 'x':
              case 'X':
                //printf("%c is pressed.\n", c);
                beep_input("D", current_octave, thirtyTwo);
                break;
              case 'd':
              case 'D':
                //printf("%c is pressed.\n", c);
                beep_input("Eb", current_octave, thirtyTwo);
                break;
              case 'c':
              case 'C':
                //printf("%c is pressed.\n", c);
                beep_input("E", current_octave, thirtyTwo);
                break;
              case 'v':
              case 'V':
                //printf("%c is pressed.\n", c);
                beep_input("F", current_octave, thirtyTwo);
                break;
              case 'g':
              case 'G':
                //printf("%c is pressed.\n", c);
                beep_input("F#", current_octave, thirtyTwo);
                break;
              case 'b':
              case 'B':
                //printf("%c is pressed.\n", c);
                beep_input("G", current_octave, thirtyTwo);
                break;
              case 'h':
              case 'H':
                //printf("%c is pressed.\n", c);
                beep_input("G#", current_octave, thirtyTwo);
                break;
              case 'n':
              case 'N':
                //printf("%c is pressed.\n", c);
                beep_input("A", current_octave, thirtyTwo);
                break;
              case 'j':
              case 'J':
                //printf("%c is pressed.\n", c);
                beep_input("A#", current_octave, thirtyTwo);
                break;
              case 'm':
              case 'M':
                //printf("%c is pressed.\n", c);
                beep_input("B", current_octave, thirtyTwo);
                break;
              case ',':
                //printf("%c is pressed.\n", c);
                beep_input("C", current_octave + 1, thirtyTwo);
                break;
              case 'l':
              case 'L':
                //printf("%c is pressed.\n", c);
                beep_input("C#", current_octave + 1, thirtyTwo);
                break;
              case '.':
                //printf("%c is pressed.\n", c);
                beep_input("D", current_octave + 1, thirtyTwo);
                break;
              case ';':
                //printf("%c is pressed.\n", c);
                beep_input("D#", current_octave + 1, thirtyTwo);
                break;
              case '/':
                //printf("%c is pressed.\n", c);
                beep_input("E", current_octave + 1, thirtyTwo);
                break;
              case '0':
                //printf("%c is pressed.\n", c);
                print_keyboard();
                current_octave = 0;
                printf("Current Octave: %d\n", current_octave);
                break;
              case '1':
                //printf("%c is pressed.\n", c);
                print_keyboard();
                current_octave = 1;
                printf("Current Octave: %d\n", current_octave);
                break;
              case '2':
                //printf("%c is pressed.\n", c);
                print_keyboard();
                current_octave = 2;
                printf("Current Octave: %d\n", current_octave);
                break;
              case '3':
                //printf("%c is pressed.\n", c);
                print_keyboard();
                current_octave = 3;
                printf("Current Octave: %d\n", current_octave);
                break;
              case '4':
                //printf("%c is pressed.\n", c);
                print_keyboard();
                current_octave = 4;
                printf("Current Octave: %d\n", current_octave);
                break;
              case '5':
                //printf("%c is pressed.\n", c);
                print_keyboard();
                current_octave = 5;
                printf("Current Octave: %d\n", current_octave);
                break;
              case '6':
                //printf("%c is pressed.\n", c);
                print_keyboard();
                current_octave = 6;
                printf("Current Octave: %d\n", current_octave);
                break;
              case '7':
                //printf("%c is pressed.\n", c);
                print_keyboard();
                current_octave = 7;
                printf("Current Octave: %d\n", current_octave);
                break;
              case '8':
                //printf("%c is pressed.\n", c);
                print_keyboard();
                current_octave = 8;
                printf("Current Octave: %d\n", current_octave);
                break;
              case '9':
                //printf("%c is pressed.\n", c);
                print_keyboard();
                current_octave = 9;
                printf("Current Octave: %d\n", current_octave);
                break;
              case ESC:
                //printf("%c is pressed.\n", c);
                printf("Escape Key activated\n");
                system("cls");
                return;
              default:
                printf("%c is invalid.\n", c);
                break;
            }
        }
    }
}

void print_keyboard(void) {
    printf("Enter any character: \n");
printf(" _______________________________________ \n");
printf("|  | | | |  |  | | | | | |  |  | | | |  |\n");
printf("|  | | | |  |  | | | | | |  |  | | | |  |\n");
printf("|  |S| |D|  |  |G| |H| |J|  |  |L| |;|  |\n");
printf("|  |_| |_|  |  |_| |_| |_|  |  |_| |_|  |\n");
printf("|   |   |   |   |   |   |   |   |   |   |\n");
printf("| Z | X | C | V | B | N | M | , | . | / |\n");
printf("|___|___|___|___|___|___|___|___|___|___|\n");

printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
       201, 205, 205, 203, 205, 203, 205, 203, 205, 203,
       205, 205, 203, 205, 205, 203, 205, 203, 205, 203,
       205, 203, 205, 203, 205, 203, 205, 205, 203, 205,
       205, 203, 205, 203, 205, 203, 205, 203, 205, 205,
       187);

printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
       186, 32,  32,  186, 32,  186, 32,  186, 32,  186,
       32,  32,  186, 32,  32,  186, 32,  186, 32 , 186,
       32,  186, 32,  186, 32,  186, 32,  32,  186, 32,
       32,  186, 32,  186, 32,  186, 32,  186, 32,  32,
       186);

printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
       186, 32,  32,  186, 83,  186, 32,  186, 68,  186,
       32,  32,  186, 32,  32,  186, 71,  186, 32 , 186,
       72,  186, 32,  186, 74,  186, 32,  32,  186, 32,
       32,  186, 76,  186, 32,  186, 59,  186, 32,  32,
       186);

printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
       186, 32,  32,  186, 32,  186, 32,  186, 32,  186,
       32,  32,  186, 32,  32,  186, 32,  186, 32 , 186,
       32,  186, 32,  186, 32,  186, 32,  32,  186, 32,
       32,  186, 32,  186, 32,  186, 32,  186, 32,  32,
       186);

printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
       186, 32,  32,  200, 203, 188, 32,  200, 203, 188,
       32,  32,  186, 32,  32,  200, 203, 188, 32,  200,
       203, 188, 32,  200, 203, 188, 32,  32,  186, 32,
       32,  200, 203, 188, 32,  200, 203, 188, 32,  32,
       186);

printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
       186, 32,  90,  32,  186, 32,  88,  32,  186, 32,
       32,  32,  186, 32,  32,  32,  186, 32,  32,  32,
       186, 32,  32,  32,  186, 32,  32,  32,  186, 32,
       32,  32,  186, 32,  32,  32,  186, 32,  32,  32,
       186);

printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
       186, 32,  32,  32,  186, 32,  32,  32,  186, 32,
       32,  32,  186, 32,  32,  32,  186, 32,  32,  32,
       186, 32,  32,  32,  186, 32,  32,  32,  186, 32,
       32,  32,  186, 32,  32,  32,  186, 32,  32,  32,
       186);

printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
       200, 205, 205, 205, 202, 205, 205, 205, 202, 205,
       205, 205, 202, 205, 205, 205, 202, 205, 205, 205,
       202, 205, 205, 205, 202, 205, 205, 205, 202, 205,
       205, 205, 202, 205, 205, 205, 202, 205, 205, 205,
       188);
}
