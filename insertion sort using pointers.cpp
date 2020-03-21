//sir Amir task 
//SELECTION SORT

#include<iostream>
using namespace std;
int main(void){
	int  *p;
	int small;
		int temp;
	int n; //size 
	cout<<"enter the size oof array="<<endl;
	cin>>n;
	
	int a[n];
	cout<<"hi there enter the values="<<endl;
	for(int p=0;p<n;p++)
	{cin>>a[p];
	}
	p=a;
	for(int r=0;r<n;r++)
	{ small=r;   //saving the value of r for checking
		for(int j=r+1;j<n;j++)
		{  
			if(*(p+j)<*(p+small))
			{
			small=j;   //becausse we want to swap  the checked value to the desied position
			
			temp=*(p+small);
		*(p+small)=*(p+r);
			*(p+r)=temp;}
		}
			
		}
		
		
	cout<<"HERE YOU GET THE SORTED ARRAY="<<endl;
	for(int f=0;f<n;f++)
	{ cout<<*p<<endl;
	*p++; ///agy janay k luiye
	
	}
	return 0;
	
}
