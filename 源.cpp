#include<iostream>
using namespace std;
int n=0;
struct student
{
	char name[20];
	long number;
	char clas[20];
	int classgrade;
}students [100];
void list()
{
			cout<<"ѧ������"<<"  "<<"ѧ��ѧ��"<<"  "<<"ѧ����Ŀ"<<"  "<<"ѧ���ɼ�"<<endl;
	int i;
	for (i=0;i<n;i++)
	{

		cout<<students[i].name<<"  "<<students[i].number<<"  "<<students[i].clas<<"  "<<students[i].classgrade<<endl;
	}
}
void in()
{
	cout<<"ѧ������"<<"  "<<"ѧ��ѧ��"<<"  "<<"ѧ����Ŀ"<<endl;
	cin>>students[n].name>>students[n].number>>students[n].clas;
	n++;
}
void out()
{
	int i,l;
	cout<<"����ѧ��ѧ��"<<endl;
	cin>>l;
	for(i=0;i<n;i++)
	{
		if(students[i].number==l)
			break;
		if(i==n)
			cout<<"error"<<endl;
		else
			{
				for(;i<n;i++)
				{
					students[i]=students[i+1];
				}
		}
	}
}
void grade()
{
	int i,s,g=1;
	cout<<"����ѧ��"<<endl;
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(students[i].number==s)
			break;
	}
	do
	{
		int l;
		cin>>students[i].classgrade;
		cout<<"�Ƿ�������룬1���ǣ�2����"<<endl;
		cin>>l;
		if(l==2)
			break;
		else 
			i++;
		
	}
	while(1);
}
int main()
{
	while(1)
{
	int action;
	cout<<"1���鿴ѧ������"<<endl;
	cout<<"2;ѡ�����ѧ��"<<endl;
	cout<<"3;��ѡɾ��"<<endl;
	cout<<"4;¼��ɼ�"<<endl;
	cout<<"5;�˳�����"<<endl;
	cin>>action;
	switch (action)
	{
 case 1:list();
		  break;
case 2:in();
		  break;
case 3:out();
		  break;
case 4:grade();
		  break;
case 5:return 0;
		  break;
default:
	cout<<"error"<<endl;
	break;
	}
}
}