//volume of cuboid
#include <iostream>
using namespace std;

class cube{
    public:
    void input(){
        
        cout<<"Enter length of cube"<<endl;
        cin>>a;
        cout<<"Enter breath  of cube"<<endl;
        cin>>b;
        cout<<"Enter height of cube"<<endl;
        cin>>c;
    }
    void calculation(){
        
        cal=a*b*c;
        
    }
    
    void output(){
        cout<<"volume of cube ";
        cout<<cal;
    }
    int cal;
    int a,b,c;
    
};

int main() {
    cube myCube;
    myCube.input();
    myCube.calculation();
    myCube.output();

    return 0;
}

/*Enter length of cube
1
Enter breath  of cube
2
Enter height of cube
3
volume of cube 6 */
