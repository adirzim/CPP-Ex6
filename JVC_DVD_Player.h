#ifndef JVC_DVD_PLAYER_H_
#define JVC_DVD_PLAYER_H_

#include "Common.h"
#include "Player.h"
#include <iostream>

using namespace std;

class JVC_DVD_Player : public Player
{
public:

	JVC_DVD_Player();											//CTOR
	~JVC_DVD_Player();											//DTOR

	//public Methods
	void play();												//play
	void stop();												//stop
	void forward();												//forward
	void rewind();												//rewind

private:

	//disable copy CTOR & assignment operator
	JVC_DVD_Player(const JVC_DVD_Player& jdp);					//copy CTOR
	JVC_DVD_Player& operator=(const JVC_DVD_Player& jdp);		//assignment operator

};

JVC_DVD_Player::JVC_DVD_Player()
{
	type = DVD;
	company = JVC;
}

JVC_DVD_Player::~JVC_DVD_Player()
{

}

inline void JVC_DVD_Player::play()
{
	cout << "JVC DVD Player is now playing" << endl;
	playing = true;
}

inline void JVC_DVD_Player::stop()
{
	cout << "JVC DVD Player is stopped" << endl;
	playing = false;
}

inline void JVC_DVD_Player::forward()
{
	cout << "JVC DVD Player is fast forwarding" << endl;
}

inline void JVC_DVD_Player::rewind()
{
	cout << "JVC DVD Player is rewinding" << endl;
}

#endif