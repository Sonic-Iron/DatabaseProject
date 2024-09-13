#pragma once


class Table : Database
{
private:

public:
	Table(std::string PKname);
	using Database::GetDirectory;
	
	std::string GetDirectory(Table& table);
	
	static Table CreateTable(std::vector<std::string> entrytypes);


	//CRUD

	bool CreateEntry();
	bool ReadEntry();
	bool UpdateEntry();
	bool DeleteEntry();
};