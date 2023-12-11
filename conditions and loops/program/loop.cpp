#include <iostream>
using namespace std;
void loop(int n){
     for (int i = 1;i<=n;i++){
        cout<<i<<" ";

    }
    cout<<endl;
}

int main(){
    int n ;
    cout<<"enter the value";
    cin>>n;
   /*
    for (int i = 1;i<=n;i++){
        cout<<i<<" ";

    }
    cout<<endl; */
    loop(n);


    return 0;
}