#ifndef Samsung_CD_PLAYER_H_
#define Samsung_CD_PLAYER_H_

#include "Common.h"
#include "Player.h"
#include <ostream>

using namespace std;

class Samsung_CD_Player : public Player
{
public:

	Samsung_CD_Player();											//CTOR
	~Samsung_CD_Player();											//DTOR

	//public Methods
	void play();													//play
	void stop();													//stop
	void forward();													//forward
	void rewind();													//rewind

private:

	//disable copy CTOR & assignment operator
	Samsung_CD_Player(constSamsung_CD_Player& scp);					//copy CTOR
	Samsung_CD_Player& operator=(constSamsung_CD_Player& scp);		//assignment operator

};

#endif