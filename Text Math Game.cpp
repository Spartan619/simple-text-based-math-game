// Game Project 
// 12/5/2019



#include <iostream>
#include <vector>
using namespace std;

class Player{
private:
	string Name;
	int score = 0;
	string PlaceHolder;
public:
	Player(string Name);
	string GetName();
	int GetScore();
	void IncrementScore();
};

Player::Player(string n){
	cout << "Enter Name: ";
	cin >> n;
	Name = n;
}

string Player::GetName(){
	return Name;
}

int Player::GetScore(){
	return score;
}

void Player::IncrementScore(){
	score++;
}


int main(){
	
	int PlayerCount, Choice, Answer;
	
	cout << "Enter # of Players (2-4): ";
	cin >> PlayerCount;
	
	Player Player1("");
	cout << Player1.GetName() << " " << Player1.GetScore() << endl;
	Player Player2("");
	cout << Player2.GetName() << " " << Player2.GetScore() << endl;
	
	if (PlayerCount==3){
		
		////////////////////////////// 3 Players ////////////////////////////
		
		Player Player3("");
		cout << Player3.GetName() << " " << Player3.GetScore() << endl;
		
		/////////////// 3 Players ///////////////////// Q 1 ////////////////////////////////////
		
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout << endl;
		cout << "Question 1:" << endl;
		cout << "What is 77+39" << endl;
	
		cout << Player1.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==116){
		
			Player1.IncrementScore();
		}
		
		cout << Player2.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==116){
		
			Player2.IncrementScore();
		}
		
		cout << Player3.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==116){
		
			Player3.IncrementScore();
		}
	
		cout << "Play More? 1 for yes, 2 for no." << endl;
		cin >> Choice;
		if(Choice==2){
			cout << Player1.GetName() << " Your Score is " << Player1.GetScore() << endl;
			cout << Player2.GetName() << " Your Score is " << Player2.GetScore() << endl;
			cout << Player3.GetName() << " Your Score is " << Player3.GetScore() << endl;
	 
		return 0;
		}
		
		////////////////// 3 Players ///////////////// Q 2 ////////////////////////////////////
		
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout << endl;
		cout << "Question 2:" << endl;
		cout << "What is 5*6" << endl;
		
		cout << Player1.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==30){
		
			Player1.IncrementScore();
		}
		
		cout << Player2.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==30){
		
			Player2.IncrementScore();
		}
		
		cout << Player3.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==30){
		
			Player3.IncrementScore();
		}
	
		cout << "Play More? 1 for yes, 2 for no." << endl;
		cin >> Choice;
		if(Choice==2){
			cout << Player1.GetName() << " Your Score is " << Player1.GetScore() << endl;
			cout << Player2.GetName() << " Your Score is " << Player2.GetScore() << endl;
			cout << Player3.GetName() << " Your Score is " << Player3.GetScore() << endl;
	 
		return 0;
		}
		
		//////////////// 3 Players ////////////////// Q 3 ///////////////////////////
		
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout << endl;
		cout << "Question 3:" << endl;
		cout << "What is 121/11" << endl;
		
		cout << Player1.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==11){
		
			Player1.IncrementScore();
		}
		
		cout << Player2.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==11){
		
			Player2.IncrementScore();
		}
		
		cout << Player3.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==11){
		
			Player3.IncrementScore();
		}
	
		cout << "Play More? 1 for yes, 2 for no." << endl;
		cin >> Choice;
		if(Choice==2){
			cout << Player1.GetName() << " Your Score is " << Player1.GetScore() << endl;
			cout << Player2.GetName() << " Your Score is " << Player2.GetScore() << endl;
			cout << Player3.GetName() << " Your Score is " << Player3.GetScore() << endl;
	 
		return 0;
		}
		
		///////////////// 3 Players ///////////// Q 4 ///////////////////////////////
		
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout << endl;
		cout << "Question 4:" << endl;
		cout << "What is 546-92" << endl;
		
		cout << Player1.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==454){
		
			Player1.IncrementScore();
		}
		
		cout << Player2.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==454){
		
			Player2.IncrementScore();
		}
		
		cout << Player3.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==454){
		
			Player3.IncrementScore();
		}
	
		cout << "Play More? 1 for yes, 2 for no." << endl;
		cin >> Choice;
		if(Choice==2){
			cout << Player1.GetName() << " Your Score is " << Player1.GetScore() << endl;
			cout << Player2.GetName() << " Your Score is " << Player2.GetScore() << endl;
			cout << Player3.GetName() << " Your Score is " << Player3.GetScore() << endl;
	 
		return 0;
		}
		
		/////////////////3 Players ///////////// Q 5 ///////////////////////////////
		
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout << endl;
		cout << "Final Question:" << endl;
		cout << "What is 3*9+58-32" << endl;
		
		cout << Player1.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==53){
		
			Player1.IncrementScore();
		}
		
		cout << Player2.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==53){
		
			Player2.IncrementScore();
		}
		
		cout << Player3.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==53){
		
			Player3.IncrementScore();
		}
		
		cout << endl;
	
		cout << "~~~~~~ Final Scores ~~~~~~~" << endl ;
		cout << Player1.GetName() << " Your Score is " << Player1.GetScore() << endl;
		cout << Player2.GetName() << " Your Score is " << Player2.GetScore() << endl;
		cout << Player3.GetName() << " Your Score is " << Player3.GetScore() << endl;
	 
		return 0;
		}
		
		
	
	
	////////////////////////// 4 Players ////////////////////////////////
	
 if(PlayerCount==4){
		Player Player3("");
		cout <<Player3.GetName() << " " << Player3.GetScore() << endl;
		Player Player4("");
		cout <<Player4.GetName() << " " << Player4.GetScore() << endl;
		
		/////////////// 4 Players ///////////////////// Q 1 ////////////////////////////////////
		
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout << endl;
		cout << "Question 1:" << endl;
		cout << "What is 77+39" << endl;
	
		cout << Player1.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==116){
		
			Player1.IncrementScore();
		}
		
		cout << Player2.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==116){
		
			Player2.IncrementScore();
		}
		
		cout << Player3.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==116){
		
			Player3.IncrementScore();
		}
		
		cout << Player4.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==116){
		
			Player4.IncrementScore();
		}
	
		cout << "Play More? 1 for yes, 2 for no." << endl;
		cin >> Choice;
		if(Choice==2){
			cout << Player1.GetName() << " Your Score is " << Player1.GetScore() << endl;
			cout << Player2.GetName() << " Your Score is " << Player2.GetScore() << endl;
			cout << Player3.GetName() << " Your Score is " << Player3.GetScore() << endl;
			cout << Player4.GetName() << " Your Score is " << Player4.GetScore() << endl;
	 
		return 0;
		}
		
		///////////////// 4 Players ////////////////// Q 2 ////////////////////////////////////
		
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout << endl;
		cout << "Question 2:" << endl;
		cout << "What is 5*6" << endl;
		
		cout << Player1.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==30){
		
			Player1.IncrementScore();
		}
		
		cout << Player2.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==30){
		
			Player2.IncrementScore();
		}
		
		cout << Player3.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==30){
		
			Player3.IncrementScore();
		}
		
		cout << Player4.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==30){
		
			Player4.IncrementScore();
		}
	
	
		cout << "Play More? 1 for yes, 2 for no." << endl;
		cin >> Choice;
		if(Choice==2){
			cout << Player1.GetName() << " Your Score is " << Player1.GetScore() << endl;
			cout << Player2.GetName() << " Your Score is " << Player2.GetScore() << endl;
			cout << Player3.GetName() << " Your Score is " << Player3.GetScore() << endl;
			cout << Player4.GetName() << " Your Score is " << Player4.GetScore() << endl;
	 
		return 0;
		}
		
		////////////////// 4 Players //////////////// Q 3 ///////////////////////////
		
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout << endl;
		cout << "Question 3:" << endl;
		cout << "What is 121/11" << endl;
		
		cout << Player1.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==11){
		
			Player1.IncrementScore();
		}
		
		cout << Player2.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==11){
		
			Player2.IncrementScore();
		}
		
		cout << Player3.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==11){
		
			Player3.IncrementScore();
		}
		
		cout << Player4.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==11){
		
			Player4.IncrementScore();
		}
	
		cout << "Play More? 1 for yes, 2 for no." << endl;
		cin >> Choice;
		if(Choice==2){
			cout << Player1.GetName() << " Your Score is " << Player1.GetScore() << endl;
			cout << Player2.GetName() << " Your Score is " << Player2.GetScore() << endl;
			cout << Player3.GetName() << " Your Score is " << Player3.GetScore() << endl;
			cout << Player4.GetName() << " Your Score is " << Player4.GetScore() << endl;
	 
		return 0;
		}
		
		////////////////// 4 Players //////////// Q 4 ///////////////////////////////
		
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout << endl;
		cout << "Question 4:" << endl;
		cout << "What is 546-92" << endl;
		
		cout << Player1.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==454){
		
			Player1.IncrementScore();
		}
		
		cout << Player2.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==454){
		
			Player2.IncrementScore();
		}
		
		cout << Player3.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==454){
		
			Player3.IncrementScore();
		}
		
		cout << Player4.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==454){
		
			Player4.IncrementScore();
		}
	
		cout << "Play More? 1 for yes, 2 for no." << endl;
		cin >> Choice;
		if(Choice==2){
			cout << Player1.GetName() << " Your Score is " << Player1.GetScore() << endl;
			cout << Player2.GetName() << " Your Score is " << Player2.GetScore() << endl;
			cout << Player3.GetName() << " Your Score is " << Player3.GetScore() << endl;
			cout << Player4.GetName() << " Your Score is " << Player4.GetScore() << endl;
	 
		return 0;
		}
		
		////////////////// 4 Players //////////// Q 5 ///////////////////////////////
		
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout << endl;
		cout << "Final Question:" << endl;
		cout << "What is 3*9+58-32" << endl;
		
		cout << Player1.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==53){
		
			Player1.IncrementScore();
		}
		
		cout << Player2.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==53){
		
			Player2.IncrementScore();
		}
		
		cout << Player3.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==53){
		
			Player3.IncrementScore();
		}
		
		cout << Player4.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==53){
		
			Player4.IncrementScore();
		}
		cout << endl;
	
		cout << "~~~~~~ Final Scores ~~~~~~~" << endl ;
		cout << Player1.GetName() << " Your Score is " << Player1.GetScore() << endl;
		cout << Player2.GetName() << " Your Score is " << Player2.GetScore() << endl;
		cout << Player3.GetName() << " Your Score is " << Player3.GetScore() << endl;
		cout << Player4.GetName() << " Your Score is " << Player4.GetScore() << endl;
	 
		return 0;
		}
		
	//////////////////////////////////////// 2 Players ///////////////////////////////////////
	
	else {
		
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout << endl;
		cout << "Question 1:" << endl;
		cout << "What is 77+39" << endl;
	
		cout << Player1.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==116){
		
			Player1.IncrementScore();
		}
		
		cout << Player2.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==116){
		
			Player2.IncrementScore();
		}
	
		cout << "Play More? 1 for yes, 2 for no." << endl;
		cin >> Choice;
		if(Choice==2){
			cout << Player1.GetName() << " Your Score is " << Player1.GetScore() << endl;
			cout << Player2.GetName() << " Your Score is " << Player2.GetScore() << endl;
	 
		return 0;
		}
		
		/////////////////////////////////// Q 2 ////////////////////////////////////
		
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout << endl;
		cout << "Question 2:" << endl;
		cout << "What is 5*6" << endl;
		
		cout << Player1.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==30){
		
			Player1.IncrementScore();
		}
		
		cout << Player2.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==30){
		
			Player2.IncrementScore();
		}
	
		cout << "Play More? 1 for yes, 2 for no." << endl;
		cin >> Choice;
		if(Choice==2){
			cout << Player1.GetName() << " Your Score is " << Player1.GetScore() << endl;
			cout << Player2.GetName() << " Your Score is " << Player2.GetScore() << endl;
	 
		return 0;
		}
		
		////////////////////////////////// Q 3 ///////////////////////////
		
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout << endl;
		cout << "Question 3:" << endl;
		cout << "What is 121/11" << endl;
		
		cout << Player1.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==11){
		
			Player1.IncrementScore();
		}
		
		cout << Player2.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==11){
		
			Player2.IncrementScore();
		}
	
		cout << "Play More? 1 for yes, 2 for no." << endl;
		cin >> Choice;
		if(Choice==2){
			cout << Player1.GetName() << " Your Score is " << Player1.GetScore() << endl;
			cout << Player2.GetName() << " Your Score is " << Player2.GetScore() << endl;
	 
		return 0;
		}
		
		////////////////////////////// Q 4 ///////////////////////////////
		
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout << endl;
		cout << "Question 4:" << endl;
		cout << "What is 546-92" << endl;
		
		cout << Player1.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==454){
		
			Player1.IncrementScore();
		}
		
		cout << Player2.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==454){
		
			Player2.IncrementScore();
		}
	
		cout << "Play More? 1 for yes, 2 for no." << endl;
		cin >> Choice;
		if(Choice==2){
			cout << Player1.GetName() << " Your Score is " << Player1.GetScore() << endl;
			cout << Player2.GetName() << " Your Score is " << Player2.GetScore() << endl;
	 
		return 0;
		}
		
		////////////////////////////// Q 5 ///////////////////////////////
		
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout << endl;
		cout << "Final Question:" << endl;
		cout << "What is 3*9+58-32" << endl;
		
		cout << Player1.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==53){
		
			Player1.IncrementScore();
		}
		
		cout << Player2.GetName() << " Your Answer? ";
		cin >> Answer;
		if(Answer==53){
		
			Player2.IncrementScore();
		}
		
		cout << endl;
	
		cout << "~~~~~~ Final Scores ~~~~~~~" << endl ;
		cout << Player1.GetName() << " Your Score is " << Player1.GetScore() << endl;
		cout << Player2.GetName() << " Your Score is " << Player2.GetScore() << endl;
	 
		return 0;
		}
		
		
	
	
	
return 0;	
}
