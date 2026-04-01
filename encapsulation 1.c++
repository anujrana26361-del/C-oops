#include<iostream>
using namespace std;
class A{
private:
int m;
public:
void setmarks(int m){
this->m=m;
}
void getmarks(){
cout<<"m="<<m<<endl;
}
};
int main(){
A a;
a.setmarks(30);
a.getmarks();
return 0;
}