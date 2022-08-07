/*
 * main.c
 *
 *  Created on: Apr 26, 2022
 *      Author: abdo
 */


#include "stdio.h"

void main ()
{

    /* ex1 */
	/*printf("C programming");*/

    /* ex2 */
    /*int x ;
	  printf("enter the integer : ");
	  fflush(stdout);
      scanf("%d",&x);
      printf("you entered : %d ",x);*/

	/* ex3 */
	    /*int x ,y;
		printf("enter two integers : ");
		fflush(stdout);
	    scanf("%d %d",&x,&y);
	    printf("sum : %d ",x+y);*/


	/* ex4 */
	/*float x ,y;
			printf("enter two numbers : ");
			fflush(stdout);
		    scanf("%f %f",&x,&y);
		    printf("product : %f ",x*y);*/

	/* ex5 */
	/*char x ;
			printf("enter character : ");
			fflush(stdout);
		    scanf("%c",&x);
		    printf("ASCII 	value of %c : %d ",x,x);*/

	/* ex6 */
	/*int x ,y;
			printf("enter value of a : ");
			fflush(stdin);fflush(stdout);
		    scanf("%d",&x);
		    printf("enter value of b : ");
		    fflush(stdin);fflush(stdout);
		    scanf("%d",&y);
		    printf("after swapping value of a is %d ",y);
		    printf("after swapping value of b is %d ",x);*/


	/* ex7 */
		    /* same as ex6 */

	/* ####################  homework 2  #################### */
	/* ex1 */

	/*int x ;
	printf("enter an integer you want to check : ");
	fflush(stdin);fflush(stdout);
    scanf("%d",&x);
    if(x%2 == 0)
    {
    	printf("integer is even");
    }
    else
    {
    	printf("integer is odd");
    }*/

	/* ex2 */
	/*char x ;
	printf("enter the character you want to check : ");
	fflush(stdin);fflush(stdout);
    scanf("%c",&x);
    if(x == 'a' || x == 'A' || x == 'I' || x == 'i' || x == 'o' || x == 'O' || x == 'U' || x == 'u' || x == 'E' || x == 'e' )
        {
        	printf("character is voule");
        }
        else
        {
        	printf("character is constant");
        }*/

	/* ex3 */
	/*float x,y,z;
	printf("enter three numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if(x>y)
	{
		if(x>z)
		{
			printf("largest number is %f",x);
		}
	}
	else if(y>z)
		{
		printf("largest number is %f",y);
		}
	else
	{
		printf("largest number is %f",z);
	}*/

	/* ex4 */
	/*float x;
	printf("enter the number : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	if(x<0)
	{
		printf("number %f is negative",x);
	}
	else if(x>0)
	{
		printf("number %f is positive",x);
	}
	else
	{
		printf("number %f is 0",x);
	}*/

	/* ex5 */
	/*char x ;
	printf("enter the character : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	if(x>='a' && x<='z')
	{
		printf("%c is an alphabet",x);
	}
	else
	{
		printf("%c is not an alphabet",x);
	}*/

	/* ex6 */
	/*int x ,i;
	int s=0;
	printf("enter a number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	for(i=0;i<=x;i++)
	{
		s = s + i ;
	}
    printf("sum = %d",s);*/

	/* ex7 */
	/*int x ,i;
	int s=1;
	printf("enter a number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if (x>0)
		{
		for(i=1;i<=x;i++)
		 {
			s = s * i ;
		 }
    printf("factorial = %d",s);
		}
	else
	{
		printf("factorial of negative number doesnot exist");
	}*/

	/* ex8 */
	float x , y;
	char z;
	printf("enter two numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("enter operant : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&z);
    switch(z)
    {
    case '+' :
    {
    	printf("sum = %f",x+y);
    }
    break;
    case '-' :
        {
        	printf("subtraction = %f",x-y);
        }
        break;
    case '*' :
        {
        	printf("multib = %f",x*y);
        }
        break;
    case '/' :
        {
        	printf("div = %f",x/y);
        }
        break;
    }













}

