#include<iostream>

using namespace std;

class Building 
{
public:
	Building()
	{}
	Building(char* pname)
	{
		sprintf(name, pname);
	}
	
	const char* GetName() const
	{
		return name;
	}
protected:
	char name[64];
};

class House : public Building
{
public:
	House(char* pname, int floors, int inhabitants, int servants) : floors(floors), inhabitants(inhabitants), servants(servants)
	{
		sprintf(name, pname);
	}

	void printHouse()
	{
		cout << "--" << name << "--" << endl;
		cout << "Num. of floors:" <<  floors << endl;
		cout << "Num. of inhabitants:" << inhabitants << endl;
		cout << "Num. of floors:" << floors << endl;
	}

private:
	int floors;
	int inhabitants;
	int servants;
}

class House : public Building
{
public:
	House(char* pname, int floors, int inhabitants, int servants) : floors(floors), inhabitants(inhabitants), servants(servants)
	{
		sprintf(name, pname);
	}

	void printHouse()
	{
		cout << "--" << name << "--" << endl;
		cout << "Num. of floors:" << floors << endl;
		cout << "Num. of inhabitants:" << inhabitants << endl;
		cout << "Num. of floors:" << floors << endl;
	}

private:
	int floors;
	int inhabitants;
	int servants;
};;