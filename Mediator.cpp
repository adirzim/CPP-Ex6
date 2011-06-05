#include "Mediator.h"


Mediator::Mediator()
{
	factories = Player_Factory::CreatePlayerFactories();
}

Mediator::~Mediator()
{
	//TODO:remove all devices


	//remove all factories
	delete factories;
}

void Mediator::AddDevice( Type type, Company company )
{
	switch (type)
	{
	case VCR:
		devices.push_front((*(factories->find(company)->second)).CreateVCRPlayer());
		break;
	case CD:
		devices.push_front((*(factories->find(company)->second)).CreateCDPlayer());
		break;
	case DVD:
		devices.push_front((*(factories->find(company)->second)).CreateDVDPlayer());
		break;
	}
}

void Mediator::RemoveDevice( Type type, Company company )
{
	//TODO: Implement
}

void Mediator::SetActiveDevice( Type type, Company company )
{
	list<Player*>::iterator it;

	//TODO: I don't know how to iterate on abstract class
	for ( it=devices.begin() ; it != devices.end(); it++ ){
		if((*it)->type == type && (*it)->company == company){
			active_Player = *it;
		}
	}

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
