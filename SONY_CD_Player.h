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
	SONY_CD_Player(const SONY_CD_Player& scp);					//copy CTOR
	SONY_CD_Player& operator=(const SONY_CD_Player& scp);		//assignment operator

};

SONY_CD_Player::SONY_CD_Player()
{
	type = CD;
	company = SONY;
}

SONY_CD_Player::~SONY_CD_Player()
{

}


inline void SONY_CD_Player::play()
{
	cout << "SONY CD Player is now playing" << endl;
	playing = true;
}

inline void SONY_CD_Player::stop()
{
	cout << "SONY CD Player is stopped" << endl;
	playing = false;
}

inline void SONY_CD_Player::forward()
{
	cout << "SONY CD Player is fast forwarding" << endl;
}

inline void SONY_CD_Player::rewind()
{
	cout << "SONY CD Player is rewinding" << endl;
}

#endif