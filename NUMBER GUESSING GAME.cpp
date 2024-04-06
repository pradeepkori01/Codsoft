#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	srand(time(0));
	int secretNumber=rand()%100+1;
	
	int guess;
	int attempts=0;
	
	cout<<"Welcome to Number Guessing Game!\n";
	cout<<"Try to guess the number between 1 and 100.\n";
	
	do
	{
		cout<<"Enter your guess:";
		cin>>guess;
		
		if(guess<secretNumber)
		{
			cout<<"Too low. Try again!\n";
		}
		else if(guess>secretNumber)
		{
			cout<<"Too high. Try again!\n";
		}
		attempts++;
	}
	while(guess!=secretNumber);
	
	cout<<"Congratulations! You guessed the number"<<secretNumber<<"correctly!\n";
	cout<<"Number of attempts:"<<attempts<<endl;
	
	return 0;
}
