#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int n = 10;
int size = 10;


void swap(int*x,int*y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void read(int array[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cin >> array[i];

}

void display(int array[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << endl;
}

int divide(int array[],int l,int h)
{	
	int pivot = array[h];
	int i = l-1;
	for(int j =l;j<h;j++)
	{
		if(array[j]<=pivot)
		{
			i++;
			swap(&array[i],&array[j]);
		}
	}
		display(array,n);
		swap(&array[i+1],&array[h]);
		return (i+1);
}

void bs(int array[],int n)
{
	int pass,initidx;// pass - each comaprison iteration
					// initidx - starting index
	for(pass=0; pass<n-1; pass++)
	{
		for(initidx=0; initidx<n-pass-1; initidx++)
		{
			if(array[initidx]>array[initidx+1])
				swap(&array[initidx],&array[initidx+1]);
		}
		cout<<"Pass"<< pass <<":";
		display(array,n);
	}
}

void ss(int array[],int n)
{
	int minidx,pass,idx; // minidx- index with smallest element
	for(idx=0; idx< n - 1; idx++)
	{	//idx - index of unsorted element
		//pass - iterator for the unsorted array
		//pass is always the next array before idx	
		minidx = idx;				
		for(pass= idx + 1; pass<n;pass++)
		{
			if(array[pass]<array[minidx])
				minidx = pass;
		}
		swap(&array[minidx],&array[idx]);
		cout<<"Pass"<< idx <<":";
		display(array,n);
	}
}

void is(int array[],int n)

{ int idx,pickup,j;
	for(idx = 1; idx<n ; idx++)
	{
		pickup = array[idx];
		j = idx - 1;
		while(array[j]> pickup)
		{
			array[j+1] = array[j];
			--j;
		}
		array[j+1] = pickup;
		cout<<"Pass"<<idx<<":";
		display(array,n);
	}
}

void qs(int array[],int l,int h)
{
	if(l<h){
		int j = divide(array,l,h);
		qs(array,l,j-1);
		qs(array,j+1,h);}
}

void cs(int array[],int size)
{
    // The size of count must be at least the (max+1) but
  // we cannot assign declare it as int count(max+1) in C++ as
  // it does not support dynamic memory allocation.
  // So, its size is provided statically.
  int output[10];
  int count[10];
  int max = array[0];

  // Find the largest element of the array
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  // Initialize count array with all zeros.
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  // Store the count of each element
  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  // Store the cummulative count of each array
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  // Find the index of each element of the original array in count array, and
  // place the elements in output array
  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  // Copy the sorted elements into original array
  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }

  display(array,n);
}


int main()
{
	int array[n];
	read(array,n);
	//qs(array,0,n-1);
	qs(array,0,n-1);
	//display(array,n);
	return 0;
}



















/*
selectionSort(array, size)
  repeat (size - 1) times
  set the first unsorted element as the minimum
  for each of the unsorted elements
    if element < currentMinimum
      set element as new minimum
  swap minimum with first unsorted position
end selectionSort
*/