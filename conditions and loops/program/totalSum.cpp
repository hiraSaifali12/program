#include <iostream>
using namespace std;
void totalSum(int n){
  int sum =0;
    for ( int i = 1;i<=n;i++){
        sum = sum +i;

    }
    cout<<sum<<endl;
      
}
void sumEven (int n){
    int sum =0;
    for (int i = 2;i<=n;i=i+2){
        sum = sum +i;

    }
    cout<<sum<<endl;

}
void sumOdd (int n){
    int sum =0;
    for (int i = 1;i<=n;i=i+2){
        sum = sum +i;

    }
    cout<<sum<<endl;

}
int main(){

    int n ,i ;
    cout<<"enter the value"<<endl;
    cin>>n;
   /* int sum =0;
    for ( i = 1;i<=n;i++){
        sum = sum +i;

    }
    cout<<sum<<endl; */
    totalSum(n);
    sumEven(n);
    sumOdd(n);
    return 0;
}