#include<iostream>

using namespace std;

int main()

{
	int n,sum=0,rem;
	cout<<" Enter a number " << endl;
	cin>> n;
	while(n%10)
    {   
    	rem=n%10;
    	 n=n/10;
    	sum=sum+rem;
		}
		cout<<" Sum of the digits"<<  sum << endl;
		return 0;	
}
