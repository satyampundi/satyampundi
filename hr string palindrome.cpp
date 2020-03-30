
#include <iostream>
#include<string>
using namespace std;

class String{
  string s;
  public:
  String(string t){
    s = t;
  }
  bool palindrome();
};

//Complete the function below
bool String::palindrome(){
  //Write your code below
   int low = 0;
    int high = s.length() - 1;
    
    while (low < high)
    {
        // if mismatch happens
        if (s[low] != s[high])
            return false;

        low++;
        high--;
    }
    
    return true;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    String object(s);
    if(object.palindrome())
      cout<<"Yes"<<endl;
    else 
      cout<<"No"<<endl;
    return 0;
}
