#include <iostream>
#include <string>
using namespace std;

// class prof{
//   private:
//     string name;
//     int age;
//   public:
//     prof(string n, int a){
//       name = n;
//       age = a;
//     }
//     string getName(){
//       return name;
//     }
//     int getAge(){
//       return age;
//     }
//     void setName(string n){
//       name = n;
//     }
//     void setAge(int a){
//       age = a;
//     }
// };
//
// class course{
//   private:
//     prof* cprof;
//     string courseName;
//   public:
//     course(prof* cp, string name){
//       cprof = cp;
//       courseName = name;
//     }
//     string getCourseName(){
//       return courseName;
//     }
//     void getInfo(){
//       cout<<cprof->getName()<<endl;
//       cout<<cprof->getAge()<<endl;
//       cout<<this->getCourseName()<<endl;
//     }
// };

int main(){

  // prof p1("Ahmed Hamda",40);
  // cout<<p1.getName()<<endl;
  // cout<<p1.getAge()<<endl;
  // p1.setName("Elahbal");
  // cout<<p1.getName()<<endl;
  //
  //
  // course c1(&p1, "OOP Course");
  // cout<<c1.cprof->getName()<<endl;

  int * p = new int;
  *p = 10;
  cout<<*p<<endl;

  delete p;
  *p = 20;
  cout<<*p;

}
