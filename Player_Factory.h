#ifndef PLAYER_FACTORY_H_
#define PLAYER_FACTORY_H_

#include <map>
#include "Common.h"
#include "Player.h"


using namespace std;

class Player_Factory
{
public:

	//static function
	//static map<Company,Player_Factory*>* CreatePlayerFactories();		//creates all player factories
    static Player_Factory& GetFactory(Company comapny);

	Player_Factory();											//CTOR
	virtual ~Player_Factory();									//DTOR

	//Members
	Company company;											//Factory company name

	//Factory Methods
	virtual Player *CreateVCRPlayer() = 0;					//Create VCR player 
	virtual Player *CreateCDPlayer() = 0;					//Create CD player
	virtual Player *CreateDVDPlayer() = 0;					//Create CD player

private:


	
};

#endif