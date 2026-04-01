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
student(int a,int m,string n){
name=n;
marks=m;
age=a;
}
student(int m,string n,int a){
name=n;
marks=m;
age=a;
}

};
int main(){
student s1("raghav",23,456);
student s2;
s2.name="aditya";
s2.age=24;
s2.marks=567;
student s3(23,34,"kamal");
student s4(34,"yogesh",234);
student s5(s3);
s5.name="paras";
cout<<"studnet1="<<s1.name<<endl<<s1.age<<endl<<s1.marks<<endl;
cout<<"student2="<<s2.name<<endl<<s2.age<<endl<<s2.marks<<endl;
cout<<"student3="<<s3.name<<endl<<s3.age<<endl<<s3.marks<<endl;
cout<<"student4="<<s4.name<<endl<<s4.age<<endl<<s4.marks<<endl;
cout<<"student5="<<s5.name<<endl<<s5.age<<endl<<s5.marks<<endl;
return 0;
}