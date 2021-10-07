#pragma once
#define Header_h
#include <string>

struct Date {
	int month;
	int day;
	int year;
};

struct Contract {
	int contract_number;
	std::string education_title;
	int year_of_education;
	double hourly_rate, hours_per_week, weekly_salary;
};

struct Employee
{
	int identification_number;
	std::string first_name, last_name, SIN_number, email, gender;
	Date hire_date;
	Contract details_contract;
};

void input_employee(Employee *ptr_first, Employee *ptr_last);
void print_employee(Employee *ptr_first, Employee *ptr_last);
void search_by_reference(Employee employee_arr[], const int MAX);
void search_by_pointer(Employee *ptr_first, Employee *ptr_last);
void swap_by_ptr(Employee  * pointer1, Employee * pointer2);
void print_OP_by_reference(Employee employee_arr[], int position);
void sort_employee_by_pointer(Employee *ptr_first, Employee *ptr_last);
void print_OP_by_pointer(Employee *temp_employee);
void menu_option();


void demo_for_search(Employee employee_arr[], const int MAX, Employee *ptr_first, Employee *ptr_last);