#include "Entertainment_Console.h"

Entertainment_Console::Entertainment_Console()
{

}

Entertainment_Console::~Entertainment_Console()
{

}


void Entertainment_Console::BuyNewDevice( Type type, Company company )
{
	md.AddDevice(type,company);
}

void Entertainment_Console::Play( Type type, Company company )
{
	md.Play(type, company);
}

void Entertainment_Console::StopActiveDevice()
{
	md.StopActiveDevice();
}

void Entertainment_Console::Stop (Type type, Company company){

	md.Stop(type, company);

}


void Entertainment_Console::Forward( Type type, Company company )
{
	md.Forward(type,company);
}

void Entertainment_Console::Rewind( Type type, Company company )
{
	md.Rewind(type,company);
}



