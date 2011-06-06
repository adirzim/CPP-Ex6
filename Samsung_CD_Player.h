#ifndef Samsung_CD_PLAYER_H_
#define Samsung_CD_PLAYER_H_

#include "Player.h"
#include <iostream>

using namespace std;

class Samsung_CD_Player : public Player
{
public:

	Samsung_CD_Player();											//CTOR
	~Samsung_CD_Player();											//DTOR

	//public Methods
	void play();													//play
	void stop();													//stop
	void forward();													//forward
	void rewind();													//rewind

private:

	//disable copy CTOR & assignment operator			//TOOD: Remove this?
	Samsung_CD_Player(const Samsung_CD_Player& scp);					//copy CTOR
	Samsung_CD_Player& operator=(const Samsung_CD_Player& scp);		//assignment operator	

};

Samsung_CD_Player::Samsung_CD_Player()
{

}

Samsung_CD_Player::~Samsung_CD_Player()
{

}


inline void Samsung_CD_Player::play()
{
	cout << "Samsung CD Player is now playing" << endl;
	playing = true;
}

inline void Samsung_CD_Player::stop()
{
	cout << "Samsung CD Player is stopped" << endl;
	playing = false;
}

inline void Samsung_CD_Player::forward()
{
	cout << "Samsung CD Player is fast forwarding" << endl;
}

inline void Samsung_CD_Player::rewind()
{
	cout << "Samsung CD Player is rewinding" << endl;
}



#endif