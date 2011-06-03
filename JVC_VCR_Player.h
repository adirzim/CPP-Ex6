#ifndef JVC_VCR_PLAYER_H_
#define JVC_VCR_PLAYER_H_

#include "Common.h"
#include "Player.h"
#include <ostream>

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

#endif