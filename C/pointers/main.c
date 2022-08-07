/*
 * main.c
 *
 *  Created on: 28 Jul 2022
 *      Author: abdo
 */

#include "stdio.h"

/*                                 pointers                                 */
/* EX1 : C program to demonstrate how to handle the pointers in the program */
/*
void main()
{
	int m = 29 ;
	int *ab;
	printf("address of m : 0x%p \n",&m);
	printf("value of m : %d \n\n",m);
	ab = &m ;
	printf("now ab is assigned with the address of m \n");
	printf("address of pointer ab : 0x%p \n",ab);
	printf("content of pointer ab : %d \n\n",*ab);
	m=34;
	printf("the value of m is assigned to 34 now \n");
	printf("address of pointer ab : 0x%p \n",ab);
	printf("content of pointer ab : %d \n\n",*ab);
	printf("the pointer variable ab is assigned whith the value 7 now \n");
	*ab=7;
	printf("address of m : 0x%p \n",&m);
	printf("value of m : %d \n\n",m);
}*/
/* EX2 : C program to print all the alphabets using a pointer */
/*
void main()
{
	char x = 'A';
	int *ptr ;
	ptr = &x;
	int i;
	for(i=0 ;i<26;i++)
	{
		printf("%c ",*ptr);
		x++;
	}
	}
*/
/* EX3 : C program to print a string in reverse using a pointer*/
/*
int main()
{
	char is[50] ;
	char rs[50] ;
	char *isp = is ;
    char *rsp = rs ;
	int c=-1 ;
	int i = 2;
	printf("enter a string : ");
	fflush(stdin);fflush(stdout);
	scanf("%s",is);
    while(*isp)
    {
    	isp++;
    	c++;
    }
    while(c>=0)
    {
    	isp--;
    	*rsp = *isp ;
    	rsp++;
    	--c;
    }
    *rsp = '\0';
    printf("reverse of string : %s",rs);
    return 0 ;
}*/

/* EX4 : C program to print the elements of an array in reverse order */

/*int main ()
{
	int arr[10] ;
	int i ,n;
	int *ptr = arr ;
	printf("enter number of input elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("enter %d numbers to the array : \n",n);
	for(i=1;i<=n;i++)
	{
		printf("element - %d :",i);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	ptr =&arr[n];
    for(i=n;i>0;i--)
    {
    	printf("element - %d : %d \n",i,*ptr);
    	ptr--;
    }

	return 0 ;
}*/

/* EX5 : C program to to show a pointer to an array which contents are pointer to structure */

struct employee
{
	char *emp_name ;
	int   emp_id   ;
};
int main()
{
	static struct employee emp1={"abdo",1000},emp2={"ahmed",1001},emp3={"ali",1002};
    struct employee(*arr[])={&emp1,&emp2,&emp3};
    struct employee(*(*pt)[3])=&arr;
    printf("Employee Name : %s",(**(*pt+1)).emp_name);
    printf("\nEmployee Id : %d",(**(*pt+1)).emp_id);

	return 0 ;
}









