
#include "Entertainment_Console.h"
#include "Common.h"


int main (int argc, char** argv){

	Entertainment_Console console;

	console.BuyNewDevice(CD, SAMSUNG);

	console.Play(CD, SAMSUNG);
	console.Play(VCR, SAMSUNG);
	console.BuyNewDevice(VCR,SAMSUNG);
	console.Play(VCR, SAMSUNG);
	
	
}