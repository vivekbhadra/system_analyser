#include <iostream>
#include <memory>
#include "SystemAnalyser.h"

int main()
{
	std::cout << "Hello World" << std::endl;
	auto system = std::make_unique<SystemAnalyser>();
	system->RunCommand("ps -e");
	system->DisplayOutput();

	return 0;
}
