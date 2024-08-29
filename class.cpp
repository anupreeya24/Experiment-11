
#include <iostream>
using namespace std;
class student{
    public:
       string name;
       float age;
       string branch;
       float result ;
       int year;
   };

int main() {
   student s1;
       s1.name ="Anupreeya";
       s1.age =  19;
       s1.branch = "ENTC";
       s1.result = 8.13 ;
       s1.year = 2023;
       cout<<s1.name<<endl;
       cout<<s1.age<<endl;
       cout<<s1.branch<<endl;
       cout<<s1.result<<endl;
       cout<<s1.year<<endl;
    student s2;
       s2.name ="Aditya";
       s2.age =  19;
       s2.branch = "ENTC";
       s2.result = 7.8 ;
       s2.year = 2023;
       cout<<s2.name<<endl;
       cout<<s2.age<<endl;
       cout<<s2.branch<<endl;
       cout<<s2.result<<endl;
       cout<<s2.year<<endl;
   
  
  
   

    return 0;
}

/*Anupreeya
19
ENTC
8.13
2023
Aditya
19
ENTC
7.8
2023*/
