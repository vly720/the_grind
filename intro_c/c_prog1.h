#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define CARD_ERROR (unsigned char) 0xFF
#define N_DECK 52

typedef int shuffle;

void print_int(int);
void print_usi(unsigned int);
void print_newl();
void print_str(const char*);
void print_chr(char);
void print_dble(double);

void count(int);
void sums_and_squares1(int);
void sums_and_squares2(int);
char* length_pad(char*, char*, int);
void sums_and_squares3(int);

int randN(int);
void fill(shuffle[N_DECK][2]);
unsigned char convert(int card, int suit);
int valid_card(unsigned char card);
int gcard(unsigned char card);
int gsuit(unsigned char card);
void names(int n, int j, char *answer);

void deal(int M, unsigned char hand[7], shuffle deck[N_DECK][2]);
void printhand(int M, unsigned char* hand, char* buff1);
int trip_s(int M, unsigned char hand[]);
int four_kind(int M, unsigned char hand[]);
int pairs(int M, unsigned char hand[]);
