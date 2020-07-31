#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, fibo[100], sum=0, i;
	
	cin>>n;
	
	i = -1;
	
	while(sum <= n)
	{
		i++;
		
		if(i<=1)
			fibo[i] = 1;
		else fibo[i] = fibo[i-1] + fibo[i-2];
		
		sum += fibo[i];
		
		if(sum <= n)
			cout<<fibo[i]<<' ';
	}
	
	cout<<endl;
	
	cout<<sum - fibo[i]<<endl;
	
	
}
