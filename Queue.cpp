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

void Person::setTuoi(int Tuoi)
{
	tuoi = Tuoi;
}

string Person::getTen()
{
	return ten;
}

int Person::getTuoi()
{
	return tuoi;
}

template<class T> class Queue
{
	private:
		vector<T> v;
	public:
		static int kichThuoc;
		void Push(T var)
		{
			v.push_back(var);
		}
		void Pop()
		{
			for(int i = 0; i<v.size()-1; i++)
			{
				for(int j = 0; j<v.size(); j++)
				{
					T a=v[i];
					v[i]=v[j];
					v[j]=a;
				}
			}
			v.pop_back();
		}
		void setV(vector<T> V)
		{
			for(int i = 0; i<V.size(); i++)
			{
				T a;
				a=V[i];
				v.push_back(a);
			}
		}
		vector<T> getV()
		{	
			return v;
		}
		int getKichThuoc()
		{
			return kichThuoc;
		}
};

template<class T> class CheckQueue: public Queue<T>
{
	public:
		void Push(T var)
		{
			if(Queue<T>::getV().size()>=Queue<T>::getKichThuoc())
			{
				cout<<"loi. queue day!!!!";
				exit(1);
			}
			Queue<T>::Push(var);
		}	
		void Pop()
		{
			if(Queue<T>::getV().empty()==true)
			{
				cout<<"Loi. queue rong!!!!";
				exit(1);
			}
			Queue<T>::Pop();
		}
}; 
template<class T> int Queue<T>::kichThuoc=2;
int main()
{
	Person a, b, c;
	a.setTen("Trung hieu");
	a.setTuoi(20);
	b.setTen("Anh Tu");
	b.setTuoi(19);
	c.setTen("chon truong");
	c.setTuoi(21);
	CheckQueue<Person> e;
	e.Push(a);
	e.Push(b);
	e.Push(c);
	e.Pop();
	e.Pop();
	e.Pop();
}

