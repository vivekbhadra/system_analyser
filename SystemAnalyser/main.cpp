#include <iostream>
#include <memory>
#include "SystemAnalyser.h"

int main()
{
	std::cout << "Hello World" << std::endl;
	auto system = std::make_unique<SystemAnalyser>();
	system->RunCommand("ls -la");
	system->DisplayOutput();

	return 0;
}
