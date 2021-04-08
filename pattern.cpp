#include<bits/stdc++.h>
using namespace std;
char alpha = 'a';// global declaration for a,bc,cde,efgh 
                    //... local declaration a,ab,abc,abcde
char alphs = 'A';
int digit = 1;

void pattern1(int n)
{
    for(int i = 1; i<=n ; i++)
    {
        cout<<"*";
    }
}

void pattern2(int n)
{
    for(int i = 1; i<=n ; i++)
    {
        cout<<"*";
    }
}

void pattern3(int n)
{
    int i,j;
    char coeff = '*';
    for(i = 0; i<n ; i++){
        for(j = 1; j<(n-i) ; j++)
            {cout<<" ";} // space for appending from left margin to.
        for(j = 0 ; j < (i+1); j++)
            { 
                cout<<coeff<<" ";  // between star space and one space after last star
            }
            cout<<endl;
    }
}

void pattern4(int n)
{
    int i,j,app = 1;
    char coeff = '*';
    for(i = 0; i<n ; i++){
        for(j = n ; j >= i + 1; j--)
            { 
                cout<<coeff<<" "; // between star space and one space after last star
            }
            cout<<endl;

        app = app + 1;
        for(j = 1; j< app; j++)
            {cout<<" ";} // space for appending from left margin to.
        
            
    }
}

void pattern5(int n)
{
    int i,j;
    char coeff = '*';
    for(i = 0; i<n ; i++){
        for(int sp = n-1; sp >= i + 1 ; sp--)
            {cout<<"  ";} // 2 space(one-star + one space)appending from left margin
        for(j = 0 ; j < (i+1); j++)
            { 
                cout<<coeff<<" ";  // between star space and one space after last star
            }
            cout<<endl;
    }
}

void pattern6(int n)
{
    int i,j;
    char coeff = '*';
    for(i = 0; i<n ; i++){
        for(int sp = 0; sp < i ; sp++)
            {cout<<"  ";} // 2 space(one-star + one space)appending from left margin
        for(j = n ; j>i; j--)
            { 
                cout<<coeff<<" ";  // between star space and one space after last star
            }
            cout<<endl;
    }
}

void pattern7(int n)
{
    char alpha = 'a';
    for(int i = 1; i<=n ; i++,alpha++)
    {
        cout<<alpha;
    }
}

void pattern8(int n)
{
    //char alpha = 'a';
    for(int i = 1; i<=n ; i++,alpha++)
    {
        cout<<alpha;
    }
}

void pattern9(int n)
{
    //char alpha = 'a';
    for(int i = 1; i<=n ; i++,alphs++)
    {
        if(i == 1)
            cout<<alphs;
        else
            cout<<"*"<<alphs;
    }
}

void pattern10(int n)
{

    for(int i = 1; i<=n ; i++,digit++)
    {
        if(i == 1)
            cout<<digit ;
        else
            cout<<"*"<<digit;
    }
}

int pascal(int n)
{
    int i,j,coeff = 1;
    for(i = 0; i<n ; i++){
        for(j = 1; j<(n-i) ; j++)
            {cout<<" ";}
        for(j = 0 ; j < (i+1); j++)
            { 
                if(j == 0 || i == 0){coeff = 1;}
                else{coeff = (coeff * (i - j + 1)/j);}
                cout<<coeff<<" ";
            }
            cout<<endl;
    }
}

int main()
{   
    int num;
    cin>>num;

    //pattern 1
    for(int i =1 ; i<=num ;i++)
    {
        pattern1(i);
        cout<<endl;
    }
    cout<<endl<<endl;

    //pattern 2
    for(int i =num ; i>=1 ;i--)
    {
        pattern2(i);
        cout<<endl;
    }
    cout<<endl<<endl;

    //pattern (1 + 2)
    for(int i =1 ; i<=num ;i++)
    {
        pattern1(i);
        cout<<endl;
    }

    for(int i =num - 1 ; i>=1 ;i--)
    {
        pattern2(i);
        cout<<endl;
    }
    cout<<endl<<endl;


    //pattern 3 
    pattern3(num);
    cout<<endl;

    //pattern 4
    pattern4(num);
    cout<<endl;

    //pattern 5
    pattern5(num);
    cout<<endl;

    //pattern 6
    pattern6(num);
    cout<<endl;

    //pattern 7 
    for(int i = 1; i<=num ; i++)
    {
        pattern7(i);
        cout<<endl;
    }
     cout<<endl<<endl;

    //pattern 8
    for(int i = 1; i<=num ; i++)
    {
        pattern8(i);
        cout<<endl;
    }

     cout<<endl<<endl;
    //pattern 9
    for(int i = 1; i<=num ; i++)
    {
        pattern9(i);
        cout<<endl;
    }
    cout<<endl<<endl;


    //pattern 10
    for(int i = 1; i<=num ; i++)
    {
        pattern10(i);
        cout<<endl;
    }

    cout<<endl<<endl;
    //pattern 11  - pascal triangle
    pascal(num);     
    return 0;
}
