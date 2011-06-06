#include "Samsung_Player_Factory.h"
#include "Samsung_DVD_Player.h"
#include "Samsung_VCR_Player.h"
#include "Samsung_CD_Player.h"

Player *Samsung_Player_Factory::CreateDVDPlayer(){
    return new Samsung_DVD_Player;
}

Player *Samsung_Player_Factory::CreateCDPlayer(){
    return new Samsung_CD_Player;
}

Player *Samsung_Player_Factory::CreateVCRPlayer(){
    return new Samsung_VCR_Player;
}