#include "library.h"
#include "Screen.h"

int main(int argc, char *argv[])
{
	// features:
	//     - registration and loginng
	//     - displaying the menu of client
	//     - buying phones
	//     - other small but important things...

	auto *screen = new Screen();
	screen->login();
	return 0;
}