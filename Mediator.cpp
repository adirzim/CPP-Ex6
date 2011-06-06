#include "Mediator.h"


Mediator::Mediator()
{
	//factories = Player_Factory::CreatePlayerFactories();
}

Mediator::~Mediator()
{
	//TODO:remove all devices


	//remove all factories
	//delete factories;
}

void Mediator::AddDevice( Type type, Company company )
{
    
    

	switch (type)
	{
	case VCR:
        devices.insert(pair<pair<Company,Type>,Player *>(pair<Company,Type>(company,type), Player_Factory::GetFactory(company).CreateVCRPlayer()));
        		
		break;
	case CD:
		//devices.push_front((*(factories->find(company)->second)).CreateCDPlayer());
		break;
	case DVD:
		//devices.push_front((*(factories->find(company)->second)).CreateDVDPlayer());
		break;
	}
}

void Mediator::RemoveDevice( Type type, Company company )
{
	//TODO: Implement
}

void Mediator::SetActiveDevice( Type type, Company company )
{
	

    devices.find(

}

void Mediator::Play()
{
	//TODO: Implement
}

void Mediator::Stop( Type type, Company company )
{

}

void Mediator::Forward( Type type, Company company )
{

}

void Mediator::Rewind( Type type, Company company )
{

}
