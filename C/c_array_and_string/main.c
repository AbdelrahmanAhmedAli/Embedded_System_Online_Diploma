/*
 * main.c
 *
 *  Created on: Apr 30, 2022
 *      Author: abdo
 */



#include "stdio.h"

void main ()
{

	/* ARRAYS */

	/* ex1 multidimensional array : sum of 2 arrays order 2*2 */
	/*float a[2][2], b[2][2] ,c[2][2];
	int i , j ;
	printf("enter the first array values\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter a[%d][%d] : ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}

	printf("enter the second array values\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("enter b[%d][%d] : ",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%f",&b[i][j]);
			}
		}

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
	      c[i][j]=a[i][j]+b[i][j]	;
		}
	}
	printf("sum of arrays : \n");
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					printf("%.1f  ",c[i][j]);
					if(j==1)
					{
						printf("\n");
					}
				}
			}*/

	/* ex2 calculating average using array */

	/*float a[100] ;
	float s = 0 ;
	int i ,n ;
	printf("enter numbers of data : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d. enter number : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&a[i]);
	}

	for(i=0;i<n;i++)
		{
			s=s+a[i];
		}

	printf("average = %.1f",s/n);*/

	/* ex3 finding the transpose of a matrix */

	/*float a[10][10] , b[10][10];
	int i , j , r ,c ;
	printf("enter number of rows and columns of matrix :");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&r,&c);
	printf("enter elements of matrix \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d] : ",i+1,j+1);
		    fflush(stdin);fflush(stdout);
			scanf("%f",&a[i][j]);
		}

	}
	printf("the entered matrix :\n");
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%.1f  ",a[i][j]);
				if(j==c-1)
				 {
					printf("\n");
				 }
			}

		}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	printf("the transpose of matrix :\n");
	for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
				printf("%.1f ",b[i][j]);
				if(j==r-1)
				 {
					printf("\n");
				 }
			}

		}*/


	/* ex4 insert an element in an array */
	/*float a[10];
	int n,i,e,l;
	printf("enter no of elemnts : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("enter elemnts : \n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<n;i++)
	{
	scanf("%f",&a[i]);
	}
    printf("enter the element to be inserted :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&e);
    printf("enter the location (from 0 ---> %d) :",n-1);
	fflush(stdin);fflush(stdout);
	scanf("%d",&l);

    for(i=0;i<n;i++)
    {
    	if(i==l)
    	{
    		a[i]=e;
    	}
    }

    for(i=0;i<n;i++)
    {
    	printf("%.0f ",a[i]);
    }*/

	/* ex5 c program to search an element in an array */

	/*float a[10];
	int n,i,s;
	printf("enter no of elemnts : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("enter elemnts : \t");
	fflush(stdin);fflush(stdout);
	for(i=0;i<n;i++)
      	{
		scanf("%f",&a[i]);
		}
    printf("enter the element to be searched :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&s);
	for(i=0;i<n;i++)
      	{
		if(a[i]==s)
		  {
			printf("number found at location %d",i);
		  }
		}*/

	/* Strings */

	/* ex1 find the frequency of characters in a string */


	/*char s[1000], f;
	int i,c=0;
	printf("enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(s);
	printf("enter a character to be find its frequency : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&f);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==f)
		{
			c++;
		}
	}
	printf("frequency of %c = %d",f,c);*/

	/* ex2 find the length of a string */

	/*char s[1000];
	int i,c=0;
	printf("enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		c++;
	}
	printf("length of string : %d",c);*/

	/* ex3 reverse a string without using library functions */

#include<string.h>

	char str[1000],temp;
	int i,j=0;
	printf("enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(str);

	i=0;
	j=strlen(str)-1;
	while(i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j]=temp;
		i++;
		j--;
	}
    printf("reversed string : %s",str);




























}

