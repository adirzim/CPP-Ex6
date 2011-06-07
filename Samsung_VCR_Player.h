#ifndef SAMSUNG_VCR_PLAYER_H_
#define SAMSUNG_VCR_PLAYER_H_

#include "Player.h"
#include <iostream>


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

Samsung_VCR_Player::Samsung_VCR_Player()
{
	type = VCR;
	company = SAMSUNG;
}

Samsung_VCR_Player::~Samsung_VCR_Player()
{

}


inline void Samsung_VCR_Player::play()
{
	cout << "Samsung VCR Player is now playing" << endl;
	playing = true;
}

inline void Samsung_VCR_Player::stop()
{
	cout << "Samsung VCR Player is stopped" << endl;
	playing = false;
}

inline void Samsung_VCR_Player::forward()
{
	cout << "Samsung VCR Player is fast forwarding" << endl;
}

inline void Samsung_VCR_Player::rewind()
{
	cout << "Samsung VCR Player is rewinding" << endl;
}



#endif