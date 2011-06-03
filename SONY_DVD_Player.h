#ifndef SONY_DVD_PLAYER_H_
#define SONY_DVD_PLAYER_H_

#include "Common.h"
#include "Player.h"
#include <ostream>

using namespace std;

class SONY_DVD_Player : public Player
{
public:

	SONY_DVD_Player();											//CTOR
	~SONY_DVD_Player();											//DTOR

	//public Methods
	void play();												//play
	void stop();												//stop
	void forward();												//forward
	void rewind();												//rewind

private:

	//disable copy CTOR & assignment operator
	SONY_DVD_Player(constSONY_DVD_Player& sdp);					//copy CTOR
	SONY_DVD_Player& operator=(constSONY_DVD_Player& sdp);		//assignment operator

};

#endif