#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;
int main ()
{
	// declaration variable 
	string sang = " sang ", kaghaz = " kaghaz ", gheichi = " gheichi ", answer;
	int userpoint = 0, computerpoint = 0, number = 0;
	// get answer 
	while (userpoint != 6 && computerpoint != 6) // while 
	{
	cout << " sang, kaghaz, gheichi ? ";
	cin >> answer;
	// generate random answer 
	srand(time(0));
	number = rand() % 3 + 1;
	if (number == 1)
	cout << " phone answer :" << sang << endl;
	else if (number == 2)
	cout << " phone answer :" << kaghaz << endl;
	else if (number == 3)
	cout << " phone  answer :" << gheichi << endl;
	// compare 
	// sang = sang
	if (answer == "sang" && number == 1)
	{
		userpoint++;
		computerpoint++;
		cout << " my point = " << userpoint << endl << " computer point = " << computerpoint << endl;
		cout << " -----------------" << endl;
	}
	// sang = kaghaz 
	else if (answer == "sang" && number == 2)
	{
		computerpoint++;
		cout << " my point = " << userpoint << endl << " computer point = " << computerpoint << endl;
		cout << " -----------------" << endl;
	}
	// sang = gheichi
	else if (answer == "sang" && number == 3)
	{
		userpoint++;
		cout << " my point = " << userpoint << endl << " computer point = " << computerpoint << endl;
		cout << " -----------------" << endl;
	}
	// -------------
	// kaghaz = sang
	else if (answer == "kaghaz" && number == 1)
	{
		userpoint++;
		cout << " my point = " << userpoint << endl << " computer point = " << computerpoint << endl;
		cout << " -----------------" << endl;
	}
	// kaghaz = kaghaz
	else if (answer == "kaghaz" && number == 2)
	{
		userpoint++;
		computerpoint++;
		cout << " my point = " << userpoint << endl << " computer point = " << computerpoint << endl;
		cout << " -----------------" << endl;
	}
	// kaghaz = gheichi
	else if (answer == "kaghaz" && number == 3)
	{
		computerpoint++;
		cout << " my point = " << userpoint << endl << " computer point = " << computerpoint << endl;
		cout << " -----------------" << endl;
	}
	// --------------
	// gheichi = sang
	else if (answer == "gheichi" && number == 1)
	{
		computerpoint++;
		cout << " my point = " << userpoint << endl << " computer point = " << computerpoint << endl;
		cout << " -----------------" << endl;
	}
	// gheichi = kaghaz 
	else if (answer == "gheichi" && number == 2)
	{
    	userpoint++;
		cout << " my point = " << userpoint << endl << " computer point = " << computerpoint << endl;
		cout << " -----------------" << endl;
	}
	// gheichi = gheichi 
	else if (answer == "gheichi" && number == 3)
	{
		userpoint++;
		computerpoint++;
		cout << " my point = " << userpoint << endl << " computer point = " << computerpoint << endl;
		cout << " -----------------" << endl;
	}
	// --------------
	} // end while
	// --------------
	// win or lose
	if (userpoint == 6 && computerpoint == 6)
	{
	cout << " mosavi" ;
	cin >> answer;
	}
	else if (userpoint == 6)
	cout <<" tabrik , tonesti bebari :) ";
	else if (computerpoint == 6)
	cout <<" bakhti moteasefaneh :( , dobare emtehan kon ";
}
