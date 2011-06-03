#ifndef SONY_CD_PLAYER_H_
#define SONY_CD_PLAYER_H_

#include "Common.h"
#include "Player.h"
#include <ostream>

using namespace std;

class SONY_CD_Player : public Player
{
public:

	SONY_CD_Player();											//CTOR
	~SONY_CD_Player();											//DTOR

	//public Methods
	void play();												//play
	void stop();												//stop
	void forward();												//forward
	void rewind();												//rewind

private:

	//disable copy CTOR & assignment operator
	SONY_CD_Player(constSONY_CD_Player& scp);					//copy CTOR
	SONY_CD_Player& operator=(constSONY_CD_Player& scp);		//assignment operator

};

#endif