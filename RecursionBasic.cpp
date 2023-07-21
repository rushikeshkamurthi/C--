#include<stdio.h>
#include<iostream>
using namespace std;

void preSeq(int n) {
    if( n == 0 )
    return;
    cout<<"\n"<<n;
    preSeq(n-1);

}
//  Increasing
void postSeq(int n){
    if( n == 0 )
    return;
    postSeq(n-1);
    cout<<"\n"<<n;

}

void prePostSeq(int n){
    if( n == 0 )
    return;
    cout<<"\n"<<n;
    prePostSeq(n-1);
    cout<<"\n"<<n;
    
}

int main(){


    int n ;
    cout<<"\n Enter number to  print \n pre sequence \n post sequence \n then pre-post combined";
    cout<<"\n In this program we will demonstrate how recursion work";
    cin>>n;

    cout<<"\n Pre Sequence";
    preSeq(n);
        cout<<"\n Post Sequence";

    postSeq(n);
        cout<<"\n Pre post Sequence";

    prePostSeq(n);

    return 0 ;
}