//overload << ' >> on student class

#include<iostream>

using namespace std;
class student
{
	int id;
	int marks;
	char name[50];
	public:
		friend void operator>>(istream &y,student &z)
		{
			y>>z.id;
			y>>z.name;
			y>>z.marks;
		}
		friend void operator<<(ostream &y, student&z)
		{
			y<<"\n ID:"<<z.id;
			y<<"\n NAME:"<<z.name;
			y<<"\n MARKS:"<<z.marks;
		}
};

int main()
{
	student D;
	cin>>D;
	cout<<D;
	
	return 0;
}