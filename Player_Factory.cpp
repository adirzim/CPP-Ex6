#include "Player_Factory.h"
#include "Common.h"
#include "Samsung_Player_Factory.h"
#include "SONY_Player_Factory.h"
#include "JVC_Player_Factory.h"


//JVC_Player_Factory jvcFactory;
Samsung_Player_Factory samsungFactory;




Player_Factory::Player_Factory(){

}

Player_Factory::~Player_Factory(){

}



Player_Factory& Player_Factory::GetFactory(Company company){

    switch (company){


    case SAMSUNG:
        return samsungFactory;
        break;

    default:
        return samsungFactory;
        break;

    }

    
}