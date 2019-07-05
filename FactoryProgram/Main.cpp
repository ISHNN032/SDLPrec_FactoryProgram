#include <iostream>
#include "Global.h"
#include "ActivityManager.h"
#include <unistd.h>

int main(int argc, char* args[]) {
	std::cout << "Main Activity Started!" << std::endl;

	gManager = new ActivityManager(0);
	gManager->setNext(0);
	while(gManager->getNext() != -1){
		int next = gManager->getNext();
		std::cout << "start Activity" << next << std::endl;
		gManager->startActivity(next);
	}
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