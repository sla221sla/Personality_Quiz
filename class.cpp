#include<iostream.h>
#include<fstream.h>

class participant
{
public:
char name[100];
 char type[4];
 int a[25];
 char study[4];
}p;

void main()
{
ofstream off("SR.dat",ios::app);
cout<<"enter name";
cin>>p.name;
cout<<"enter type";
cin>>p.type;
off.write((char*)&p,sizeof(p));
}




