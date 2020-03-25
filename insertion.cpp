#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter size="<<endl;
	cin>>n;
int a[n];
	int temp;
	cout<<"enter elements="<<endl;
	for(int y=0;y<n;y++)
	{ cin>>a[y];
	}
	int *p;
	p=a;

	for(int i=0;i<n;i++)
	{  
		for(int j=i+1;j<n;j++){
		
		for(int k=i;k>=0;k--){
		if(*(p+j)<*(p+k))
		
		{
			temp=*(p+k);
			*(p+k)=*(p+j);
			*(p+j)=temp;
		}
		}	
		}
}

cout<<"the sorted array is="<<endl;
	for(int i=0;i<n;i++)
	
	{cout<<*p<<endl;
		*p++;
	}
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
