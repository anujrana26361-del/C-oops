#include<iostream>
using namespace std;
class student{
public:
string name;
int age,marks;
student(){
}
student(string n,int a,int m){
name=n;
age=a;
marks=m;
}
};
int main(){
student s1("anuj",23,345);
student s2;
s2.name="yogesh";
s2.age=24;
s2.marks=342;
cout<<"student1="<<s1.name<<endl<<s1.age<<endl<<s1.marks<<endl;
cout<<"student2="<<s2.name<<endl<<s2.age<<endl<<s2.marks;
return 0;
}