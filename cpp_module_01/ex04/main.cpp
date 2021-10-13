#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char *argv[])
{
	if (argc != 4 || std::string(argv[2]) == "" || std::string(argv[3]) == "\0")
	{
		std::cout << "Arguments Error" << std::endl;
		return (-1);
	}
	std::string	resultFileName = argv[1];

	resultFileName.append(".replace");

	std::fstream	inFile;
	std::fstream	outFile;

	inFile.open(argv[1], std::ios::in);
	if (!inFile.is_open())
	{
		std::cout << "Fail inFile open" << std::endl;
		return (-1);
	}

	outFile.open(resultFileName, std::ios::out);
	if (!outFile.is_open())
	{
		std::cout << "Fail outFile open" << std::endl;
		inFile.close();
		return (-1);
	}

	std::string	buf;
	while(!inFile.eof())
	{
		std::getline(inFile, buf);
		while(true)
		{
			size_t i = buf.find(argv[2]);

			if (i == std::string::npos)
			{
				outFile << buf;
				break;
			}
			outFile << buf.substr(0, i) << argv[3];
			buf = buf.substr(i + std::strlen(argv[2]));
		}
		outFile << std::endl;
	}
	inFile.close();
	outFile.close();
	return (0);
}
