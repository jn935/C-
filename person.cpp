using namespace std;
#include <cstring>
#include <iostream>
struct person
{
	
	char name[20];
	int age;
	char city[20];
	person()//default constructor
	{
		cout<<"\n default constructor called";
		strcpy(name,"Not given");
		this->age=0;
		strcpy(city,"Not given");
	}
	
	person(char* nm,int i,char* ct)//parameterised constructor
	{
		cout<<"\n default constructor called";
		strcpy(name,nm);
		this->age = i;
		strcpy(city,ct);
	}
	void setName(char* nm)
	{
		strcpy(this->name,nm);
	}
	
    void setAge(int i)
	{
		this -> age = i;
	}	
	
	void setCity(char* ct)
	{
		strcpy(this->city, ct); 
	}
	char* getName()
	{
		return this->name;
	}
	int getAge()
	{
		return this->age;
	}
	char* getCity()
	{
		return this->city;
	}
	void display()
	{
		cout<<"\n Name is "  <<this-> name;
		cout<<"\n Age is"  << this-> age;
		cout<<"\n City is" <<this-> city;
	}
};
/*
int main()
{
	person p1;
	p1.display();
	cout<<"\n";
	person p2("Nikhil",25,"pune");
		p2.display();
	cout<<"\n\n\n";
	
	
}*/






