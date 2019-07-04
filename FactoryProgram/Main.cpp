#include <iostream>
#include "Global.h"
#include "ActivityManager.h"

int main(int argc, char* args[]) {
	std::cout << "Main Activity Started!" << std::endl;

	gManager = new ActivityManager(0);

	gManager->startActivity(2);
	/*
	std::cout << "Type 'exit' to end program" << std::endl << ">> ";
	while (true) {
		std::string a = "";
		std::cin >> a;
		if (a == "exit") break;
	}
	*/


	return EXIT_SUCCESS;
}