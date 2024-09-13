#pragma once

#include <string>


class Database
{
public:
	Database(std::string dbname, std::string path);

	std::string GetDirectory(Database& db);

	//Static so it can be called without an class memeber being created
	static std::string BASEPATH;
	static Database CreateEmptyDatabase(std::string dbname);

};