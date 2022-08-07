/*
 * main.c
 *
 *  Created on: 16 Jul 2022
 *      Author: abdo
 */


#include "stdio.h"

/* ex1 : c-program to store information for a student using structures */
/*
struct student{
	char name[20];
	int roll;
	float marks;
};

void main ()
{
	struct student s1;
	printf("Enter information of students : \n\n");
	printf("Enter student name : ");
	fflush(stdin);fflush(stdout);
	scanf("%s",&s1.name);

	printf("Enter roll number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&s1.roll);

	printf("Enter marks : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&s1.marks);

	printf("Displaying Information : \n");
	printf("Name  : %s \n",s1.name);
	printf("Roll  : %d \n",s1.roll);
	printf("Marks : %.3f \n",s1.marks);


}*/

/* ex2 : c-program to add two distances system using structures */

/*struct distance{
	int feet;
	float inch;
}d1,d2,s;

void main()
{
	printf("enter information for 1st distance \n");
	printf("Enter feet : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d1.feet);
	printf("Enter inch : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d1.inch);

	printf("enter information for 2st distance \n");
	printf("Enter feet : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d2.feet);
	printf("Enter inch : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d2.inch);

    s.feet = d1.feet + d2.feet ;
    s.inch = d1.inch + d2.inch ;

    if(s.inch >= 12)
    {
    	s.inch = s.inch -12. ;
    	s.feet++;
    }

    printf("\nsum of distances = %d\' - %.1f\" ",s.feet,s.inch);

}*/


/* ex3 : c-program to add two complex numbers by passing structure to a function */

/*struct number{
	float real;
	float imag;
}n1,n2,add;

int sum(float n1real , float n1imag , float n2real , float n2imag);

void main()
{
	printf("enter 1st complex number  : \n");
	printf("enter real and imaginary respectively : ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&n1.real,&n1.imag);

	printf("enter 2st complex number  : \n");
	printf("enter real and imaginary respectively : ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&n2.real,&n2.imag);

	sum(n1.real,n1.imag,n2.real,n2.imag);

}
int sum(float n1real , float n1imag , float n2real , float n2imag)
{
	printf("sum = %.1f + %.1f i",n1real+n2real,n1imag+n2imag);
}*/



/* ex4 : c-program to store information for students using structure */

struct student{
	char name[20];
	float marks;
};

void main ()
{
	int i;
	struct student s[3];
	printf("Enter information of students : \n");
	for(i=0;i<3;i++)
	{
	printf("\nfor roll number %d : \n",i);

	printf("Enter name : ");
	fflush(stdin);fflush(stdout);
	scanf("%s",&s[i].name);

	printf("Enter marks : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&s[i].marks);

	}
	printf("Displaying Information : \n");
	for(i=0;i<3;i++)
	{
	printf("\ninformation for roll number %d : \n",i);
	printf("name : %s \n",s[i].name);
	printf("Marks : %.1f\n",s[i].marks);
	}

}




