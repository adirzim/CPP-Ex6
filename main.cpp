//
//main.cpp
//
#include <iostream>
#include "Entertainment_Console.h"
#include "Common.h"
#include "CatchMemoryLeak.h"

using namespace std;

int main (int argc, char** argv){

	//Members
	int i;
	Entertainment_Console console;
	Company company;
	Type type;
	char answer;



	while (1)
	{
		cout <<endl 
			<< "Choose company:" << endl
			<< "***************" << endl
			<< "1- JVC			2 - SONY" << endl
			<< "3- SAMSUNG" <<endl;
		cin >> i;
		company = (Company) (i-1);
		cout << endl;

		cout <<endl 
			<< "Choose type:" << endl
			<< "************" << endl
			<< "1- VCR			2 - CD" << endl
			<< "3- DVD" <<endl;
		cin >> i;
		type = (Type) (i-1);
		cout << endl;

		cout <<endl 
			<< "Choose Action:" << endl
			<< "**************" << endl
			<< "1- Buy			2 - Play" << endl
			<< "3- Stop			4 - Forward" <<endl
			<< "5- Rewind		6 - Exit" <<endl;
		cin >> i;
		cout << endl;

		switch (i)
		{
		case 1:
			console.BuyNewDevice(type,company);
			break;
		case 2:
			console.Play(type,company);
			break;
		case 3:
			console.StopActiveDevice(); //TODO: change to general
			break;
		case 4:
			console.Forward(type,company);
			break;
		case 5:
			console.Rewind(type,company);
			break;
		case 6:
			//report on memory leaks
			reportUnreleasedHeap(cout);

			cout << "do you really want to exit? (y/n)" << endl;
			cin >> answer;
			if(answer == 'n'){
				break;
			}
			exit(1);
			break;
		}
	}
	return 1;

	
	console.BuyNewDevice(CD, SAMSUNG);

	console.Play(CD, SAMSUNG);
	console.Play(VCR, SAMSUNG);
	console.BuyNewDevice(VCR,SAMSUNG);
	console.Play(VCR, SAMSUNG);
	
	
}