#include "printer.h"

Printer::Printer()
{
	priority = 0;
	name = " ";
}

Printer::Printer(int priority, string name)
{
	this->priority = priority;
	this->name = name;
}

Printer::~Printer()
{
}

int Printer::getPriority()
{
	return priority;
}

string Printer::getName()
{
	return name;
}

void Printer::setPriority(int priority)
{
	this->priority = priority;
}

void Printer::setName(string name)
{
	this->name = name;
}

int main(){
	int n;
	cout << "Enter the number of clients: ";
	cin >> n;
	Printer* arr = new Printer[n];
	for (int i = 0; i < n; i++)
	{
		int p;
		string name;
		cout << "Enter the priority of the " << i + 1 << " client: ";
		cin >> p;
		cout << "Enter the name of the " << i + 1 << " client: ";
		cin >> name;
		arr[i].setPriority(p);
		arr[i].setName(name);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j].getPriority() < arr[j + 1].getPriority())
			{
				Printer temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "The order of printing: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i].getName() << endl;
	}
	delete[] arr;
	return 0;
}