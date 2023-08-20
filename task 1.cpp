#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	srand((unsigned int) time(NULL));
	int number=(rand() % 100)+ 1;
	int guess=0;
	
	do
	{
		cout << "Enter Guess (1-100):";
		cin >> guess;
		if(guess > number *2)
		{
			cout<< "Guess is Too High!" <<endl;
		}
		else if(guess < number/2 )
		{
			cout<< "Guess is Too Low!" <<endl;
		}
		else if(guess > number)
			cout<< "Guess is High!" <<endl;
		else if(guess < number)
				cout<< "Guess is Low!" <<endl;
		else
			cout <<"You Won!"<<endl;
		
	} while (guess != number);
}
