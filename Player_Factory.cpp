#include "Player_Factory.h"
#include "Common.h"
#include "Samsung_Player_Factory.h"
#include "SONY_Player_Factory.h"
#include "JVC_Player_Factory.h"

//Global static factories instances
Samsung_Player_Factory samsungFactory;
SONY_Player_Factory sonyFactory;
JVC_Player_Factory jvcFactory;

Player_Factory::Player_Factory(){

}

Player_Factory::~Player_Factory(){

}

Player_Factory& Player_Factory::GetFactory(Company company){

	switch (company){
			case SAMSUNG:
				return samsungFactory;
				break;
			case SONY:
				return sonyFactory;
				break;
			case JVC:
				return jvcFactory;
				break;
			default:
				return samsungFactory;
				break;
	}

	
}