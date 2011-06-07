#ifndef SAMSUNG_DVD_PLAYER_H_
#define SAMSUNG_DVD_PLAYER_H_

#include "Player.h"
#include <iostream>

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
	Samsung_DVD_Player(const Samsung_DVD_Player& sdp);					//copy CTOR
	Samsung_DVD_Player& operator=(const Samsung_DVD_Player& sdp);		//assignment operator

};

Samsung_DVD_Player::Samsung_DVD_Player()
{
	type = DVD;
	company = SAMSUNG;
}

Samsung_DVD_Player::~Samsung_DVD_Player()
{

}

inline void Samsung_DVD_Player::play()
{
	cout << "Samsung DVD Player is now playing" << endl;
	playing = true;
}

inline void Samsung_DVD_Player::stop()
{
	cout << "Samsung DVD Player is stopped" << endl;
	playing = false;
}

inline void Samsung_DVD_Player::forward()
{
	cout << "Samsung DVD Player is fast forwarding" << endl;
}

inline void Samsung_DVD_Player::rewind()
{
	cout << "Samsung DVD Player is rewinding" << endl;
}



#endif