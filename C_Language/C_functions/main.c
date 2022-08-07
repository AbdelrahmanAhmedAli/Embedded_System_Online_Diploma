/*
 * main.c
 *
 *  Created on: May 6, 2022
 *      Author: abdo
 */

/* C functions */

/* ex1 : prime numbers between two intervals by making user-defined functions */

#include "stdio.h"

/*int prime(int num);
void main ()
{
	int n1, n2,i,flag ;
	printf("enter two numbers(intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&n1,&n2);
	printf("prime numbers between %d and %d are: ",n1,n2);
	for(i=n1+1;i<n2;i++)
	{
		flag=prime(i);
		if(flag==0)
		{
			printf("%d ",i);
		}
	}

}

int prime(int num)
{
	int j ,flag=0;
	for(j=2;j<=num/2;j++)
	{
		if(num%j==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}*/

/* ex2 calculate factorial using recursion*/
/*int factorial(int num);
void main ()
{
	int  n;
	printf("enter a positive integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("factorial of %d = %d",n,factorial(n));
}
int factorial(int num)
{
	if(num!=1)
	{
		num=num*factorial(num-1);
	}
	return num;
}*/

/* ex3 reverse a sentence using recursion */
/*
void reverse();
void main ()
{
	printf("enter a sentence: ");
	fflush(stdin);fflush(stdout);
	reverse();
}

void reverse()
{
    char c;

	scanf("%c",&c);

	if(c != '\n')
	{
		reverse();
		fflush(stdin);fflush(stdout);
		printf("%c",c);
	}

}*/

/* ex4 calculate power of a number using recursion */
/*int power(int n , int m);
void main ()
{
	int base , pow ;
	printf("enter base number :");
	fflush(stdin);fflush(stdout);
    scanf("%d",&base);
    printf("enter power :");
    fflush(stdin);fflush(stdout);
    scanf("%d",&pow);
    printf("%d powered to %d is %d",base,pow,power(base,pow));

}
int power(int n , int m)
{
	if (m != 0)
	return (n*power(n,m-1));
	else
		return 1 ;
}*/


/* C program takes string from the user and check if it the same USERNAME or not */
/*void main ()
{
  char x[] = "abdo" ;
  char name[100];
  printf("enter the user name : ");
  fflush(stdin);fflush(stdout);
  gets(name);
  if(name[0]==x[0] && name[1]==x[1] && name[2]==x[2] & name[3]==x[3] && name[4]==x[4])
{
   printf("correct name");
}
else
{
   printf("incorrect name");
}

}*/
/*occurance of a number in an array */
/*void main()
{
	int arr[] = {1,2,3,4,4,5,4};
	int n,i;
	printf("array = {1,2,3,4,4,5,4} \n enter the required number to search for last occurrence : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
    for(i=0;i<7;i++)
    {
    	if(arr[i]==n)
    	{
    		printf("the number is %d --> order is %d \n",arr[i],i);
    	}
    }


}*/

/* Swapping two arrays different in lengths (input of arrays is from user) */
/*void main ()
{
	int a[10],b[10],c[10];
	int i,j,sa,sb;
	printf("enter first array size : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&sa);
	printf("enter first array elements : \n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<sa;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("enter second array size : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&sb);
	printf("enter second array elements : \n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<sb;i++)
	{
		scanf("%d",&b[i]);
	}
    for(i=0;i<10;i++)
    {
    	c[i]=a[i];
    	a[i]=b[i];
    }
    printf("first reversed array elements :");
    for(i=0;i<sb;i++)
    {
    	printf(" %d ",a[i]);
    }
    printf("Second reversed array elements :");
       for(i=0;i<sa;i++)
       {
       	printf(" %d ",c[i]);
       }
}*/
/* Inverse of a given array (given by user)*/
/*void main ()
{
	int a[10],b[10];
	int i,j,sa,sb;
	printf("enter array size : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&sa);
	printf("enter array elements : \n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<sa;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,j=sa-1;i<sa;i++,j--)
	{
		b[i]=a[j];
	}
	printf("reversed array elements : ");
    for(i=0;i<sa;i++)
    {
    	printf(" %d ",b[i]);
    }

}*/
/* C program to check if the number is a power of 3 or not */
/*int power3(int n);
void main()
{
	int n;
	printf("enter the number to check if its power 3 or not : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	power3(n);
}
int power3(int n)
{
	if(n%3 == 0)
	{
		printf("yes its power of 3 ---> 0") ;
	}
	else if (n == 1)
	{
		printf("yes its power of 3 ---> 0") ;
	}
	else
	{
		printf("no its not power of 3 ---> 1") ;
	}
}*/






















