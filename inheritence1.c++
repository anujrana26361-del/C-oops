#include<iostream>
using namespace std;
class A{
protected:
string name,city;
int age,marks,roll,number;
public:
void info(string n,string c,int a,int m,int r,int nu){
name=n,city=c;
age=a,marks=m,roll=r,number=nu;
}
};
class B:public A{
public:
void realinfo(){
cout<<"name="<<name<<endl<<"city="<<city<<endl<<"age="<<age<<endl<<"marks="<<marks<<endl<<"roll="<<roll<<endl<<"number="<<number<<endl;
}
};
int main(){
B obj;
obj.info("Anuj","kutri",23,45,56,80);
obj.realinfo();
return 0;
}