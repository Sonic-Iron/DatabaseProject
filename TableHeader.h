#pragma once
#include <experimental/filesystem>
#include "DatabaseHeader.h"
//data types:
// numbers?
// words?
// file types? and a reference to the file? (a directory path?)
// this database can carry numbers, words, file locations and references to other tables.


class Table : Database
{
private:

public:
	std::vector<std::pair<char, std::string>> Header;
	Table();
	bool AddtoHeader();
	//CRUD

	bool CreateEntry();
	bool ReadEntry();
	bool UpdateEntry();
	bool DeleteEntry();

	bool UpdateType();
};