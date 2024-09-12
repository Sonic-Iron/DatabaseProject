#pragma once

#include <string>

class Database
{
public:
	Database(std::string dbname, std::string path);
	std::string BASEPATH;

	std::string GetDirectory();

	//Static so it can be called without an class memeber being created 
	static Database CreateEmptyDatabase(std::string dbname);

};