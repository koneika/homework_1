#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    char choise; 
    int new_num;
    int old_num;
    int a; // SET VARIABLES
    
    srand(time(NULL));
    old_num = rand()%50+1;
    
    
    // ITS LOOP FOR ASK YOU "WYLTPA?""
    do { 
    // ALSO SET VARIABLES BUT ITS FOR CLEANING OUR SCORE AND OUR LOSE
    int score = 0;
    int lose = 0; // THIS IS NEED FOR LOGIC
    
    // IT`S FOR WORK 10 TIME, WITHOUT ASKING "WYLTPA?"
    do {
    
    cout << "input your choise 1 or 2" << endl; 
    cout << "conver to         < or >" << endl; // COUT
    
    
    cin >> a; // CHOOSE YOUR METHOD
    new_num = rand()%50+1; // GENERATE NEW RANDOM NUMBER
	
	
	// IF INPUT 1 AND LUCK = +SCORE OR IF INPUT 2 AND LUCK = +SCORE
	if (a == 1 && new_num <= old_num || a == 2 && new_num >= old_num) {
	    ++score;
	}
	
	
	// FOR UNLUCK, IF YOU LOSE = TRUE, LOSE = 1, LOGIC WORK
	else {
	    cout << "lose" << endl;
	    ++lose;
	}
	
	// FOR CHECK YOUR WIN-SCORE, IF WIN-SCORE = TRUE, LOSE = 1, LOGIC WORK
	if (score == 10) {
	    ++lose;
	}
	
	cout << "score = " << score << endl; // FOREVER SHOW YOUR SCORE
	
	/*
	how its work? when we lose, we have lose = 0, if we really lose, variable lose = 1, 
	do-while will work forever while we dont got a lose
	
	so its for such as - true or false. 
	true if we have no lose, false if we have lose and go out 
	*/
	}while(lose == 0); 
	
	
	
	
	
	
	
	//i tired to explain
	
	
	
	//from the desk logic
	if (score == 10) {
	    cout << "success" << endl;
	}
	
	// ask you, choose please
	cout << "Would you like to play again? [Y = yes, N = no]" << endl;
	cin >> choise;
	
	
	// while choise = Y, we will play, if no, game is close
    }while(choise == 'Y');
    //cout << new_num << endl << old_num << endl;
    
    //close
    return 0;
}
