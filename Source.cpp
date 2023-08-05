#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

int main() {

	vector<Employee> employees;

	bool flag = false;

	while (flag != true) {
		cout << "Choose the menu point: \n";
		cout << "1) Create employee \n";
		cout << "2) Delete employee \n";
		cout << "3) Show the employees \n";
		cout << "4) Change salary \n";
		cout << "5) Change workplace \n";
		cout << "6) Return the number of employees \n";
		string command; cin >> command;

		if (command == "1") {
			string work, post, NSP; int salary;
			cout << "Enter workplace: "; cin >> work;
			cout << "Enter post: "; cin >> post;
			cout << "Enter NSP: "; cin >> NSP;
			cout << "Enter salary: "; cin >> salary;

			Employee emp(work, post, NSP, salary);
			employees.push_back(emp);
			cout << "\nDONE\n\n";
		}

		if (command == "2") {
			string NSP;
			cout << "Enter NSP: "; cin >> NSP;

			auto it = employees.begin();
			int sch = 0;
			while (it != employees.end()) {
				bool check = *it == NSP; // Оператор сравнения
				if (check) {
					it = employees.erase(it);
					sch += 1;
				}
				else ++it;
			}
			if (sch == 0) {
				cout << "\n No such employee in the list \n\n";
			}
			else cout << "\n DONE \n\n";
		}

		if (command == "3") {
			for (auto it = employees.begin(); it != employees.end(); it++) {
				cout << endl;
				it->getWork_place(); cout << " ";
				it->getPost(); cout << " ";
				it->getNSP(); cout << " ";
				it->getSalary(); cout << " ";
			}
			cout << "\n\n";
		}

		if (command == "4") {
			int salary;
			string NSP;
			int sch = 0;
			cout << "Enter the name of employee, who's salary you want to change: "; cin >> NSP;
			for (auto it = employees.begin(); it != employees.end(); it++) {
				bool check = *it == NSP; // Оператор сравнения
				if (check) {
					cout << "Enter the sum of the new salary: "; cin >> salary;
					it->changeSalary(salary);
					sch += 1;
				}
			}
			if (sch == 0) {
				cout << "\n No such employee in the list \n\n";
			}
			else cout << "\nDONE\n\n";
		}

		if (command == "5") {
			string NSP;
			string work;
			int sch = 0;
			cout << "Enter the name of employee, who's workplace you want to change: "; cin >> NSP;
			for (auto it = employees.begin(); it != employees.end(); it++) {
				bool check = *it == NSP; // Оператор сравнения
				if (check) {
					cout << "Enter the new workplace: "; cin >> work;
					*it = work; // Оператор присваивания
					sch += 1;
				}
			}
			if (sch == 0) {
				cout << "\n No such employee in the list \n\n";
			}
			else cout << "\nDONE\n\n";
		}

		if (command == "6") {
			cout << "\n" << Employee::get_count() << "\n\n";
		}

		if (command != "1" && command != "2" && command != "3" && command != "4" && command != "5" && command != "6") {
			cout << "\nNo such command in the list\n\n";
		}
	}
}
