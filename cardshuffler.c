#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

void shuffle(int deck[][FACES]);
void deal(int deck[][FACES], const char *face[], const char *suit[]);

int main()
{
    int deck[SUITS][FACES] = {0};
    
    srand(time(NULL));
    shuffle(deck);
    
    const char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    
    const char *face[FACES] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    
    deal(deck, face, suit);
    return 0; // added to indicate successful completion of the program
}

void shuffle(int deck[][FACES])
{
    size_t card;
    for (card = 0; card < CARDS; card++) // changed loop condition to iterate over all cards
    {
        size_t row, column; // declared row and column variables outside do-while loop
        
        do {
            row = rand() % SUITS;
            column = rand() % FACES;
        } while (deck[row][column] != 0);
        
        deck[row][column] = card + 1; // added 1 to card to account for 0-based array indexing
    }
}

void deal(int deck[][FACES], const char *face[], const char *suit[])
{
    size_t card, row, column;
    for (card = 1; card <= CARDS; card++) // changed loop condition to iterate over all cards
    {
        for (row = 0; row < SUITS; row++)
        {
            for (column = 0; column < FACES; column++)
            {
                if (deck[row][column] == card)
                {
                    printf("%5s of %-8s%c", face[column], suit[row], card % 4 == 0 ? '\n' : '\t'); // added newline or tab based on card number
                }
            }
        }
    }
}

