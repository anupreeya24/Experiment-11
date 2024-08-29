#include <iostream>
using namespace std;

class student{
    public:
       void mystudentyear() ;
   };

void student::mystudentyear(){
    cout<<"hello, i m in 2nd year." ;
}
int main(){
    student myobj;
    myobj.mystudentyear();
    return 0;
} 
/*hello, i m in 2nd year.*/
