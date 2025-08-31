#include <iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter a String Value: ";
    cin>>str;
    string*str1;
    str1=&str;
    cout<<*str1;
}