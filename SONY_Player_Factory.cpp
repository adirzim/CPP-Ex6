#include "SONY_Player_Factory.h"
#include "SONY_DVD_Player.h"
#include "SONY_VCR_Player.h"
#include "SONY_CD_Player.h"

SONY_Player_Factory::SONY_Player_Factory()
{

}

SONY_Player_Factory::~SONY_Player_Factory()
{

}

Player *SONY_Player_Factory::CreateDVDPlayer(){
	return new SONY_DVD_Player;
}

Player *SONY_Player_Factory::CreateCDPlayer(){
	return new SONY_CD_Player;
}

Player *SONY_Player_Factory::CreateVCRPlayer(){
	return new SONY_VCR_Player;
}


