#include "JVC_Player_Factory.h"
#include "JVC_DVD_Player.h"
#include "JVC_VCR_Player.h"
#include "JVC_CD_Player.h"

JVC_Player_Factory::JVC_Player_Factory()
{

}

JVC_Player_Factory::~JVC_Player_Factory()
{

}

Player *JVC_Player_Factory::CreateDVDPlayer(){
    return new JVC_DVD_Player;
}

Player *JVC_Player_Factory::CreateCDPlayer(){
    return new JVC_CD_Player;
}

Player *JVC_Player_Factory::CreateVCRPlayer(){
    return new JVC_VCR_Player;
}


