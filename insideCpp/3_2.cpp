#include <iostream>
<<<<<<< HEAD
#include <stdio.h>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std; 

class A
{
public:
	~A()
	{
		cout << "deconstruct A" << endl;
	}
	void virtual exec() = 0;

private:

};

class B : public A
{
public:
	~B()
	{
		cout << "deconstruct B" << endl;
	}

	void exec() {}

private:

};


int main()
{
	A *b = new B;

	delete b;

	system("pause");

=======
#include <vector>
#include <map>
using namespace std; 

void calcPath(vector<int> &sysTime, multimap<int, int> &Map, int MaxTime)
{

}

int main()
{
	int numSystem, munRely;
	cin >> numSystem >> munRely;

	vector<int> sysTime;
	while (numSystem--)
	{
		int time;
		cin >> time;
		sysTime.push_back(time);
	}
	multimap<int, int> Map;
	while (munRely--)
	{
		int father, son;
		cin >> father >> son;
		Map.insert(make_pair(father, son));
	}

	return 0;
>>>>>>> cdd867367304972dff39d13971074b530e34eafb
}