#include<iostream>
using namespace std;
class student{
public:
string name;
int age,roll;

student(string n,int a,int r){
name=n;
age=a;
roll=r;
}
};
int main(){
student s1("anuj",23,25);
cout<<s1.name<<endl<<s1.age<<endl<<s1.roll;
return 0;
}
