#ifndef SONY_VCR_PLAYER_H_
#define SONY_VCR_PLAYER_H_

#include "Common.h"
#include "Player.h"
#include <ostream>

using namespace std;

class SONY_VCR_Player : public Player
{
public:

	SONY_VCR_Player();										//CTOR
	~SONY_VCR_Player();										//DTOR

	//public Methods
	void play();											//play
	void stop();											//stop
	void forward();											//forward
	void rewind();											//rewind

private:

	//disable copy CTOR & assignment operator
	SONY_VCR_Player(const SONY_VCR_Player& jvp);				//copy CTOR
	SONY_VCR_Player& operator=(const SONY_VCR_Player& jvp);		//assignment operator

};

#endif