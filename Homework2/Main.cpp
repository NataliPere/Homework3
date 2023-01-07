#include "PhoneBook.h"
#include <iostream>

int main() {


	setlocale(LC_ALL, "Russian");

	std::cout << "Телефонная книга\n";
	std::cout << "=================\n";

	PhoneBook pb;

	pb.addName("Stanislav");
	pb.addNumber(3749578);
	
	pb.addName("Pavel");
	pb.addNumber(314855);
	
	pb.addName("Oleg");
	pb.addNumber(3534129);
	
	pb.addName("Nikolay");
	pb.addNumber(3916903);

	std::cout << pb.getName(1) << " " << pb.GetNumber(1) << "\n";
	std::cout << pb.getName(2) << " " << pb.GetNumber(2) << "\n";
	std::cout << pb.getName(3) << " " << pb.GetNumber(3) << "\n";
	std::cout << pb.getName(4) << " " << pb.GetNumber(4) << "\n";

	std::cout << "=================================\n";
	
	std::cout << "Имена всех абонентов:\n";
	pb.showAllNames();
	std::cout << "=================================\n";
	std::cout << "Телефоны всех абонентов:\n";
	pb.showAllNumbers();

	std::cout << "=================================\n";

	pb.removeNumberByIndex(1);
	pb.removeNumber(314855);

	pb.removeName("Oleg");

	std::cout << "Данные абонентов после изменений:\n";
	pb.showAllNames();
	pb.showAllNumbers();



}



