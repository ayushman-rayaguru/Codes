#include<iostream>
using namespace std;
int f(int a[3][3]);
int main()
{
	int a[3][3];
	cout<<"PLEASE ENTER A MATRIX:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	f(a);
}

int f(int a[3][3])
{int b[3][3];
 int t=0;
 int v=2;
 

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			int tmp;
			b[j][i] = a[i][j];
	
		}
	}
	for(int i=0;i<3;i++)
	{
		
			int tmp;
			tmp = b[t][i];
			b[t][i] = b[v][i];
			b[v][i] = tmp;
	
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<b[i][j];
		}
		cout<<endl;
	}
	
	
}
