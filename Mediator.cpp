#include "Mediator.h"
#include <iostream>


Mediator::Mediator()
{
	active_Player = NULL; //No active player
}

Mediator::~Mediator()
{
	//Delete all of the players and free memory
	for (iter_t it = devices.begin(); it != devices.end(); it++){
		delete it->second;
	}

	devices.clear();
	
}

void Mediator::AddDevice( Type type, Company company )
{
	
	Player *player;

	//Get relevant factory
	Player_Factory& factory = Player_Factory::GetFactory(company);
	

	//Create the player according to type (from factory);
	switch (type)
	{
		//TODO: extract to static method in player in order to be able to add more devices tye in the future
	case VCR:
		player = factory.CreateVCRPlayer();
						
		break;
	case CD:
		player = factory.CreateCDPlayer();
		
		break;
	case DVD:
		player = factory.CreateDVDPlayer();
		
		break;
	}

	//Insert player into devices list
	devices.insert(pair<deviceKey,Player *>(deviceKey(company,type), player));

}

void Mediator::RemoveDevice( Type type, Company company )
{
	iter_t it = devices.find(pair<Company,Type>(company, type));

	if (it != devices.end()){
		//TODO: make delete on the pointer or on the content
		//Delete player
		delete it->second;

		//Remove device pointer from device list
		devices.erase(it);

	}
	else
		cout << "No such device in console!" << endl;
}

bool Mediator::SetActiveDevice( Type type, Company company )
{
		
	//Find Requested Player
	iter_t it = devices.find(pair<Company,Type>(company, type));
		
	if (it != devices.end()){

		//If device found is already active device - do nothing
		if (it->second == active_Player){
			return false;
		}

		StopActiveDevice();
		active_Player = it->second;
		return true;
	}

	return false;
}

void Mediator::Play(Type type, Company company)
{
	//Set requested device
	if (SetActiveDevice(type, company)){
		active_Player->play(); //Play on successful set
	}
	else{
		cout << "Device already active or no such device in console" << endl;
	}

	
}

void Mediator::StopActiveDevice()
{
	if (active_Player != NULL && active_Player->isPlaying()){
		active_Player->stop();
	}
}

void Mediator::Forward( Type type, Company company )
{
	iter_t it = devices.find(pair<Company,Type>(company, type));

	if (it != devices.end()){
		it->second->forward();
	}
	else
		cout << "No such device in console!" << endl;
}

void Mediator::Rewind( Type type, Company company )
{
	iter_t it = devices.find(pair<Company,Type>(company, type));

	if (it != devices.end()){
		it->second->rewind();
	}
	else
		cout << "No such device in console!" << endl;
}
