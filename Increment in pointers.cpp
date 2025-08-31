#include <iostream>
using namespace std;

int main(){
    int x=234;
    int*x1;
    x1=&x;
    cout<<"Integer Address Before increment: "<<x1<<endl;
    x1+=1;
    cout<<"Integer Address After increment: "<<x1<<endl;
    float y=3.2;
    float*y1;
    y1=&y;
    cout<<"Float Address Before increment: "<<y1<<endl;
    y1+=1;
    cout<<"Float After increment: "<<y1<<endl;
    double z=1233456;
    double*z1;
    z1=&z;
    cout<<"Double Address Before increment: "<<z1<<endl;
    z1+=1;
    cout<<"Double Address After increment: "<<z1<<endl;
    bool t=true;
    bool*t1;
    t1=&t;
    cout<<"Boolean Address Before increment: "<<t1<<endl;
    t1+=1;
    cout<<" Boolean Address Before increment: "<<t1<<endl;

}
/*
Output:
Integer Address Before increment: 0x5ffe5c
Integer Address After increment: 0x5ffe60
Float Address Before increment: 0x5ffe58
Float After increment: 0x5ffe5c
Double Address Before increment: 0x5ffe50
Double Address After increment: 0x5ffe58
Boolean Address Before increment: 0x5ffe4f
Boolean Address Before increment: 0x5ffe50
*/