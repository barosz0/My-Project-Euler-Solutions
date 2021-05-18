#include <cmath>
#include <string>
#include <cstdio>
#include <iostream>
#include <algorithm>


using namespace std;

void NumTo( long long tab[], int size)
{
    for(long long i =1;i<size;i++)
    {
        tab[i]=i*i+tab[i-1];
    }
}

int main(){
     long long sqnum[40001]={0},sum;
    NumTo(sqnum,40001);
    int t,n;
    cin >> t;
    while(t--)
    {
        
        cin>>n;
        sum=sqnum[n];       
        sum=((((1+n)*n)/2)-(double)sum/(((1+n)*n)/2))*(((1+n)*n)/2);
        cout << sum <<endl;
    }
    return 0;
}
