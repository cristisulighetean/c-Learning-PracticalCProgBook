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
//constructor: gets no of flashcards 
               initialises the flashcards one by one
//game: while loop till there are no more fashcards(all of them have been corectly answered)
 * 
 * 
***********************************************/

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

const int MAX_SIZE = 100;


struct singlecard
    {
        char question[40];
        char answer[40];
        bool correct = false;
    };


class flashcards
{
private:
    int noCards = 0;
    singlecard cards[MAX_SIZE];

    
public:
    flashcards(void);
    ~flashcards(){};
    flashcards(const flashcards &old_flashcards); //copy operator
    
    void getNoFlashCards(void); //get the number of flashcards
    void askForTheCards(void); //ask for each card to be initialized
    void game(void); //the actual game

};

flashcards::flashcards(void)
{
    getNoFlashCards();
    askForTheCards(); 
    game();
}


void flashcards::getNoFlashCards(void){ //get the number of flashcards
    cout << "Enter the number of cards: ";
    cin >> noCards;
} 
void flashcards::askForTheCards(void){ //ask for each card to be initialized
    for (int i = 0; i < noCards; i++)
    {
        cout << "Enter card " << i+1 << " : " << endl;
        cout << "Question: ";
        cin >> cards[i].question;
        cout << "Answer: ";
        cin >> cards[i].answer;
    }
    
}

void flashcards::game(void){
    //go through the cards until all are corectly answered
    int ans = 0; //counter of answered cards

    cout << "Starting the game:" << endl;
    cout << endl;

    while (ans != noCards)
    {
        for (int i = 0; i < noCards; i++)
        {
            if(cards[i].correct != true){
                //present question
                cout << "Question: " << cards[i].question << endl;
        
                //ask for answer
                cout << "Answer: ";
                char answerNow[40];
                cin >> answerNow;
        

                //check wether is true or not & mark it
                if(strcmp(cards[i].answer, answerNow) == 0){
                    cout << "Correct answer" << endl;
                    ++ans;
                    cards[i].correct = true;
                }
                else{
                    cout << "Wrong answer" << endl;
                }
                cout << endl;
            }
        }
        
    }
    cout << "Game completed" << endl;
    
}

int main(){

    flashcards test;



    return (0);
}
  