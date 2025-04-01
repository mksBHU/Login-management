#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class User
{
private:
	string name, id, mobile, gender, dob, email, password;
	int age;
	User *next;

public:
	void registration();
	void showDetails();
	void search();
	User create();
};

void User ::registration()
{
	User *head;
	User *newNode = new User;
	newNode->next = head;
	head = newNode;
	cout << "enter the full name:" << endl;
	cin >> name;
	cout << "enter your gender:" << endl;
	cin >> gender;
	cout << "enter your Date of Birth(dd/mm/yyyy):" << endl;
	cin >> dob;
	cout << "enter your mobile number:" << endl;
	cin >> mobile;
	cout << "enter your email id:" << endl;
	cin >> email;
	cout << "create a password(must use alphanumeric with a special character):" << endl;
l:
	cin >> password;
	if (size(password) >= 8)
		cout << "registration successful" << endl;
	else
	{
		cout << "create a strong password" << endl;
		goto l;
	}
}

void User ::showDetails()
{
	cout << "NAME\t\t\tGENDER\tDOB\tAGE\tMOBILE NO.\t\tEMAIL\t\t\t" << endl;
	cout << name << "\t\t\t";
	cout << gender << "\t";
	cout << dob << "\t";
	cout << age << "\t";
	cout << mobile << "\t\t";
	cout << email << "\t\t\t";
}

int main()
{

	int choice;
	while (1)
	{
		system("cls");
		cout << "1. Registration (for new user)\n2. Login(already registred user)\n3. Show all users\n4. Search an User\n5. Exit\n";
		cout << "enter your choice:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			p->registration();
			break;
		}
	}
}