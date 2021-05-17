#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int tab[20000000]={0};
int pn[200000]={0}; // contains prime numbers
void sito()
{
    int p=0;
    for(int i=2;i<10000000;i++)
    {
        if(tab[i]==1)
            continue;
        int a=2;
        while(a*i<10000000)
        {
            tab[a*i]=true;
            a++;
        }
        
        pn[p++]=i;
    }
  
}
int main() {
    long long t,n;
    cin>>t;
    sito(); 
    while(t--)
    {
        cin>>n;
        
        long long i=0,maks=0;
        while(pn[i]<=sqrt(n))
        {
            if(n%pn[i]==0){
                maks=pn[i];
                while(n%maks==0)n/=maks;
                
            }
            i++;
        }
        if(n>maks)
            maks = n;
        cout << maks <<endl;
    }
    
    return 0;
}

