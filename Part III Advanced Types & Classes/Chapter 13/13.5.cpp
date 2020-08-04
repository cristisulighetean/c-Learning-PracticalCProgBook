/***********************************************
 * 
 I have a simple method of learning foreign vocabulary words. I write the
words down on a list of flash cards. I then go through the stack of flash
cards one at a time. If I get a word right, that card is discarded. If I get it wrong, the card goes
to the back of the stack.
Write a class to implement this system.
Member functions:
struct single_card {
char question[40]; // English version of the word
char answer[40]; // Other language version of the word
};
// Constructor -- takes a list of cards to
// initialize the flash card stack
void flash_card::flash_card(single_card list[]);
// Get the next card
const single_card &flash_card::get_card(void);
//The student got the current card right
void flash_card::right(void);
// The student got the current card wrong
void flash_card::wrong(void);
//Returns 1 -- done / 0 -- more to do
int done(void);
 * 
***********************************************/

#include <iostream>

using namespace std;


int main(){



    return (0);
}
  