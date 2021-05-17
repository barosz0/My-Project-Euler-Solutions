#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long t,fp=1, f=2,a;
    cin>> t;
    long long fib[30][2];
    
    fib[0][0]=f;
    fib[0][1]=f;
    for(int i=0;i<30;i++)
    {
        fib[i][0]=f;
        fib[i][1]=f+fib[i-1][1];
        
        swap(f,fp);
        f=f+fp;
        swap(f,fp);
        f=f+fp;
        swap(f,fp);
        f=f+fp;
    }
    
    while(t--)
    {
        int i=-1;
        cin>>a;
        while(fib[++i][0]<a);
        
        cout << fib[i-1][1] <<endl;
        
        
    }   
    return 0;
}
