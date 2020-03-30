#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,temp=1,largest=0;
    cin>>n;
    while(n>0){
        temp=n%10;
        if(temp>largest){
            largest=temp;
        }
        n=n/10;
    }
    cout<<largest;
    return 0;
}