#pragma once

#include <string>


class Database
{
private:

public:
	Database();
	Database(std::string dbname, std::string path);
	std::unique_ptr<Database> database;

	std::string GetDirectoryPath();

	//Static so it can be called without an class memeber being created
	static std::string BASEPATH;
	static Database CreateEmptyDatabase(std::string dbname);
	static Database LoadDatabase(std::string databaseloc);
	bool SaveDatabase();
};