#include<iostream>
using namespace std;
int  powerOfX(int x, int n){
    if(x==0)
    return 1;
    int xn;
    int XrN;
    XrN = powerOfX(x,n/2);
    xn = XrN* XrN;
    if(n%2 == 1){
        xn =xn *x;
    }
    return xn;
}
int main() {
int x;
int n;
cout<< "enter value of X and N to calculate power of n";
cin>>x;
cin>>n;
cout<< powerOfX(x, n);
return 0;
}