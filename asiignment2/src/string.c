/*
 ============================================================================
 Name        : str4.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef enum{EXIT,MYSTRLEN,STRCP,STRCAT,STRREV,STRCMP,STRICMP}MENUOPERATIONS;
MENUOPERATIONS menu_choice();

int mystrlen(char *src);
int strcp(char *des,char *src);
char* mystrcat(char *des,char *src);
char* mystrrev(char *src);
int mystrcmp(char *des,char *src);
int main()
{
	MENUOPERATIONS mchoice;
	setvbuf(stdout,NULL,_IONBF,0);
 int result,flag;
 char src[30];
 char des[30];

	while((mchoice=menu_choice())!=0)
	{
		switch(mchoice)
		{
		case MYSTRLEN:
			printf("\n enter the string");
		    scanf("%s",src);
			result=mystrlen(src);
			printf("string length is %d",result);
			break;
		case STRCP:
			printf("\n enter the src string");
			scanf("%s",src);
			strcp(des,src);
		printf("\n destination string is %s",des);
		break;
		case STRCAT:
			printf("\n enter the src string");
		    scanf("%s",src);
		    printf("\n enter the des string");
		    scanf("%s",des);
		    mystrcat(des,src);
		    printf("\n concatinated string is %s",des);
		    break;
		case STRREV:
			printf("\n enter the string");
			scanf("%s",src);
			mystrrev(src);
			printf("\n reversed string is %s",src);
			break;
		case STRCMP:
			printf("\n enter the src string");
		    scanf("%s",src);
		    printf("\n enter the des string");
			scanf("%s",des);

		     if(mystrcmp(des,src)==0)
		     {
		    	 printf("\n entered strings are same");
		     }
		     else
		    	 printf("\n entered strings are different");

		}
	}
	return 0;
	}

char* mystrrev(char *src)
{
	int i=0;
	int j=0;
	char temp;
     while(src[i]!='\0')
     {
    	 i++;
     }
     i--;
     while(i>j)
     {
    	 temp=src[i];
    	 src[i]=src[j];
    	 src[j]=temp;
    	 j++;
    	 i--;
     }
	}

char* mystrcat(char *des,char *src)
{
	int i=0;
	int j=0;
	while(des[i]!='\0')
	{

		i++;
	}
	while(src[j]!='\0')
	{
		des[i]=src[j];
		j++;
		i++;
	}
	des[i]='\0';
	return des;

	}
int mystrlen(char *src)
{
	int len=0;
     int i=0;
 while(src[i]!='\0')
{
	 i++;
     len++;
}
 return len;
}
int strcp(char *des,char *src)
{
	int i=0;
     int len=0;
     while(src[i]!='\0')
     {
    	des[i]=src[i];
    	i++;

     }
     des[i]='\0';
//     return des;
}

 int mystrcmp(char *des,char *src)
 {

	 int flag = 0;

//	 printf("%c",src[0]);

	 if(strlen(src) == strlen(des))
	 {
		 for(int i = 0;i< strlen(src);i++)
		 	 {
		 		 if(src[i]!= des[i])
		 		 {
		 			 flag = 1;
		 			 break;
		 		 }
		 	 }
		 return flag;
	 }
	 else
	 {
		 return flag = 1;
	 }


 }
MENUOPERATIONS menu_choice()
{
	MENUOPERATIONS mchoice;
	printf("\n 0.exit");
	printf("\n 1.strlen");
	printf("\n 2.strcpy");
	printf("\n 3.strcat");
	printf("\n 4.strrev");
	printf("\n 5.stricmp");
	printf("\n 6.");
    printf("\n enter your choice\n");
    scanf("%d",&mchoice);
    return mchoice;
}


