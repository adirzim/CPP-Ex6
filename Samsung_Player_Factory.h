#ifndef SAMSUNG_PLAYER_FACTORY_H_
#define SAMSUNG_PLAYER_FACTORY_H_

#include "Player_Factory.h"
#include "Common.h"

class Samsung_Player_Factory : public Player_Factory
{
public:

	Samsung_Player_Factory();													//CTOR
	~Samsung_Player_Factory();													//DTOR

	//Factory Methods
	Player* CreateVCRPlayer();												//Create VCR player 
	Player* CreateCDPlayer();													//Create CD player
	Player* CreateDVDPlayer();												//Create CD player


private:

	//disable copy constructor & assignment operator
	Samsung_Player_Factory(Const Samsung_Player_Factory& jcf);					//copy CTOR
	Samsung_Player_Factory& operator=(const Samsung_Player_Factory& jcf);		//assignment operator

};

#endif
