#ifndef SONY_PLAYER_FACTORY_H_
#define SONY_PLAYER_FACTORY_H_

#include "Player_Factory.h"
#include "Common.h"

class SONY_Player_Factory : public Player_Factory
{
public:

	SONY_Player_Factory();													//CTOR
	~SONY_Player_Factory();													//DTOR

	//Factory Methods
	//Player* CreateVCRPlayer();											//Create VCR player 
	//Player* CreateCDPlayer();												//Create CD player
	//Player* CreateDVDPlayer();											//Create CD player


private:

	//disable copy constructor & assignment operator
	SONY_Player_Factory(const SONY_Player_Factory& jcf);					//copy CTOR
	SONY_Player_Factory& operator=(const SONY_Player_Factory& jcf);			//assignment operator

};

#endif
