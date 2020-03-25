#include<iostream>
using namespace std;
int main(){
	int n;  //size
	cout<<"enter the size of array...please enter even number :P  ="<<endl;	
cin>>n;
if(n%2==0)
{ n=n;
}
else
{ n=n+1;
}
cout<<"the size is="<<n<<endl;
	int a[n];
	int final[n];
	for(int k=0;k<n;k++)
	{cout<<"enter the number="<<k<<"="<<endl;
	cin>>a[k];
	}
	int *po; //orgnl
	po=a;
	int temp;
	int h=n/2; //half
	int a1[h];
    int a2[h];
    
    
    //first half;
	for(int k=0;k<h;k++)
	{
		a1[k]=a[k];
		
		}	
		
		//2nd half
	int f=h;   //locATION FOR ORIGINAL ARRAY
	for(int k=0;k<h;k++)
	{
		a2[k]=a[f];
		f++;
		}	
	
	cout<<"1st half output="<<endl;
	for(int k=0;k<h;k++)
	{cout<<a1[k]<<endl;
	}
	
	cout<<"2nd half output="<<endl;
	for(int k=0;k<h;k++)
	{cout<<a2[k]<<endl;
	}
	
		int *p1;
		p1=a1;
		
		int *p2;  //2nd arry pointer
		p2=a2;
		
	//first half sort
for(int i=0;i<h;i++)
{for(int k=i+1;k<h;k++)
{ if(*(p1+i)>*(p1+k))
{temp=*(p1+i);
*(p1+i)=*(p1+k);
*(p1+k)=temp;
}
}
}	

cout<<"1nst half sort output="<<endl;
//1st half sort output
for(int i=0;i<h;i++)
	{
		cout<<*p1<<endl;
		p1++;
		
	}

	
	//2nd half sort
	
	for(int i=0;i<h;i++)
{for(int k=i+1;k<h;k++)
{ if(*(p2+i)>*(p2+k))
{temp=*(p2+i);
*(p2 +i)=*(p2+k);
*(p2+k)=temp;
}
}
}

cout<<"2nd half sort output="<<endl;
//2nd half  sort output
	for(int i=0;i<h;i++)
	{cout<<*p2<<endl;
	p2++;}
	
	
	//int final[n];
	//for(int k=0;k<h;k++)
	//{ final[k]=*p1;
	//p1++;
	//}
	
	 
	
//	cout<<"finall array 1st half output="<<endl;
//	for(int k=0;k<h;k++)
//	{ cout<<final[k]<<endl;}
//	
//	int l=h;
//	for(int i=0;i<h;i++)
//	{ final[l]=*p2;	
//	l++;
////	p2++;}
	
//	int m=h;
//cout<<"finall array 2st half output="<<endl;
//	for(int k=0;k<h;k++)
//	{ cout<<final[m]<<endl;
//	m++;
//	}

//int z;	

//for(int r=0;r<n;r++)

//	{ 
	//final sorting
//	for(int j=r+1;j<n;j++)
//	{if(final[r]>final[j])
//	{
//	
 //z=final[r];
//final[r]=final[j];
//final[j]=z;
//}
//	}
	
//}

//cout<<"final array output="<<endl;	
//	final full array
//for(int y=0;y<n;y++)
//{//
//	cout<<final[y]<<endl;
//	}

//for(int f=0;f<h;f++)
//{ temp=*p1;
//final[f]=temp;
//p1++;}
cout<<"pehla half"<<endl;
for(int f=0;f<h;f++)
{ final[f]=a1[f];
}
for(int f=0;f<h;f++)
{ cout<<final[f]<<endl;
}
cout<<"dosra half"<<endl;
int l=h;
for(int f=0;f<h;f++)
{ final[l]=a2[f];
l++;}


for(int f=h;f<n;f++)
{ cout<<final[f]<<endl;
}

int *lp;
lp=final;
for(int r=0;r<n;r++)
{
	for(int u=r+1;u<n;u++)
	{ if(*(lp+r)>*(lp+u))
	{
		temp=*(lp+r);
		*(lp+r)=*(lp+u);
		*(lp+u)=temp;
		
	}
	}
	
}

cout<<"the final array is====="<<endl;

for(int r=0;r<n;r++)
{ cout<<*lp<<endl;
lp++;

}




	
	return 0;
}	
	
	
	
	
	
	

