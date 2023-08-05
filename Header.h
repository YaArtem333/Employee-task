#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Employee {
private:
	string work_place;
	string post;
	string NSP;
	int salary;
	static int count;
public:
	Employee(string work_place, string post, string NSP, int salary);
	static int get_count();
	void getWork_place();
	void getPost();
	void getSalary();
	void changeSalary(int salary);
	void getNSP();
	bool operator==(string a);
	void operator=(string e1);
};

