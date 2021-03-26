#include <iostream>
  using namespace std;
  int main()
  {
  	int n;
  	cin>>n;
  	int a=n/2 +1;
  	for(int i=1;i<=a;i++)
  	{
  		for(int j=1;j<=a-i;j++)
  		{
  			cout<<" ";
  		}
  		for(int k=1;k<=i;k++)
  		{
  			cout<<"*";

  		}
  		cout<<endl;
  	}
  	for(int i=1;i<a;i++)
  	{
  		for(int k=1;k<=i;k++)
  		{
  			cout<<" ";

  		}
  		for(int j=1;j<=a-i;j++)
  		{
  			cout<<"*";
  		}
  		
  		cout<<endl;
  	}
  	}
