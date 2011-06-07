#include "Player_Factory.h"
#include "Common.h"
#include "Samsung_Player_Factory.h"
#include "SONY_Player_Factory.h"
#include "JVC_Player_Factory.h"

//TODO: add here all the factories decelerations
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

	//TODO: add different kind of Factories
    default:
        return samsungFactory;
        break;

    }

    
}