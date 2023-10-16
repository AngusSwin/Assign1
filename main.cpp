#include <iostream>
#include <fstream>

int main()
{
	std::string fileName = "output.txt";

	//Creates a output file for us
	std::ofstream outputFile;

	outputFile.open(fileName);

	if (!outputFile.is_open())
	{
		std::cerr << "Failed to open the file." << std::endl;
		return 1;
	}

	//Modify this to change the text inside the file
	std::string textToWrite = "This is text written to this file.";

	outputFile << textToWrite << std::endl;

	outputFile.close();

	std::cout << "Text has been written to this:" << fileName << std::endl;

	return 0;
}