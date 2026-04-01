#include<iostream>
using namespace std;
class A{
private:
string name,city;
int age,marks,roll,number;
public:
void info(string n,c,int a,m,r,nu){
name=n,city=c;
age=a,marks=m,roll=r,number=n;
}
};
class B:public A{
void realinfo(){
cout<<"name="<<name<<endl<<"city="<<city<<endl<<"age="<<age<<endl<<"marks="<<marks<<endl<<"roll="<<roll<<endl<<"number="<<number<<endl;