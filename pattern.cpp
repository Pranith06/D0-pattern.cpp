#include<iostream>
using namespace std;
int main()
{
int n,num;
cout<<"enter number :";
cin>>num;
cout<<"enter the nth number";
cin>>n;
int count=0,temp=0;
for(int i=1;i<=num; i++)
{
if(num%i==0)
{
count++;
if(count==n)
{
temp=i;	
	}	
}
}
cout<<"number of factors="<<count;
cout<<"nth factor of"<<n,num,temp;
}
