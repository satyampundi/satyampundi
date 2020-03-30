#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> vec;
    int x;
    cin>>x;
    for(int i=0;i<x;i++)//n
    {
        int y;
        cin>>y;
        vec.push_back(y);//log n
    }
    int t;
    cin>>t;
    long a;
    while(t!=0)//n
    {
        cin>>a;
        vector<int>::iterator lower=lower_bound(vec.begin(),vec.end(),a);//logn
        vector<int>::iterator it =find(vec.begin(),vec.end(),a);//logn
        if(it!=vec.end())//log n
        {
           cout << "Yes" <<" ";
           cout<<distance(vec.begin(),it)+1<<endl;//logn
           }
        else{
           cout << "No" <<" ";
           cout<<distance(vec.begin(),lower)+1<<endl;//logn
        }       
        --t;
    }

    return 0;
}
