#include<iostream>
using namespace std;
int main()
{
	int n,i,j,count=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
	if(a[i]==0)
	{
	 for(j=i+1;j<n;j++)
	 {
	 	if(a[j]!=1)
	 	{
	 		if(a[i]==a[j])
	 		{
	 			count++;
			}
		}
		else
		break;
	 }
}
    }
    int t=(n*(n-1))/2;
	cout<<count<<t;
}
