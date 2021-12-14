#include <iostream>
#include <fstream>
#include <string>

bool	ft_check_file(std::string fileName, std::string std, std::string dst) {
	if (std.empty() ||dst.empty()) {
		std::cerr << "src and dst cannot be empty" << std::endl;
		return (true);
	}
	std::ifstream inf (fileName);
	if (!inf) {
		std::cerr << "Uh oh, " << fileName << " could not be opened for reading!" << std::endl;
		return (true);
	}
	inf.close();
	return (false);
}

bool	ft_replace(std::string fileName, std::string src, std::string dst) {
	size_t	pos;
	std::string	buffer;
	std::string	file;
	std::ifstream inf (fileName);

	if (!inf) {
		std::cerr << "Uh oh, " << fileName << " could not be opened for reading!" << std::endl;
		return (true);
	}
	while (std::getline(inf, buffer))
		file += (buffer + "\n");
	if (file.size())
		file.erase(file.size() - 1);
	pos = file.find(src);
	while (pos != std::string::npos) {
		file.erase(pos, src.size());
		file.insert(pos, dst);
		pos = file.find(src, pos + dst.size());
	}
	std::ofstream out(std::string(fileName) + ".replace");
	out << file;
	return (false);
}

int main(int ac, char **av) {
	if (ac == 4)
	{
		if (ft_check_file(av[1], av[2], av[3]))
			return (1);
		if (ft_replace(av[1], av[2], av[3]))
			return (1);
	}
	else
		std::cout << "Give me path to file and two strings" << std::endl;
	return (0);
}
