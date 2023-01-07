#pragma once
#ifndef _PhoneBook_h
#define _PhoneBook_h
#include <iostream>
#include <string>
#include <vector>


class PhoneBook
{
public:
	PhoneBook();
	PhoneBook(const std::vector<int>& numbers, const std::vector<std::string>& names);

	void SetSubscriber(int index);
		//�� �����������, �.�. �-��� ��������� ����� ������ �� ��������
	const std::string& GetName(size_t index) const;
	int GetNumber(size_t index) const;
	void addNumber(int number);
	bool removeNumber(int number);
	void removeNumberByIndex(size_t index);
	const std::string& getName(size_t index);
	void addName(const std::string& name);
	bool removeName(const std::string& name);

	void showAllNumbers();
	void showAllNames();

	//�������� ���������� ���������� const std::string& (������ �� ��������� ����������) �.�.
	//��� ��������� ����� �� ��������� �������, � ������ ���������� �������� � ������ ������
	bool operator>(PhoneBook& other);
	bool operator>=(PhoneBook& other);
	bool operator<(PhoneBook& other);
	bool operator<=(PhoneBook& other);
	const std::string& operator[](int index);
private:
	int _index = 0;
	std::vector<int> _numbers;
	std::vector<std::string> _names;
};

#endif // !_PhoneBook_h

