#include "PhoneBook.h"
#include <iostream>

PhoneBook::PhoneBook() {

};

PhoneBook::PhoneBook(const std::vector<int>& numbers, const std::vector<std::string>& names) :
	_numbers(numbers), _names(names) {}

	void PhoneBook::SetSubscriber(int index) {
		_index = index;
	}

	const std::string &PhoneBook::GetName(size_t index) const {
		return _names[index];
	}

	int PhoneBook::GetNumber(size_t index) const {
		return _numbers[index];
	}
	void PhoneBook::addNumber(int number) {
		_numbers.push_back(number);
	}

	bool PhoneBook::removeNumber(int number) {
		for (size_t i = 0; i < _numbers.size(); i++) {
			if (_numbers[i] == number) {
				_numbers.erase(_numbers.begin() + i);
				return true;
			}
		}
		return false;
	}

	void PhoneBook::removeNumberByIndex(size_t index) {
		_numbers.erase(_numbers.begin() + index);
	}

	const std::string& PhoneBook::getName(size_t index) {
		return _names[index];
	}

	void PhoneBook::addName(const std::string& name) {
		_names.push_back(name);
	}

	bool PhoneBook::removeName(const std::string& name) {
		for (size_t i = 0; i < _names.size(); i++) {
			if (_names[i] == name) {
				_names.erase(_names.begin() + i);
				return true;
			}
		}
		return false;
	}


	void PhoneBook::showAllNumbers() {
		for (size_t i = 0; i < _numbers.size(); i++) {
			std::cout << _numbers[i] << '\n';
		}
	}

	void PhoneBook::showAllNames() {
		for (size_t i = 0; i < _names.size(); i++) {
			std::cout << _names[i] << '\n';
		}
	}

	bool PhoneBook::operator>(PhoneBook& other) {
		return _names.size() > other._names.size();
	}

	bool PhoneBook::operator>=(PhoneBook& other) {
		return _names.size() >= other._names.size();
	}

	bool PhoneBook::operator<(PhoneBook& other) {
		return _names.size() < other._names.size();
	}

	bool PhoneBook::operator<=(PhoneBook& other) {
		return _names.size() <= other._names.size();
	}
	const std::string& PhoneBook::operator[](int index) {
		return _names[index];
	}
