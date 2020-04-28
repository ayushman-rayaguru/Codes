//First recurring character
#include<iostream>
#include<string.h>
using namespace std;
int f(char a[5]);
int main()
{
    char a[5],b[5];
    cout<<"ENTER STRING :  ";
    for(int i =0 ; i < 5;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"FIRST RECCURING CHARACTER:  ";
	f(a); //function call
    
}

int f(char a[5])  // problem logic
{
  
 for(int i=0; a[i]!='\0';i++)
  {
	for(int j = i+1; a[j]!='\0';j++)
	{
		    if(a[i]==a[j])
		{	
			cout<<a[i]; 
		}	
	}
		
  }
}


