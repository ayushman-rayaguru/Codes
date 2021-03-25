# include<bits/stdc++.h>
#include<cstring>
using namespace std;
int i,j,prime[1000];
int print_prime(int n)
{
    for(i = 2 ;i<n;i++)
    {
        if(prime[i] == -1)
        {
            cout<<i<<",";
        }
    }
}


int main()
{   int f;
    memset(prime,-1,sizeof(prime));
    prime[0] = 0;
    prime[1] = 0;

    for(i = 2;i <= 100; i++)
    {
        if(prime[i] == -1)
        {
        for(j = 2; i*j <=100; j++)
        {
            prime[i*j] = 0;
        }
        }
    }
    cout<<"Enter first f : ";
    cin>>f;
    print_prime(f);
    return 0;
}

