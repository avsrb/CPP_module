#include <iostream>

int main() {
	std::string		hi = "HI THIS IS BRAIN";
	std::string		*stringPTR = &hi;
	std::string		&stringREF = hi;

	std::cout		<< &hi << "\n"
					<< stringPTR << "\n"
					<< &stringREF << "\n"
					<< *stringPTR << "\n"
					<< stringREF
					<< std::endl;
}
