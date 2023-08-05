#include <string>
#include <iostream>
#include "Header.h"

using namespace std;

Employee::Employee(string workplace, string post, string NSP, int salary) {
	this->work_place = workplace;
	this->post = post;
	this->NSP = NSP;
	this->salary = salary;
	this->count++;
};
int Employee::count = 0;

int Employee::get_count() {
	return count;
}

void Employee::getWork_place() {
	cout << work_place;
}
void Employee::getPost() {
	cout << post;
}
void Employee::getNSP() {
	cout << NSP;
}
void Employee::getSalary() {
	cout << salary;
}

void Employee::changeSalary(int salary) {
	this->salary = salary;
}

// Оператор сравнения
bool Employee::operator==(string a) {
	return this->NSP==a;
}

// Оператор присваивания
void Employee::operator=(string e1) {
	this->work_place = e1;
}
