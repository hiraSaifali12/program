#include <iostream>
using namespace std;
void ferToCel(float f){
//cout<<"enter value"<<endl;
   float c;
    c =  (f-32)*5.0/9;
    cout<<f<<" fahrenheit to celsius is = "<<c;
}
void celToFer(float c){
float f;
    f =  (c+32)*9.0/5;

    cout<<c<<"celsius to fahrenheit is = "<<f;
}
int main(){
    float c,f;
    cout<<"enter value"<<endl;
    cin>>f;
   
    ferToCel(f);
    cout<<endl;
    cin>>c;
    celToFer(c);

    return 0;
}