#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person
{
	private:
		string ten;
		int tuoi;
	public:
		void setTen(string Ten);
		void setTuoi(int Tuoi);
		string getTen();
		int getTuoi();	
};

void Person::setTen(string Ten)
{
	ten = Ten;
}

string Person::getTen()
{
	return ten;	
} 

void Person::setTuoi(int Tuoi)
{
	tuoi = Tuoi;
}

int Person::getTuoi()
{
	return tuoi;
}

template<class T>
class Stack
{
	private:
		vector<T> v;
	public:
		static int kichThuoc;
		void Push(T var);
		void Pop();	
		void setV(vector<T> V);
		vector<T> getV();
		int getKichtThuoc();
};
template<class T>
void Stack<T>::Push(T var)
{
	v.push_back(var);
}
template<class T>
void Stack<T>::Pop()
{
	v.pop_back();
}
template<class T>
void Stack<T>::setV(vector<T> V)
{
	for(int i = 0; i < V.size(); i++)
	{
		T a;
		a = V[i];
		v.push_back(a);
	}
}
template<class T>
vector<T> Stack<T>::getV()
{
	return v;
}
template<class T>
int Stack<T>::getKichtThuoc()
{
	return kichThuoc;
}
template<class T>
class CheckStack: public Stack<T>
{
	public:
		void Push(T var);
		void Pop();
};
template<class T>
void CheckStack<T>::Push(T var)
{
	if(Stack<T>::getV().size() >= Stack<T>::getKichtThuoc()) cout<<"\n\nLoi. Stack da day.";
	else 
	{
		Stack<T>::Push(var);
	}
}
template<class T>
void CheckStack<T>::Pop()
{
	if(Stack<T>::getV().empty()==true)
	{
		cout<<"\n\nloi!!!!!!";
		return;
	}
	Stack<T>::Pop();
}
template<class T>
int Stack<T>::kichThuoc = 2;
int main()
{
	Person a, b, c;
	a.setTen("Trung hieu");
	a.setTuoi(20);
	b.setTen("duy tien ");
	b.setTuoi(19);
	c.setTen("tran tien");
	c.setTuoi(21);
	CheckStack<Person> e;
	e.Push(a);
	e.Push(b);
	e.Push(c);
	e.Pop();
	e.Pop();
	e.Pop();
	return 0;
	
}



