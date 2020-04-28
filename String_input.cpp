#include <iostream>
#include <string>
using namespace std;
void f(char *x,char *y);
int main() {
	// Complete the program
  string x;
  getline(cin,x);
  string y;
  getline(cin,y);
  
  cout<<x.length()<<" "<<y.length();
  cout<<endl<<x + y;
  f(&x[0],&y[0]);
  cout<<endl<<x<<" "<<y;
    return 0;
}

void f(char *x,char *y)
{
	char temp;
	temp = *x;
	*x  = *y;
	*y = temp;
	
}

