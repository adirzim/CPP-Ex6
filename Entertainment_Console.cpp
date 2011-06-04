#include "Entertainment_Console.h"


void Entertainment_Console::BuyNewDevice( Type type, Company company )
{
	md.AddDevice(type,company);
}

void Entertainment_Console::Play( Type type, Company company )
{
	md.SetActiveDevice(type,company);
	md.Play();
}

void Entertainment_Console::Stop( Type type, Company company )
{
	md.Stop(type,company);
}

void Entertainment_Console::Forward( Type type, Company company )
{
	md.Forward(type,company);
}

void Entertainment_Console::Rewind( Type type, Company company )
{
	md.Rewind(type,company);
}
