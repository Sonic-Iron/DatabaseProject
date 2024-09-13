#pragma once


class table
{
private:

public:
	table(std::string PKname);
	static table CreateTable(std::vector<std::string> entrytypes);

	//CRUD

	void CreateEntry();
};