#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long fp=1, f=2;
    long long fib[30][2];
    //the first line contains the nth even number
    //the second line contains the sum up to that number
    
    
    fib[0][0]=f;
    fib[0][1]=f;
    
    for(int i=1;i<30;i++)
    {
        //Every third fibonacci number is even
        for(int k =0;k<3;k++){
            swap(f,fp);
            f=f+fp;
        }
        
        fib[i][0]=f;
        fib[i][1]=f+fib[i-1][1]; 
         
    }
    
    int t;
    long long n;
    cin>> t;
    while(t--)
    {
        int i=-1;
        cin>>n;
        //we choose the greatest term of the fibonacci sequence less than n
        // and then display the sum
        while(fib[++i][0]<n);
        
        cout << fib[i-1][1] <<endl;
        
        
    }   
    return 0;
}
