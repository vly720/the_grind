/*c_prog01.c
 *
 *      CSE/EE474 introductory C programming assignment #1
 *      Spring 2024
 *
 *     Student Name: ____
 *     Student ID#:  _____
 *
 *     Converted from Arduino to standard C for Linux terminal.
 */

#include "c_prog1.h"

/**********************************************************************
                 All variable declarations
**********************************************************************/

int i,j,k,l;
int card, suit;

// Part 1.2
int t1, t2;

// Part 1.4
char* st_buffer;

// Part 2.0
shuffle cards[N_DECK][2];

// Part 2.2
unsigned char testhand[7]={0};

// Part 3.1
char * card_names[]={"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
char * suit_names[]={"Hearts","Diamonds","Clubs","Spades"};

// Part 3.2
int dealer_deck_count = 0;

/******************************************************************************
 * 1.1
 *****************************************************************************/
void count(int N){
    // YOUR CODE HERE ...
}

/******************************************************************************
 * 1.2
 *****************************************************************************/
void sums_and_squares1(int N){   
    t1 = 0 ; t2 = 0;

    // YOUR CODE HERE ...

    print_int(t1); print_int(t2); print_newl();
}

/******************************************************************************
 * 1.3
 *****************************************************************************/
void sums_and_squares2(int N){
    char *l1;
    char *l2;

    // YOUR CODE HERE ...
}

/******************************************************************************
 * 1.4
 *****************************************************************************/
char* length_pad(char *st, char* st_buffer, int n) {
    
    // YOUR CODE HERE ...

    return st_buffer;
}

void sums_and_squares3(int N){
    char *l1;
    char *l2;

    // YOUR CODE HERE ...

    print_str(length_pad(l1,st_buffer, 20)); print_int(t1); print_newl();
    print_str(length_pad(l2,st_buffer, 20)); print_int(t2); print_newl();
}

/******************************************************************************
 * 2.1
 *****************************************************************************/
void fill(shuffle deck[N_DECK][2]) {
    
    // YOUR CODE HERE ...
    
}

/******************************************************************************
 * 2.2
 *****************************************************************************/
unsigned char convert(int card, int suit) {
   
    // YOUR CODE HERE ...

    return 0;
}

int valid_card(unsigned char card){
    
    // YOUR CODE HERE ...

    return 1;
}

int gcard(unsigned char card) {
    
    // YOUR CODE HERE ...
    
    return 1;
}

int gsuit(unsigned char card) {
    
    // YOUR CODE HERE ...
    
    return 1;
}

/******************************************************************************
 * 3.1
 *****************************************************************************/
void names(int card, int suit, char *answer) {
    
    // YOUR CODE HERE ...

}

/******************************************************************************
 * 3.2
 *****************************************************************************/
void deal(int M, unsigned char hand[7], int deck[N_DECK][2]) {
    
    // YOUR CODE HERE ...

}

void printhand(int M, unsigned char* hand, char* buff1) {
    
    // YOUR CODE HERE ...

}

/******************************************************************************
 * 3.3
 *****************************************************************************/
int pairs(int M, unsigned char hand[]) {
    
    // YOUR CODE HERE ...

    return 0;
}

int trip_s(int M, unsigned char hand[]) {
    
    // YOUR CODE HERE ...

    return 0;
}

int four_kind(int M, unsigned char hand[]) {
  
    // YOUR CODE HERE ...

    return 0;
}

// Helper: random int between 1 and n
int randN(int n) { 
    double x;
    x = 1.0 + (double) n * rand() / RAND_MAX;
    return((int)x);
}

/******************************************************************************
 * Printing functions (replaces Arduino's Serial.print)
 *****************************************************************************/
void print_int(int x)          { printf(" %d ", x); }
void print_usi(unsigned int x) { printf(" %u ", x); }
void print_dble(double x)      { printf(" %f ", x); }
void print_newl()              { printf("\n"); }
void print_str(const char *x)  { printf("%s", x); }
void print_chr(char x)         { printf("%c", x); }

/******************************************************************************
 * main() replaces Arduino's setup() function
 *****************************************************************************/
int main() {
    int seed = 100;
    srand(seed);

    print_str("Problem 1.1 Test Results: \n");
    count(10);
    print_newl();

    print_str("Problem 1.2 Test Results: \n");
    sums_and_squares1(10);
    print_newl();

    print_str("Problem 1.3 Test Results:\n");
    sums_and_squares2(10);
    print_newl();

    print_str("Problem 1.4 Test Results: \n");
    sums_and_squares3(10);
    print_newl();

    print_str("Problem 2.1 Test Results: "); print_newl();

    fill(cards);

    for (i = 0; i < N_DECK; i++) {
        print_str(" [");
        print_int(cards[i][0]); print_str(" "); print_int(cards[i][1]);
        print_str("] ");
        if (!((i + 1) % 7)) print_newl();
    }
    print_newl();

    print_str("Problem 2.2  Test Results: "); print_newl();
    print_str("   2.2.a"); print_newl();

    testhand[0] = convert(5, 2);
    testhand[1] = convert(15, 2);
    testhand[2] = convert(12, 1);
    testhand[3] = convert(6, 3);
    testhand[4] = convert(-1, 7);
    testhand[5] = convert(10, 4);
    testhand[6] = convert(3, 3);

    for (i = 0; i < 7; i++) {
        if (testhand[i] == CARD_ERROR) {
            print_str(" Card error: card ");
            print_int(i);
            print_newl();
        }
    }

    testhand[0] = convert(1, 1);
    testhand[1] = convert(1, 2);
    testhand[2] = convert(1, 3);
    testhand[3] = convert(1, 4);
    testhand[4] = convert(11, 2);
    testhand[5] = convert(12, 2);
    testhand[6] = convert(13, 4);

    for (i = 0; i < 7; i++) {
        if (testhand[i] == CARD_ERROR) {
            print_str(" check 2 card error: ");
            print_int(i); print_newl();
            return 1;
        }
    }

    print_str("   2.2.b"); print_newl();

    unsigned char card1, card2;
    card1 = 0xFF;
    card2 = convert(1, 4);

    if (valid_card(card1) == CARD_ERROR)
        print_str(" 0xFF is not a valid card\n");
    else print_str(" Something is wrong, check 2.2.b\n");
    if (valid_card(card2) == CARD_ERROR)
        print_str(" Something is wrong, check 2.2.b\n");
    else print_str(" 8-bit version of Ace of Spades is a VALID card.\n");

    print_str("   2.2.c,d"); print_newl();

    for (i = 0; i < 7; i++) {
        int c = gcard(testhand[i]);
        int s = gsuit(testhand[i]);
        print_str("card: "); print_int(c);
        print_str("   suit: "); print_int(s);
        print_newl();
    }

    char buffer[] = "   *empty*       ";
    print_newl();
    print_str("Part 3.1 Test Results:"); print_newl();

    for (i = 0; i < 7; i++) {
        card = gcard(testhand[i]);
        suit = gsuit(testhand[i]);
        print_str(" >>>>");
        print_int(i); print_str(": "); print_int(card); print_int(suit);
        names(card, suit, buffer);
        print_str(buffer);
        print_newl();
    }
    print_newl();

    print_str("Part 3.2 Test Results:"); print_newl();
    print_str("Test the deal() function\n");
    char buff[20] = "";
    for (i = 0; i < 3; i++) {
        print_str("\n\n----testing deal: hand: "); print_int(i); print_newl();
        print_str("Deck count: "); print_int(dealer_deck_count); print_newl();
        deal(7, testhand, cards);
        print_str("--------dealt hand: \n");
        printhand(7, testhand, buff);
        print_newl();
    }

    print_str("Part 3.3 Test Results:"); print_newl();
    print_str("Test the finding pokerhands function(s).\n");
    unsigned char hands[10][7];

    dealer_deck_count = 0;
    int n_hands = 7;

    for (i = 0; i < n_hands; i++) {
        deal(7, hands[i], cards);
    }
    print_str("I have "); print_int(n_hands); print_str(" new hands\n");
    for (i = 0; i < n_hands; i++) {
        int pct = pairs(7, hands[i]);
        int trips = trip_s(7, hands[i]);
        int fourk = four_kind(7, hands[i]);
        print_str("I found"); print_int(pct);
        print_str("pairs in hand"); print_int(i); print_newl();

        print_str("I found"); print_int(trips);
        print_str("three-of-a-kinds in hand"); print_int(i); print_newl();

        print_str("I found"); print_int(fourk);
        print_str("four-of-a-kinds in hand"); print_int(i); print_newl();

        print_str("Hand"); print_int(i);
        printhand(7, hands[i], buff);
        print_newl();
    }

    return 0;
}
