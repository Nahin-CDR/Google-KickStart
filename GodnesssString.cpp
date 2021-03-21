#include<bits/stdc++.h>
using namespace std;


//Solver : Nahin the Coder
//Date   : 21-03-2021



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
	int no = 1;
	int test;
	cin>>test;
	while(test--)
	{
		int counter = 0;
		int n,k;
		cin>>n>>k;
		string str;
		cin>>str;
		int left = 0;
		int right = n-1;
		 
		for(int i=0; i<n/2; i++)
		{
			if(str[i] != str[n-i-1])
			{
				counter++;
			}
		}
		cout<<"Case #"<<no<<": "<<abs(k-counter)<<endl;
		no++;
	}
	
	
	
	
	return 0;
}
