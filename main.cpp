//
//main.cpp
//
#include <iostream>
#include "Entertainment_Console.h"
#include "Common.h"
#include "CatchMemoryLeak.h"

using namespace std;

Company selectCompany();
Type selectType();

int main (int argc, char** argv){

	//Members
	int i;
	Entertainment_Console console;
	Company company;
	Type type;
	char answer;



	while (1)
	{
		
		cout << '\n'
			<< "Choose Action:" << '\n'
			<< "**************" << '\n'
			<< "1- Buy			2 - Play" << '\n'
			<< "3- Stop Device	4 - Forward" << '\n'
			<< "5- Rewind		6 - Stop Active Device" << '\n'
			<< "7 - Exit " << endl;
		
		cin >> i;
		cout << endl;

		switch (i)
		{
		case 1:
			company = selectCompany();
			type = selectType();

			console.BuyNewDevice(type,company);
			break;
		case 2:
			company = selectCompany();
			type = selectType();

			console.Play(type,company);
			break;
		case 3:
			company = selectCompany();
			type = selectType();

			console.Stop(type, company);
			break;
		case 4:
			company = selectCompany();
			type = selectType();

			console.Forward(type,company);
			break;
		case 5:
			company = selectCompany();
			type = selectType();

			console.Rewind(type,company);
			break;
		case 6:
			console.StopActiveDevice();
			break;
		case 7:
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
}


Company selectCompany(){

	int i;
	Company company;

	cout << '\n'
		<< "Choose company:" << endl
		<< "***************" << endl
		<< "1- JVC			2 - SONY" << endl
		<< "3- SAMSUNG" <<endl;
	cin >> i;
	company = (Company) (i-1);
	
	return company;

}

Type selectType(){

	int i;
	Type type;
	
	cout << '\n'
		<< "Choose type:" << endl
		<< "************" << endl
		<< "1- VCR			2 - CD" << endl
		<< "3- DVD" <<endl;

	cin >> i;
	
	type = (Type) (i-1);
	
	return type;
}
