#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <map>
#include <utility>
#include "Common.h"
#include "Player_Factory.h"
#include "Player.h"

using namespace std;

class Mediator{

public:

	typedef pair<Company,Type> deviceKey;				//Pair of company and type
	typedef map<deviceKey, Player*>::iterator iter_t;   //map of deviceKey and player

	Mediator();											//CTOR
	~Mediator();										//DTOR

	//Mediator public methods
	void AddDevice(Type type, Company company);			//add new device to the mediator
	void RemoveDevice(Type type, Company company);		//remove device from the mediator

	//devices public methods
	void Play(Type type, Company company);				//Play on the current Active device and stop all the other devices
	void StopActiveDevice();							//Stop the active device
	void Stop( Type type, Company company );			//Stop the relevant device
	void Forward(Type type, Company company);			//Forward the relevant device
	void Rewind(Type type, Company company);			//Rewind the relevant device

private:

	//disable Copy CTOR & Assignment operator
	Mediator(const Mediator& md);						//Copy CTOR
	Mediator& operator=(const Mediator& md);			//Assignment Operator

	//private members
	Player* active_Player;								//current Active player
	map<deviceKey, Player*> devices;					//Map of all console devices
	
	bool SetActiveDevice(Type type, Company company);	//set the Active device according to the requirement. 
														//and stop the previous Active device Return true on success
	
	

};

#endif
