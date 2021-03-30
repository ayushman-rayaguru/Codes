#include<bits/stdc++.h>
#include <cstring>
using namespace std;

int count1[256] ={0},count2[256] ={0};


bool isanagram(string strf,string strs)
{
    int l1,l2;
    l1 = strf.length(); l2 = strs.length();
    if(l1 != l2){return false;}
    char str1[l1+1];char str2[l2+1];
    strcpy(str1,strf.c_str());strcpy(str2,strs.c_str());

    for(int i = 0; str1[i] && str2[i]; i++)
    {
    count1[str1[i]]++;
    count2[str2[i]]++;   
    }

    for(int i= 0 ; i<256;i++)
    {
    if(count1[i] != count2[i])
        return false;
    }
    return true;
    
}

int main()
{
    string strf,strs;
    bool res;
    cout<<"Enter first string :";
    getline(cin,strf);
    cout<<"Enter second string :";
    getline(cin,strs);
    res = isanagram(strf,strs);
    if(res == true){cout<<"Is anagram";}
    else{cout<<"Not anagram";}
    return 0;
}