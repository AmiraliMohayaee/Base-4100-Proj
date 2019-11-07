#pragma once

#include <fstream>


class File
{
public:
	File();
	void OpenFile();
	void CloseFile();
	void WriteFile();
	void ReadFile();


private:
	File* m_file;
	char m_buffer[100];

};