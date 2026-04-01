#include<iostream>
using namespace std;
class student{
private:
string name;
int age;
int roll;
public:
void studentname(string n,int a,int r){
name=n;
age=a;
roll=r;
}
void studentinfo(){
cout<<"name="<<name<<endl<<"age="<<age<<endl<<"roll="<<roll;
}
};
int main(){
student A;
A.studentname("Anuj",23,27);
A.studentinfo();
return 0;
}