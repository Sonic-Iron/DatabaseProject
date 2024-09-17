#pragma once

#include <string>


class Database
{
private:

public:
	Database();
	Database(std::string dbfilename, std::string dbfilepath);
	std::unique_ptr<Database> database;

	std::string GetDBPath();

	//Static so it can be called without an class memeber being created
	static std::string BASEPATH;
	static Database CreateEmptyDatabase(std::string dbname);
	static Database LoadDatabase(std::string databaseloc);
	bool SaveDatabase();

	Table CreateTable(std::vector<std::pair<char, std::string>> HeaderDef);

};