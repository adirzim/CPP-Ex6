#ifndef JVC_DVD_PLAYER_H_
#define JVC_DVD_PLAYER_H_

#include "Common.h"
#include "Player.h"
#include <ostream>

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
	JVC_DVD_Player(constJVC_DVD_Player& jdp);					//copy CTOR
	JVC_DVD_Player& operator=(constJVC_DVD_Player& jdp);		//assignment operator

};

#endif