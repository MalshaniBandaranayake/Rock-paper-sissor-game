// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
	// i create four variables. 
	int levels;
	int password;
	int computer_final_score;
	int user_final_score;
	cout << "Rock, Paper and Scissors Game!" << endl;
	cout << ">> plese enter your name to enroll to the game <<" << endl;
	cout << "--------------------------------<< lets play >>----------------------------------------------------" << endl;
	// i make profiles for user & computer.(i include it to user name and scores in each rounds.
	string user_name; // i use string value to generate the user name.
	cout << "enter user name:";
	cin >> user_name; // i use cin because it should be a changeable one. anybody can enter your name in play time.
	// after i want to ask how many levels does the player want to paly.
	cout << user_name << "_how many levels do you want to play:";
	cin >> levels; // i used it to cin because i give a chance to player to added it.
	int user_score = 0, computer_score = 0; // i used int value to create user_score & computer_score. and also, i equal them to '0'. because starting round they don't take score.
	for (int level = 0;level <= levels-1;level++) { // i used for loop because i have 3 statements. and also, i want to generate functions with in the for loop curly brackets, repeat again &again untill end of condition of the last statement. i entered second statement to levels-1. because last statement generrate extra level.
		int user_choice; // i generate two int values for user_choice and computer_choice.
		int computer_choice;//beacuse i want to show user and computer choices in below codes
		cout << level << ":current level/ all levels:" << levels << endl; // in this function it show all level numbers and current level number. i use it to generate cout. because i want to generate it by system.
		cout << user_name << "user score = " << user_score << endl; // i want to generate user name and score. therefore i generate it by cout.
		cout << "computer score = " << computer_score << endl;// i want to generate computer score. therefore i used cout for it.
		cout << "1- rock" << endl;//the i generate rock, paper, sissor and give numbers to  identify them.
		cout << "2- paper" << endl;
		cout << "3- sissor" << endl;
		//i used do while loop to generate user choices. i take user input after user entering it to the system. 
		  // and also i take a condition user_choices are not equal to 1,2,3. because user can't entere other numbers for game. if user entered another number game is not working.
		do {
			cout << "enter the user choice:";
			cin >> user_choice; // user can enter his /her choice manually. therefore i use cin for it.
		} while (user_choice != 1 && user_choice != 2 && user_choice != 3);
		srand(time(0)); // i use random number generater for computer. because computer not a human. therefore i generate it randomly by system.
		computer_choice = (rand() % 3) + 1;
		if (user_choice == 1 && computer_choice == 3) {  // use if and else if to find out winner in each condition.
			cout << "rock destroyed sissor - user win" << endl;
			user_score++; // adding score to next level
		}
		else if (user_choice == 2 && computer_choice == 1) {
			cout << "paper cover the rock - user win" << endl;
			user_score++;

		}
		else if (user_choice == 3 && computer_choice == 2) {
			cout << "sissor cut the paper - user win" << endl;
			user_score++;

		}

		else if (user_choice == computer_choice) {
			cout << "tie" << endl;
			computer_score++;
			user_score++;
		}
		else {
			cout << "computer win" << endl;
			computer_score++;
		}

	}
	
	// use if and else if to find out who is the top scored player of the game, top scored, winner of the day , final scores and who is drawn the game. and also use cout to generate final score of user and computer.
	
	if (computer_score == user_score) {
		cout << levels << ":current level/ all levels:" << levels << endl;
		cout << user_name << "user score = " << user_score << endl;
		cout << "computer score = " << computer_score << endl;
		cout << "computer final score = " << computer_score << endl;
		cout << "enter password to log user profile:" << endl;
		cin >> password;
		cout << "<<----------------------------------------loarding interface of user profile-------------------->>" << endl;
		cout << " sorry the game is drawn" << endl;
		cout << user_name << "user final score = " << user_score << endl;
		cout << "<<--------------------------------press any key to log out---------------------------------------------->>" << endl;
	}
	else if (user_score > computer_score) {
		cout << levels << ":current level/ all levels:" << levels << endl;
	    cout << user_name << "user score = " << user_score << endl;
        cout << "computer score = " << computer_score << endl;
		cout << "computer final score = " << computer_score << endl;
		cout << "enter password to log user profile:" << endl;
		cin >> password;
		cout << "<<-------------------------------------loarding interface of user profile------------------------------------------------->>" << endl;
		cout << user_name << "user final score = " << user_score << endl;
		cout << "winner of the day is : " << user_name << endl;
		cout << user_name << "_congratulation!you are the top scored player of the game" << endl;
		cout << "top score = " << user_score << endl;
		cout << "<<---------------------------------------press any key to log out----------------------------------->>" << endl;
	}
	else
	{
		cout << levels << ":round/level:" << levels << endl;
		cout << "computer score = " << computer_score << endl;
		cout << "winner of the day is computer" << endl;
		cout << user_name << "user score = " << user_score << endl;
		cout << "computer final score = " << computer_score << endl;
		cout << "congratulations computer is the top scored player of the game" << endl;
		cout << "top score = " << computer_score << endl;
		cout << "enter password to log user profile:" << endl;
		cin >> password;// enter user password to log to the user profile.
        cout << "<<------------------------------loarding interface of user profile------------------------------------------->>" << endl;
		cout << user_name << "user final score = " << user_score << endl;
		cout << "<<------------------------------press any key to log out------------------------------------>>" << endl;
	}

	
}










