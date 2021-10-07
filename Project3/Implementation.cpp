#include <iostream>
#include "Header.h"
#include <string>
using namespace std;

void menu_option()
{
	const int MAX = 2;
	int keep_looping = 1;
	int i;
	Employee emp_array[MAX];
	Employee * ptr_first = &emp_array[0];
	Employee * ptr_last = &emp_array[MAX];
	while (keep_looping == 1) {
		cout << "Welcome to the Bank Application version 2\n";
		cout << "******************************\n\n";
		cout << "press 1 to add an employee in the list of employee \n\n";
		cout << "press 2 to print the employee from the list of employee press 2\n\n";
		cout << "press 3 to short the list of employee from the social insurence number(SIN) press 3\n\n";
		cout << "press 4 to search the employee from the list by identification number press 4\n\n";
		cout << "******************************\n\n";
		cout << "Insert your choice: ";
		cin >> i;
		cout << "\n********************************\n";
		cout << endl << endl;
		switch (i) {
		case 1:
			cout << "\n Input employees into the array of struct employees using reference:" << endl;
			input_employee(ptr_first, ptr_last);
			break;
		case 2:
			cout << "\n Version 01:  Print students (Using Pointers): " << endl;
			print_employee(ptr_first, ptr_last);
			break;
		case 3:
			cout << "Sort employee using pointer ... " << endl;
			sort_employee_by_pointer(ptr_first, ptr_last);
			break;
		case 4:
			demo_for_search(ptr_first, MAX, ptr_first, ptr_last);
			break;
		default:
			cout << "\n\n You have enter the wrong value \n";
		}
		cout << endl << endl;
		cout << "press 1 to continue and 0 to exit:- ";
		cin >> keep_looping;
		cout << endl << endl;
	}
	cout << endl << endl;
	cout << "This application is made by vishvam amin";
	cout << endl << endl;
}

void input_employee(Employee *ptr_first, Employee *ptr_last)
{

	for (Employee *emp_ptr = ptr_first; emp_ptr < ptr_last; emp_ptr++)
	{
		cout << "\n identification number : ";
		cin >> (*emp_ptr).identification_number;
		cout << " contract number : ";
		cin >> (*emp_ptr).details_contract.contract_number;
		cout << " first name: ";
		cin >> (*emp_ptr).first_name;
		cout << " last name: ";
		cin >> (*emp_ptr).last_name;
		cout << " SIN number: ";
		cin >> (*emp_ptr).SIN_number;
		cout << " email: ";
		cin >> (*emp_ptr).email;
		cout << " gender: ";
		cin.ignore();
		cin >> (*emp_ptr).gender;
		cout << " Hire_date: ";
		cin.ignore();
		cout << "\n\tenter year: ";
		cin >> (*emp_ptr).hire_date.year;
		cout << "\tenter date: ";
		cin >> (*emp_ptr).hire_date.day;
		cout << "\tenter month: ";
		cin >> (*emp_ptr).hire_date.month;
		cout << " Education title : ";
		cin >> (*emp_ptr).details_contract.education_title;
		cout << " year of education : ";
		cin >> (*emp_ptr).details_contract.year_of_education;
		cout << " hourly_rate: ";
		cin >> (*emp_ptr).details_contract.hourly_rate;
		cout << " hours per week: ";
		cin >> (*emp_ptr).details_contract.hours_per_week;
	}
}
void print_employee(Employee *ptr_first, Employee *ptr_last)
{

	for (Employee *emp_out = ptr_first; emp_out < ptr_last; emp_out++)
	{
		cout << " Employee Details: \n";
		cout << "******************************\n";
		cout << "\n identification_number: "; cout << (*emp_out).identification_number << endl;
		cout << " ||| Contract Number: "; cout << (*emp_out).details_contract.contract_number << endl;
		cout << " ||| First name: "; cout << (*emp_out).first_name << endl;
		cout << " ||| last name: "; cout << (*emp_out).last_name << endl;
		cout << " ||| SIN number: "; cout << (*emp_out).SIN_number << endl;
		cout << " ||| email: "; cout << (*emp_out).email << endl;
		cout << " ||| gender: "; cout << (*emp_out).gender << endl;
		cout << " ||| hire date: "; cout << (*emp_out).hire_date.day << "/"; cout << (*emp_out).hire_date.month << "/";
		cout << (*emp_out).hire_date.year << endl;
		cout << " ||| Education title: "; cout << (*emp_out).details_contract.education_title << endl;
		cout << " ||| year of education: "; cout << (*emp_out).details_contract.year_of_education << endl;
		cout << " ||| hourly rate: "; cout << (*emp_out).details_contract.hourly_rate << endl;
		cout << " ||| hours per week: "; cout << (*emp_out).details_contract.hours_per_week << endl;
		cout << " ||| weekly salary: "; cout << (*emp_out).details_contract.hourly_rate * (*emp_out).details_contract.hours_per_week << endl;
		cout << endl;
	}
}
void search_by_reference(Employee employee_arr[], const int MAX)
{
	int position = -1;
	int key;
	cout << " This Search is by Reference: \n";
	cout << "******************************\n";
	cout << "Enter the key value(Indentification number of employee): ";
	cin >> key;

	for (int index = 0; index < MAX; index++)
	{
		if (employee_arr[index].identification_number == key)
		{
			position = index;
			break;
		}
	}
	if (position == -1)
	{
		cout << "\n Employee not found...\n";
	}
	else if (position != -1)
	{
		print_OP_by_reference(employee_arr, position);
	}
}
void print_OP_by_reference(Employee employee_arr[], int position) {
	cout << " Employee Details \n";
	cout << "******************************\n";
	cout << "\n identification_number: "; cout << employee_arr[position].identification_number;
	cout << " ||| Contract Number: "; cout << employee_arr[position].details_contract.contract_number;
	cout << " ||| First name: "; cout << employee_arr[position].first_name;
	cout << " ||| last name: "; cout << employee_arr[position].last_name;
	cout << " ||| SIN number: "; cout << employee_arr[position].SIN_number;
	cout << " ||| email: "; cout << employee_arr[position].email;
	cout << " ||| gender: "; cout << employee_arr[position].gender;
	cout << " ||| hire date: ";
	cout << employee_arr[position].hire_date.day << "/";
	cout << employee_arr[position].hire_date.month << "/";
	cout << employee_arr[position].hire_date.year;
	cout << " ||| Education title: "; cout << employee_arr[position].details_contract.education_title;
	cout << " ||| year of education: "; cout << employee_arr[position].details_contract.year_of_education;
	cout << " ||| hourly rate: "; cout << employee_arr[position].details_contract.hourly_rate;
	cout << " ||| hours per week: "; cout << employee_arr[position].details_contract.hours_per_week;
	cout << " ||| weekly salary: "; cout << employee_arr[position].details_contract.hourly_rate * employee_arr[position].details_contract.hours_per_week;
}

