#include<iostream>
using namespace std;
void Voting()
{
	int age;
	cout<<"To check if you're eligible to vote or not:";
	cout<<"\nEnter your age:";
	cin>>age;
	if(age>=18)
	{
		cout<<"You are eligible to vote!!";
	}
	else
	{
		cout<<"You are not eligible to vote!!";
		cout<<"\nWait for "<<18-age<<" years to vote.";
	}
}
int main()
{
	Voting();
	return 0;
}
