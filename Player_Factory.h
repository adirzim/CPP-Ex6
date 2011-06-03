#ifndef PLAYER_FACTORY_H_
#define PLAYER_FACTORY_H_

#include "Common.h"
#include "JVC_Player_Factory.h"
#include "SONY_Player_Factory.h"
#include "Samsung_Player_Factory.h"

using namespace std;

class Player_Factory
{
public:

	//static function
	static list<Player_Factory*>& CreatePlayerFactories();		//creates all player factories

	Player_Factory();											//CTOR
	virtual ~Player_Factory();									//DTOR

	//Members
	Company company;											//Factory company name

	//Factory Methods
	virtual Player* CreateVCRPlayer() = 0;					//Create VCR player 
	virtual Player* CreateCDPlayer() = 0;						//Create CD player
	virtual Player* CreateDVDPlayer() = 0;					//Create CD player
	
};
#endif