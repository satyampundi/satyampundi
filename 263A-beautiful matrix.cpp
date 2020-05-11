#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int x=5;

int main(){
	bool y;
	vector<vector<bool>> arr(x,vector<bool>(x));
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>y;
			arr[i][j]=y;
		}
	}
	
	int count=0,a,b;
	for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	if(arr[i][j]==1)
	{
		a=i;b=j;
		break;
	}
   }
  }
    while(a!=2){
	if(a<2){count++; a++;}
	if(a>2){count++; a--;}
    }
	while(b!=2){
	if(b<2){count++; b++;}
	if(b>2){count++; b--;}
	}
cout<<count;
	
	
	
	return 0;

}
