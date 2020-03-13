#include<stdio.h>
#include<conio.h>
long int fact(int);   
void main()
{
	clrscr();
	int n, r;
	long int ncr, npr;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("Enter the value of r : ");
	scanf("%d",&r);
	npr=fact(n)/fact(n-r)
	ncr=npr/fact(r);          
	printf("NPR value = %ld\n",npr);
	printf("NCR value = %ld\n",ncr);
	getch();
}
long int fact(int x)    
{
	int i, f=1;
	for(i=2; i<=x; i++)
	{
		f=f*i;
	}
	return f;
}
