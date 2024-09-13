// DatabaseProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <experimental/filesystem>
#include "DatabaseHeader.h"
#include "TableHeader.h"
namespace fs = std::experimental::filesystem;
Database::Database(std::string name, std::string path)
{
	BASEPATH = "./DATABASEPROJECT"; //why does this work and not 'BASEPATH {"./DATABASEPROJECT"}' ?

}

Table::Table(std::string PKname)
{

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

Table Table::CreateTable(std::vector<std::string> entrytypes) //add in databasekey when decided
{

}


std::string Database::GetDirectory(Database& db)
{

}
std::string Table::GetDirectory(Table& table)
{

}
