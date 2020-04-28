//Popular interview coding question
//maximum and minimum element in array

#include<iostream>
using namespace std;
int n;
int fmax(int a[10]);
int fmin(int a[10]);
int main()
{
	int a[10];
	cout<<"PLEASE ENTER THE SIZE OF ARRAY : ";
	cin>>n;
	cout<<"PLEASE ENTER THE ELEMENTS : ";
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"THE MAX ELEMENT IS : ";fmax(a);
	cout<<endl<<"THE MIN ELEMENT IS : ";fmin(a);	
}

int fmax(int a[10])
{ int max = a[0];
  
	for(int i =0;i<n;i++)
	{
		
		if(a[i]>max)
		{
			max = a[i];
			
		}
	
	}
	cout<<max;
}

int fmin(int a[10])
{ int min = a[0];
  
	for(int i =0;i<n;i++)
	{
		
		if(a[i]<min)
		{
			min = a[i];
			
		}
	
	}
	cout<<min;
}

