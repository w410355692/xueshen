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
			cout<<"学生姓名"<<"  "<<"学生学号"<<"  "<<"学生科目"<<"  "<<"学生成绩"<<endl;
	int i;
	for (i=0;i<n;i++)
	{

		cout<<students[i].name<<"  "<<students[i].number<<"  "<<students[i].clas<<"  "<<students[i].classgrade<<endl;
	}
}
void in()
{
	cout<<"学生姓名"<<"  "<<"学生学号"<<"  "<<"学生科目"<<endl;
	cin>>students[n].name>>students[n].number>>students[n].clas;
	n++;
}
void out()
{
	int i,l;
	cout<<"输入学生学号"<<endl;
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
	cout<<"输入学号"<<endl;
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
		cout<<"是否继续输入，1：是，2：否"<<endl;
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
	cout<<"1：查看学生名单"<<endl;
	cout<<"2;选课添加学生"<<endl;
	cout<<"3;退选删除"<<endl;
	cout<<"4;录入成绩"<<endl;
	cout<<"5;退出程序"<<endl;
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