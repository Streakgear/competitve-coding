#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int q;
	cin>>q;
	int* a =new int[q];
	for(int i=0;i<q;i++)
		cin>>a[i];
	sort(a,a+q);
	for(int i=0;i<q;i++)
		cout<<a[i]<<" ";
}