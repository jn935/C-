using namespace std;
#include <cstring>
#include <iostream>
struct book
{
	
	char bname[20];
	int id;
	char author[20];
              int price;
	book()//default constructor
	{
		cout<<"\n default constructor called";
		strcpy(bname,"Not given");
		this->id=0;
		strcpy(author,"Not given");   
                               this->price=0;
                          
	}
	
	person(char* nm,int i,char* ct,int j)//parameterised constructor
	{
		cout<<"\n default constructor called";
		strcpy(bname,nm);
		this->id = i;
		strcpy(author,ct);
                              this->price = j;
                          }
	void setBname(char* nm)
	{
		strcpy(this->bname,nm);
	}
	
    void setId(int i)
	{
		this -> id = i;
	}	
	
	void setAuthor(char* ct)
	{
		strcpy(this->author, ct); 
	}
             void setPrice(int j)
	{
		this->price=j;
	}

	char* getBname()
	{
		return this->bame;
	}
	int getId()
	{
		return this->id;
	}
	char* getAuthor()
	{
		return this->author;
	}
              int getPrice()
	{
		return this->price;
	}

	void display()
	{
		cout<<"\n Bname is "  <<this-> bname;
		cout<<"\n Id is"  << this-> id;
		cout<<"\n Author is" <<this-> author;
                           cout<<"\n Price is" <<this-> price;

                           
                            
	}
};

int main()
{
	book b1;
	b1.display();
	cout<<"\n";
	book b2("abc",25,"def",220);
		b2.display();
	cout<<"\n\n\n";
	
	
}
