#include <iostream>

using namespace std;
/*a program that takes five values from user, stores them in an
 array and displays the sum and average of these values.*/
int main() 
{
	int num[5],sum=0; //initializing variables
	for(int i=0;i<5;i++) //loop for input and storing the values in an array
	{
		cout<<"Enter Number"<<i+1<<" = "; cin>>num[i];
	}
	for(int i=0;i<5;i++) //loop for getting sum of input
	{
		sum=sum+num[i];
	}
	cout<<"\n\nSum of The Entered Values= "<<sum<<endl<<endl;
	cout<<"Average Of The Entered Values="<<(sum/5); //average formula
	
	
	
	return 0;
}
