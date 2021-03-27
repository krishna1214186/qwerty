#include <iostream>
#include <cmath>
using namespace std;
bool  prime(int num)
{
	for(int i=2;i<=sqrt(num);i++)
	{
if(num%i==0)
	return false;
	}
	return true;
}
int main()
{
cout<<"enter the two given numbers";
int a,b;
cin>>a>>b;
cout<<"the prime no.s are:"<<endl;
for(int i=a;i<=b;i++)
{
	if(prime(i)==true)
		cout<<i<<endl;
}
}
