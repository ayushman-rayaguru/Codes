//Longest Increasing Subsequence

/* 
Asked in: Facebook	Yahoo	Epic systems	Amazon	Microsoft

Input 1:	A = [1, 2, 1, 5]

Output 1:	3
    
Explanation 1:	The sequence : [1, 2, 5]

*/
#include<iostream>
using namespace std;
int B[7];
int f(int A[5]);
int main()
{
	int A[5];
	
	cout<<"PLEASE ENTER 5 NUMBERS: ";   //Taking input
	for(int i = 0 ; i<5 ; i++)
	{
		cin>>A[i];
	}
	
	cout<<endl<<"THE LONGEST SEQUENCE IS : ";
	f(A);
}

int f(int A[5])
{int i=0,j,p=0;
 int count = 1;
 int cp = 0;
 j=i+1;
	for(;j<5;j++)
	{
	//	B[p] = A[j];
	//	p++;
		if(A[i] < A[j])
		{	
	
			++count;
			i = j;						
		}
		else
		{   cp = cp + 1;
			i++;
		}
			
	}
		//cout<<endl<<count<<endl;
		if(cp == 1)
		{
			cout<<count - cp;
		}
		else
		{
			cout<<count;
		}
		
	
}

















