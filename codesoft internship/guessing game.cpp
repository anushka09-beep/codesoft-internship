//number guessing game
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(static_cast<unsigned int>(time(0)));
	int randomNumber = rand()%100+1;
	int guess;
	int attempts=0;
	cout<<"welcome to the Number guessing game!"<<endl;
	cout<<"i am thinking of a number between 1 and 100.."<<endl;
	do{
		cout<<"enter your guess:";
		cin>>guess;
		if(guess==randomNumber){
			cout<<"congratulations!you guessed it right"<<endl;
		}else if(guess<randomNumber){
			cout<<"too low. try again"<<endl;
		}else{
			cout<<"too high. try again"<<endl;
		}
		attempts++;
		
	}while(guess!=randomNumber);
	cout<<"it took you"<<attempts<<"attempts to guess the number"<<endl;
	return 0;
	}