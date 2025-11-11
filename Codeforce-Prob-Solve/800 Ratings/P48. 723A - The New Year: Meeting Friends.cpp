#include <bits/stdc++.h>
using namespace std;
int main() 
{
	vector<int> a(3);
	cin>>a[0]>>a[1]>>a[2];
	sort(a.begin(), a.end());
	int td = a[2] - a[0];
	cout<<td<<endl;
	return 0;
}
