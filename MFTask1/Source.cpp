#include <iostream>
#include "data.h"
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	DB shopList = {"Shop List"};
	string answer;
	do {
		cout << "�������� ��������:\n";
		cout << "add;\n";
		cout << "clear;\n";
		cout << "show;\n";
		cout << "end.\n";
		cout << "������� ������� -> ";
		getline(cin, answer);

		if (answer == "add")
			addNote(shopList);
		else
			if (answer == "clear") {
				clearNotes(shopList);
				cout << "������ ������\n";
			}
			else
				if (answer == "show")
					showDB(shopList);
				else
					if (answer == "end")
						cout << "��������� ���������";
					else
						cout << "������� �� ����������\n";
		cout << endl;
	} while (answer != "end");

	return 0;
}