void search_by_pointer(Employee * ptr_first, Employee * ptr_last)
{
	Employee * temp_employee = NULL;  int key = 0;
	cout << " This Search is by Pointer: \n";
	cout << "******************************\n";
	cout << "Enter the key value(Indentification number of employee): ";
	cin >> key;
	for (Employee * index = ptr_first; index <= ptr_last; index++)
	{
		if (index->identification_number == key) 
		{
			temp_employee = index;
			break;
		}
	}
	if (temp_employee == NULL)
	{
		cout << "\n Employee not found...\n";
	}
	else
	{
		print_OP_by_pointer(temp_employee);
	}
}

void print_OP_by_pointer(Employee *temp_employee) {
	cout << " Employee Details: \n";
	cout << "******************************\n";
	cout << "\n identification_number: "; cout << (*temp_employee).identification_number;
	cout << " ||| Contract Number: "; cout << (*temp_employee).details_contract.contract_number;
	cout << " ||| First name: "; cout << (*temp_employee).first_name;
	cout << " ||| last name: "; cout << (*temp_employee).last_name;
	cout << " ||| SIN number: "; cout << (*temp_employee).SIN_number;
	cout << " ||| email: "; cout << (*temp_employee).email;
	cout << " ||| gender: "; cout << (*temp_employee).gender;
	cout << " ||| hire date: "; cout << (*temp_employee).hire_date.day << "/"; cout << (*temp_employee).hire_date.month << "/";
	cout << (*temp_employee).hire_date.year;
	cout << " ||| Education title: "; cout << (*temp_employee).details_contract.education_title;
	cout << " ||| year of education: "; cout << (*temp_employee).details_contract.year_of_education;
	cout << " ||| hourly rate: "; cout << (*temp_employee).details_contract.hourly_rate;
	cout << " ||| hours per week: "; cout << (*temp_employee).details_contract.hours_per_week;
	cout << " ||| weekly salary: "; cout << (*temp_employee).details_contract.hourly_rate * (*temp_employee).details_contract.hours_per_week;
}


void demo_for_search(Employee employee_arr[], const int MAX, Employee * ptr_first, Employee * ptr_last) {
	int j;
	cout << "Press 1 to search by Pointer and enter 2 for search by Reference\n";
	cout << "******************************\n";
	cout << "Enter the value: ";
	cin >> j;
	cout << endl;
	switch (j) {
	case 1:
		search_by_pointer(ptr_first, ptr_last);
		break;
	case 2:
		search_by_reference(ptr_first, MAX);
		break;
	default:
		break;
	}

}

void swap_by_ptr(Employee  * pointer1, Employee * pointer2)
{
	Employee temp;
	temp = *pointer1;
	*pointer1 = *pointer2;
	*pointer2 = temp;
}

void sort_employee_by_pointer(Employee *ptr_first, Employee *ptr_last)
{
	for (Employee * index1 = ptr_first; index1 <= ptr_last; index1++)
	{
		for (Employee * index2 = index1 + 1; index2 <= ptr_last; index2++)
		{
			if (index1->SIN_number > index2->SIN_number)
			{
				swap_by_ptr(index1, index2);
			}
		}
	}
}