#include "Data.h"
#include <iostream>
#include <string>

void addNote(DB& base) {
	base.notesCount++;
	std::cout << "¬ведите новую запись:\n";
	std::string str;
	getline(std::cin, str);
	base.notes += std::to_string(base.notesCount) + ". " + str + "\n";
	
}

void clearNotes(DB &base) {
	base.notesCount = 0;
	base.notes = "";
}

void showDB(DB& base) {
	std::cout << "Page: " << base.title << "\n";
	std::cout << "Notes number: " << base.notesCount << "\n";
	std::cout << base.notes;
}

