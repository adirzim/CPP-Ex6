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

SONY_VCR_Player::SONY_VCR_Player()
{
	type = VCR;
	company = SONY;
}

SONY_VCR_Player::~SONY_VCR_Player()
{

}


inline void SONY_VCR_Player::play()
{
	cout << "SONY VCR Player is now playing" << endl;
	playing = true;
}

inline void SONY_VCR_Player::stop()
{
	cout << "SONY VCR Player is stopped" << endl;
	playing = false;
}

inline void SONY_VCR_Player::forward()
{
	cout << "SONY VCR Player is fast forwarding" << endl;
}

inline void SONY_VCR_Player::rewind()
{
	cout << "SONY VCR Player is rewinding" << endl;
}

#endif
