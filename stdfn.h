#ifndef STDFN_H
#define STDFN_H
#include "stdfn.c"
int intro(char name[30], char author[40], int year, char license[10]);
int askInt(char question[200]);
char *askChar(char *question);
double askDouble(char question[200]);
int asdfwozxcpekvsdwri_gRan1; // Making sure that no one will accidently use these variables
int asdfwozxcpekvsdwri_gRan2;
int asdfwozxcpekvsdwri_gRan3;
int ranGen(void);
int busyRun(int runs);
char printOut(int rate, char *string);
char* bash(char *cmd);
void mVol(int volume);
char* istr(int number);
char* dstr(double number);
int getFileSize(FILE* file);
#endif
