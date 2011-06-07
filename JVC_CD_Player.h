#ifndef JVC_CD_PLAYER_H_
#define JVC_CD_PLAYER_H_

#include "Common.h"
#include "Player.h"
#include <iostream>

using namespace std;

class JVC_CD_Player : public Player
{
public:

	JVC_CD_Player();										//CTOR
	~JVC_CD_Player();										//DTOR

	//public Methods
	void play();											//play
	void stop();											//stop
	void forward();											//forward
	void rewind();											//rewind

private:

	//disable copy CTOR & assignment operator
	JVC_CD_Player(const JVC_CD_Player& jcp);				//copy CTOR
	JVC_CD_Player& operator=(const JVC_CD_Player& jcp);		//assignment operator

};

JVC_CD_Player::JVC_CD_Player()
{
	type = CD;
	company = JVC;
}

JVC_CD_Player::~JVC_CD_Player()
{

}


inline void JVC_CD_Player::play()
{
	cout << "JVC CD Player is now playing" << endl;
	playing = true;
}

inline void JVC_CD_Player::stop()
{
	cout << "JVC CD Player is stopped" << endl;
	playing = false;
}

inline void JVC_CD_Player::forward()
{
	cout << "JVC CD Player is fast forwarding" << endl;
}

inline void JVC_CD_Player::rewind()
{
	cout << "JVC CD Player is rewinding" << endl;
}


#endif