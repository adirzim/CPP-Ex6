#ifndef SAMSUNG_DVD_PLAYER_H_
#define SAMSUNG_DVD_PLAYER_H_

#include "Common.h"
#include "Player.h"
#include <ostream>

using namespace std;

class Samsung_DVD_Player : public Player
{
public:

	Samsung_DVD_Player();												//CTOR
	~Samsung_DVD_Player();												//DTOR

	//public Methods
	void play();														//play
	void stop();														//stop
	void forward();														//forward
	void rewind();														//rewind

private:

	//disable copy CTOR & assignment operator
	Samsung_DVD_Player(constSamsung_DVD_Player& sdp);					//copy CTOR
	Samsung_DVD_Player& operator=(constSamsung_DVD_Player& sdp);		//assignment operator

};

#endif