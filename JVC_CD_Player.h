#ifndef JVC_CD_PLAYER_H_
#define JVC_CD_PLAYER_H_

#include "Common.h"
#include "Player.h"
#include <ostream>

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
	JVC_CD_Player(constJVC_CD_Player& jcp);					//copy CTOR
	JVC_CD_Player& operator=(constJVC_CD_Player& jcp);		//assignment operator

};

#endif