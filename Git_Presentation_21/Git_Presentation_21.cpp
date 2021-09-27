#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
using namespace std::filesystem;


void main() {

	std::fstream inFile;
	path p = "C:/Users/tited/source/repos/Git_Presentation_2021/Git_Presentation_21/Name_Files";
	for (const auto& f : directory_iterator(p))
	{

		inFile.open(f);
		while (!inFile.eof())
		{
			int a = 9;
			std::string names("");
			if (std::getline(inFile, names)) {
				std::cout <<a << std::endl;

				std::cout << names << std::endl;
			}

		}
		inFile.close();
	}




}