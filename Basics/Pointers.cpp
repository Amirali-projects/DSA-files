# include<iostream>
using namespace std;
int main()
{
//	int a=10;
// int *p;   // declaration
// p=&a;           // initialization
// cout<<p<<endl;
// cout<<a<<endl;
// cout<<p<<endl;  // dereferencing 
// cout<<&a<<endl;

// Pointer with arrays
int a[5]={2,4,6,8};
int *p;
p=a;    // do not use the amprasand with a as p is pointer variable we can only write &p[0]
for(int i=0;i<4;i++){
	cout<<a[i]<<endl;
	cout<<p[i]<<endl;     // Both will print array 
}



}

// Both p and &a willl print same values as 
