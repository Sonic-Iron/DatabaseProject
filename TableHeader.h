#pragma once
#include <experimental/filesystem>
//data types:
// numbers?
// words?
// file types? and a reference to the file? (a directory path?)
// this database can carry numbers, words, file locations and references to other tables.


class Table : Database
{
private:
	std::

public:
	using Database::GetDirectory;
	std::string GetDirectory(Table& table);
	
	Table(std::vector<std::string> entrynames, std::vector<std::string> types);
	//CRUD

	bool CreateEntry();
	bool ReadEntry();
	bool UpdateEntry();
	bool DeleteEntry();
};