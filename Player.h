#ifndef PLAYER_H_
#define PLAYER_H_

#include "Common.h"

class Player
{

public:
	
	Player();							//CTOR
	virtual ~Player();					//DTOR

	//public Members
	Type type;							//device type
	Company company;					//company name

	//public Methods
	virtual void play() = 0;				//play
	virtual void stop() = 0;			//stop
	virtual void forward() = 0;			//forward
	virtual void rewind() = 0;			//rewind
	
};
#endif 
