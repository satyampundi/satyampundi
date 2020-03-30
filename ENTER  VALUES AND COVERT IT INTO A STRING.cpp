#include<iostream>
#include <sstream>
using namespace std;
class Student
{
	int age,standard;
	string firstname,lastname;
  public:
  Student(){
  	cin>>age>>standard>>firstname>>lastname;
  }
  int get_age(){
  	return age;
  }
  int get_standard(){return standard;}
  string get_first_name(){return firstname;}
  string get_last_name(){return lastname;}
  string tostring(){
  	string str=to_string(age)+","+firstname+","+lastname+","+to_string(standard);
	return str;
 }
};
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inputf.txt","r",stdin);
	freopen("outputf.txt","w",stdout);
	#endif
	Student a;
	cout << a.get_age() << "\n";
    cout << a.get_last_name() << ", " << a.get_first_name() << "\n";
    cout << a.get_standard() << "\n";
    cout << "\n";
    cout << a.tostring();
	return 0;
}