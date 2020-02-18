/*
 * sort.c
 *
 *  Created on: Feb 17, 2020
 *      Author: lenovo
 */
#include <stdio.h>
#include<stdlib.h>

typedef struct book
{
	char book_name[100];
	int book_ID;
	float price;
	}book_b;

	void accept_record(book_b *arr)
	{
//			fflush(stdin);
		   printf("\n enter book name :");
		   scanf("%s",arr->book_name);
		   printf("\nenter book Id :");
		   scanf("%d",&arr->book_ID);
		   printf("\nenter book price");
		   scanf("%f",&arr->price);

	}

	void print_record(book_b *arr)
	{
		printf(" \n %s",arr->book_name);
		printf("\n %d",arr->book_ID);
		printf("\n %f",arr->price);
	}
	int main()
	{
		setvbuf(stdout,NULL,_IONBF,0);
		book_b arr[10];
		for(int index=0; index<1;  ++index)
			   {
					accept_record(&arr[index]);

			   }
		for(int index=0; index<1;  ++index)
				   {
						print_record(&arr[index]);

				   }

		return 0;
	}

