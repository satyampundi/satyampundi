#include<iostream>//euclid's algorithm for gcd
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inputf.txt","r",stdin);
	freopen("outputf.txt","w",stdout);
	#endif
	int m,n;
	cin>>m>>n;
	while(m%n!=0) {
	    int mt=n;
	    int nt=m%n;
	    m=mt;
	    n=nt;
	}
	cout<<n;
	return 0;//int r=m%n; m=n;n=r;
}