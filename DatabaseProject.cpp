// DatabaseProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <experimental/filesystem>
#include "TableHeader.h"
namespace fs = std::experimental::filesystem;
Database::Database()
{
	BASEPATH = "./DATABASEPROJECT";
}
Database::Database(std::string dbfilename, std::string dbfilepath)
{
	BASEPATH = "./DATABASEPROJECT"; //why does this work and not 'BASEPATH {"./DATABASEPROJECT"}' ?
}

Table::Table(){}

Table Database::CreateTable(std::vector<std::pair<char, std::string>> HeaderDef)
{
	Table newtable = Table(); // do i need the '= Table()'
	for (std::pair<char, std::string> entry : HeaderDef)
	{

	}
}


Database Database::CreateEmptyDatabase(std::string dbfilename)
{
	if(!fs::exists(BASEPATH))
	{
		fs::create_directory(BASEPATH);
	}
	std::string dbfilepath{BASEPATH + '/' + dbfilename};
	if (!fs::exists(dbfilepath))
	{
		fs::create_directory(dbfilepath);
	}
	return Database(dbfilename, dbfilepath);
}
Database Database::LoadDatabase(std::string databaseloc)
{

}

bool Database::SaveDatabase()
{
	return false;
}

std::string Database::GetDBPath()
{

}
