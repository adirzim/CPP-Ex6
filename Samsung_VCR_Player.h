#ifndef SAMSUNG_VCR_PLAYER_H_
#define SAMSUNG_VCR_PLAYER_H_

#include "Common.h"
#include "Player.h"
#include <ostream>

using namespace std;

class Samsung_VCR_Player : public Player
{
public:

	Samsung_VCR_Player();										//CTOR
	~Samsung_VCR_Player();										//DTOR

	//public Methods
	void play();												//play
	void stop();												//stop
	void forward();												//forward
	void rewind();												//rewind

private:

	//disable copy CTOR & assignment operator
	Samsung_VCR_Player(const Samsung_VCR_Player& svp);				//copy CTOR
	Samsung_VCR_Player& operator=(const Samsung_VCR_Player& svp);	//assignment operator

};

#endif