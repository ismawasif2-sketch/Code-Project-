#include<iostream>
using namespace std;
int handShake(int n)
{
if( n <= 2)
return 1;
else
return handShake(n-1)+(n-1);
}
int main()
{
	int n;
	cout<<"enter number of people"<<endl;
	cin>>n;
handShake(n);
	cout<<"total number of handShake"<<handShake(n)<<endl;
}

