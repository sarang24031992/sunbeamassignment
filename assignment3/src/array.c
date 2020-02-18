/*
 * array.c
 *
 *  Created on: Feb 16, 2020
 *      Author: lenovo
 */


#include<stdio.h>
#include<stdlib.h>

typedef enum{EXIT,ADD,DELETE,MAX,MIN,DISPLAY}MENUOPERATIONS;
MENUOPERATIONS menu_choice();
int add(int *arr );
int delete(int *arr);
int display(int *arr);
int max(int *arr);
int min(int *arr);
int main()
{
	MENUOPERATIONS mchoice;
	setvbuf(stdout,NULL,_IONBF,0);
	int arr[10]={};
	while((mchoice=menu_choice())!=EXIT)
	{
		switch(mchoice)
		{
		case ADD:
			add(arr);

              break;
		case DELETE:
              delete(arr);
			 break;
		case MAX:
              max(arr);
			 break;
		case MIN:
			min(arr);

			break;
		case DISPLAY:
			 display(arr);
			break;

	}
	}
}

  int add(int *arr)
  {
	  int flag =0;
	  int index;


	for(int i=0;i<10;i++)
	{
		if(arr[i]==0)
		{
			 flag=1;
			printf(" a[%d]= %d  \n",i,arr[i]);
		}
	}
	  if(flag==0)
	  {
		  printf("ARRAY IS FULL\n");
	  }

	printf("add the index to insert number : ");
	scanf("%d",&index);
	printf("ENTER ELEMENT : ");
	scanf("%d",&arr[index]);

	return 0;
}

   int delete(int *arr)

		{
	   int index;
	   printf("add the index to delete number : ");
	   	scanf("%d",&index);
       arr[index]=0;
		}
      int display(int *arr)
      {
    	   int i;
    	  for(int i=0;i<10;i++)
    	  {
    	  printf("a[%d]=%d \n",i,arr[i]);
    	  }
      }
      int max(int *arr)
      {
    	   int i;
    	   int temp;
    	   temp=arr[0];
    	   int index=0;
    	  for(i=0;i<10;++i)
    	  {
    	  if(temp<=arr[i])
    	  {
    		temp=arr[i];
    	    index=i;
    	  }
    	 }

    	  printf("\n largest element = arr[%d],%d",index,temp);
      }


      int min(int *arr)
           {
         	   int i;
         	   int temp;
         	   temp=arr[0];
         	   int index=0;
         	  for(i=0;i<10;++i)
         	  {
         	  if(temp>arr[i])
         	  {
         		temp=arr[i];
         	    index=i;
         	  }
         	 }

         	  printf("\n smallest element = arr[%d],%d",index,temp);
           }

 MENUOPERATIONS menu_choice()
 {
	  MENUOPERATIONS mchoice;
	 printf("\n 0.exit");
	 printf("\n 1.add");
	 printf("\n 2.delete");
	 printf("\n 3.max");
	 printf("\n 4.min");
	 printf("\n 5.display");
	 printf("\n enter your choice");
	 scanf("%d",&mchoice);
	 return mchoice;
 }
