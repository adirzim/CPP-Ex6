#ifndef MEDIATOR_H
#define  MEDIATOR_H

#include "Common.h"
#include "Player_Factory.h"
#include <list>
#include "Player.h"

using namespace std;

class Mediator{

public:

	Mediator();											//CTOR
	~Mediator();										//DTOR

	//Mediator public methods
	void AddDevice(Type type, Company company);			//add new device to the mediator
	void RemoveDevice(Type type, Company company);		//remove device from the mediator
	void SetActiveDevice(Type type, Company company);	//set the Active device according to the requirement

	//devices public methods
	void Play();										//Play on the current Active device and stop all the other devices
	void Stop(Type type, Company company);				//Stop the relevant device
	void Forward(Type type, Company company);			//Forward the relevant device
	void Rewind(Type type, Company company);			//Rewind the relevant device

private:

	//disable Copy CTOR & Assignment operator
	Mediator(const Mediator& md);						//Copy CTOR
	Mediator& operator=(const Mediator& md);			//Assignment Operator

	//private members
	Player* active_Player;								//current Active player
	list<Player*> devices;								//List of all console devices
	list<Player_Factory*>* factories;					//List of all the companies Factory

}

#endif
