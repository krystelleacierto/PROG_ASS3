#include <iostream>
using namespace std;
int main()
{
	float km,php,pay,change;
	cout<<"TAXI METER CALCULATOR"<<endl;
	cout<<"ENTER NUMBER OF KILOMETER:"<<endl;
	cin>>km;

	if(km<0)
	{ km=-1*km;
	}


	if ((km>=0)&&(km<=5))
	{
		cout<<"YOUR CHARGE IS 50 PHP "<<endl;
	}
	else
	{ km = km-5;
	  php=50+(0.3*km);
	  cout<<"YOUR CHARGE IS: "<<php<<endl;
	}

	cout<<"ENTER PAYMENT: "<<endl;
	cin>>pay;
	change=pay-php;

	if(change<0)
	{
		cout<<"INSUFFICIENT FUND"<<endl;
	}
	else
	{
		cout<<"CHANGE: "<<change<<endl;
	}

	return 0;
	}
