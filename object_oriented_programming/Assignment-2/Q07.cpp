//Find the Smallest Marks among 3 classes DCST, DME, DEE. (Marks mark member in said classes)
#include<iostream>
using namespace std;

class DCST;
class DME;
class DEE;

class DCST
{
	private:
		int mark;
	public:
		void getvalue ()
		{
			cout << "Enter Marks for DCST: ";
			cin >> mark;
		}
		friend int smallest (DCST, DME, DEE);
};

class DME
{
	private:
		int mark;
	public:
		void getvalue ()
		{
			cout << "Enter Marks for DME: ";
			cin >> mark;
		}
		friend int smallest(DCST, DME, DEE);
};

class DEE
{
	private:
		int mark;
	public:
		void getvalue ()
		{
			cout << "Enter Marks for DEE: ";
			cin >> mark;
		}
		friend int smallest (DCST, DME, DEE);
};

int smallest(DCST c, DME m, DEE e)
{
	int temp;
	temp = c.mark;
	if(m.mark < temp) 
		temp = m.mark;
	if(e.mark < temp) 
		temp = e.mark;
	return temp;
}

int main()
{
	DCST c;
	DME m;
	DEE e;

	c.getvalue ();
	m.getvalue ();
	e.getvalue ();

	cout<<"Smallest Marks among the classes: " << smallest (c,m,e);
	return 0;
}
