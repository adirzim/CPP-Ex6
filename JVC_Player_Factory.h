#ifndef JVC_PLAYER_FACTORY_H_
#define JVC_PLAYER_FACTORY_H_

#include "Player_Factory.h"
#include "Common.h"

class JVC_Player_Factory : public Player_Factory
{
public:

	JVC_Player_Factory();													//CTOR
	~JVC_Player_Factory();													//DTOR

	//Factory Methods
	//Player* CreateVCRPlayer();											//Create VCR player 
	//Player* CreateCDPlayer();												//Create CD player
	//Player* CreateDVDPlayer();											//Create CD player


private:

	//disable copy constructor & assignment operator
	JVC_Player_Factory(const JVC_Player_Factory& jcf);						//copy CTOR
	JVC_Player_Factory& operator=(const JVC_Player_Factory& jcf);			//assignment operator

};

#endif
