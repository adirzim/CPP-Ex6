#ifndef JVC_VCR_PLAYER_H_
#define JVC_VCR_PLAYER_H_

#include "Common.h"
#include "Player.h"
#include <iostream>

using namespace std;

class JVC_VCR_Player : public Player
{
public:
	
	JVC_VCR_Player();										//CTOR
	~JVC_VCR_Player();										//DTOR

	//public Methods
	void play();											//play
	void stop();											//stop
	void forward();											//forward
	void rewind();											//rewind

private:

	//disable copy CTOR & assignment operator
	JVC_VCR_Player(const JVC_VCR_Player& jvp);				//copy CTOR
	JVC_VCR_Player& operator=(const JVC_VCR_Player& jvp);	//assignment operator

};


JVC_VCR_Player::JVC_VCR_Player()
{
	type = VCR;
	company = JVC;
}

JVC_VCR_Player::~JVC_VCR_Player()
{

}


inline void JVC_VCR_Player::play()
{
	cout << "JVC VCR Player is now playing" << endl;
	playing = true;
}

inline void JVC_VCR_Player::stop()
{
	cout << "JVC VCR Player is stopped" << endl;
	playing = false;
}

inline void JVC_VCR_Player::forward()
{
	cout << "JVC VCR Player is fast forwarding" << endl;
}

inline void JVC_VCR_Player::rewind()
{
	cout << "JVC VCR Player is rewinding" << endl;
}

#endif