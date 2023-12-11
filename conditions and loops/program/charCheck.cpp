#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter thex charecter value"<<endl;
    cin>>ch;
    if (ch>= 'a' && ch<= 'z'){
        cout<<"value is Lower case";
    }
    else if (ch>= 'A' && ch <='Z'){
        cout<<"value is Upper case";
    }
    else if (ch>= '0' && ch<= '9'){
        cout<<"value is Numeric";
    }else{
        cout<<"value is not char type";
    }
    return 0;

}