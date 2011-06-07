#ifndef SONY_DVD_PLAYER_H_
#define SONY_DVD_PLAYER_H_

#include "Player.h"
#include <iostream>

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
	SONY_DVD_Player(const SONY_DVD_Player& sdp);				//copy CTOR
	SONY_DVD_Player& operator=(const SONY_DVD_Player& sdp);		//assignment operator

};

SONY_DVD_Player::SONY_DVD_Player()
{
	type = DVD;
	company = SONY;
}

SONY_DVD_Player::~SONY_DVD_Player()
{

}

inline void SONY_DVD_Player::play()
{
	cout << "SONY DVD Player is now playing" << endl;
	playing = true;
}

inline void SONY_DVD_Player::stop()
{
	cout << "SONY DVD Player is stopped" << endl;
	playing = false;
}

inline void SONY_DVD_Player::forward()
{
	cout << "SONY DVD Player is fast forwarding" << endl;
}

inline void SONY_DVD_Player::rewind()
{
	cout << "SONY DVD Player is rewinding" << endl;
}

#endif