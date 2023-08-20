#include<iostream>
using namespace std;

int main()
{
	int fn,sn;
	char op;
	ok:
	cout<<"Enter first number :";
	cin>>fn;
	cout<<"Enter second number :";
	cin>>sn;
	cout<<"Enter operator (+,-,*,/):";
	cin>>op;
	if(op == '+')
	{
		cout<<fn+sn<<endl;
		goto ok;
	}
	else if(op == '-')
	{
			cout<<fn-sn<<endl;
		goto ok;
	}
	else if(op == '*')
	{
		cout<<fn*sn<<endl;
		goto ok;
	}
	else if(op == '/')
	{
		if(sn!=0)
		{
			cout<<fn/sn<<endl;
			goto ok;
		}
		else
		{
			cout<<"Not Possible!\n";
			goto ok;
		}
	}
	else{
		cout<<"Invalid Operator!!\n";
		goto ok;
	}
	
}
