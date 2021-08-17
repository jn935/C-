#include<iostream.h>
#include<conio.h>
class date
{
int dd,mm,yy;
public:
date(int,int,int);
void show();
};
date::date(int d,int m,int y)
{
dd=d;
mm=m;
yy=y;
}
void date::show()
{
cout< switch(mm)
{
case 1 :cout<<" Jan / ";
break;
case 2 :cout<<" Feb / ";
break;
case 3 :cout<<" Mar / ";
break;
case 4 :cout<<" Apr / ";
break;
case 5 :cout<<" May / ";
break;
case 6 :cout<<" Jun / ";
break;
case 7 :cout<<" Jul / ";
break;
case 8 :cout<<" Aug / ";
break;
case 9 :cout<<" Sep / ";
break;
case 10 :cout<<" Oct / ";
break;
case 11 :cout<<" Nov / ";
break;
case 12 :cout<<" Dec / ";
break;
}
cout< }
void main()
{
int dd,mm,yy;
clrscr();
cout<<"\n Enter date : ";
cout<<"\n Day : ";
cin>>dd;
cout<<"\n Month : ";
cin>>mm;
cout<<"\n Year : ";
cin>>yy;
if(mm>12)
{
cout<<"\n Invalid Month entered...";
}
else
{
date d(dd,mm,yy);
d.show();
}
getch();
}
