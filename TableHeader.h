#pragma once
#include <experimental/filesystem>
#include <variant>
//data types:
// numbers?
// words?
// file types? and a reference to the file? (a directory path?)
// this database can carry numbers, words, file locations and references to other tables.


class Table : Database
{
private:s
	std::vector<

public:
	Table(std::string PKname);

	using Database::GetDirectory;
	std::string GetDirectory(Table& table);
	
	static Table CreateTable(std::vector<std::string> entrynames, std::vector<std::string> types);
	//CRUD

	bool CreateEntry();
	bool ReadEntry();
	bool UpdateEntry();
	bool DeleteEntry();
};