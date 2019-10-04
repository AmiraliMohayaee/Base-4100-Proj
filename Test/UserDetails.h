#pragma once

#include <string>


class UserDetail
{
public:
	UserDetail();
	std::string GetName(std::string name);
	void GetName();
	int GetAge();
	void ShowAge();


private:
	std::string m_name;
	int m_age;
};