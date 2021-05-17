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

int main(){
    int t,n,pom;
    double score;
    cin >> t;
    sito();
    while(t--)
    {
        cin>>n;
        score=1;
        for(int i=0;i<200000;i++)
        {
            if(pn[i]<=n)
            {
                pom=pn[i];
                while(pom<=n)pom*=pn[i];
                pom/=pn[i];
                score*=pom;
            }
            else break;
        }
        cout << score <<endl;
    }
    return 0;
}
