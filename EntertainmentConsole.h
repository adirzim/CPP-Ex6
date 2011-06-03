#ifndef ENTERTAINMENT_CONSOLE_H_
#define  ENTERTAINMENT_CONSOLE_H_

#include "Mediator.h"
#include "Common.h"

using namespace std;

class Entertainment_Console{

public:

	Entertainment_Console();													//CTOR
	~Entertainment_Console();													//DTOR

	//Public Methods
	void BuyNewDevice(Type type, Company company);								//add new device to the console
	void Play(Type type, Company company);										//Play the relevent device
	void Stop(Type type, Company company);										//Stop the relevant device
	void Forward(Type type, Company company);									//Forward the relevant device
	void Rewind(Type type, Company company);									//Rewind the relelvant device

private:

	//Disable copy and assignment
	Entertainment_Console(const Entertainment_Console& ec);						//Copy CTOR
	const Entertainment_Console& operator=(const Entertainment_Console& ec);	//Assignment Operator
	
	Mediator md;

}

#endif
