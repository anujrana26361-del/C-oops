#include<iostream>
using namespace std;
class car{
public:
string brand;
int module,year;
car(string n,int a,int y){
brand=n,module=a,year=y;
}
};
int main(){
car carobj1("BMW",23,1999);
car carobj2("mustang",25,1989);
//print
cout<<"car="<<carobj1.brand<<endl<<carobj1.module<<endl<<carobj1.year<<endl;
cout<<"car2="<<carobj2.brand<<endl<<carobj2.module<<endl<<carobj2.year;

return 0;
}