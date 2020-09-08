#include <iostream>

int factorial(int n){
     n?return 1:factorial(n-1)*n;
}

int main(int c, char** args){
    int inp;
    cin>>inp;
    if(inp > -1)
    cout<<fact(inp);
}