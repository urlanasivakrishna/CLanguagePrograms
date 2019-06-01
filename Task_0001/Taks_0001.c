//!
//! $URL: $
//!
//! @(#)$Id: $
//!
//! \file   Taks_0001.c
//!
//!
//////////////////////////////////////////////////////////
//														//
//	Author		   		: Urlana Sivakrishna			//
//	Date of publish    	: 02/05/2019					//
//														//
//////////////////////////////////////////////////////////
//
//	How to rotate clockwise user defined string with normal string and revers string with in single line.
//
//	Looking
//	===================================================
//
//	S    |    /
//	 A   |   /
//	  I  |  /
//	   R | /
//	    A|/
//	-----M-------
//	    /|A
//	   / | R
//	  /  |  I
//	 /   |   A
//	/    |    S
//
//	==================================================
//
//	***/ This will rotate clockwise /***
//	***/ This string is user defind /***
//
//	==================================================
//



#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>
void delay(unsigned int);
void main()
{
	int rvs_str_siz, cnt_ptr, name_size, table_size, i, j, k;
	char name[100];
	printf("Enter the string: ");
	scanf("%s",&name);
	name_size = strlen(name);
	table_size = name_size + name_size;
	char output_str[table_size];
	char matx[table_size][table_size];
	rvs_str_siz = name_size - 2;
	
	for(i = 0; i<table_size;i++)
	{
		if((i<name_size) && name[i] != '\n')
		{
			output_str[i] = name[i];
		}
		else
		{
			output_str[i] = name[rvs_str_siz--];
		}
	}
	output_str[i] = '\n';
	cnt_ptr = (table_size/2)-1;
	
	while(1)
	{
		delay(300);
		system("cls");
		for(i = 0; i<table_size;i++)
		{
			for(j =0, k = table_size-2;j <= k; j++, k--)
			{
				if((i == j) && (i<cnt_ptr))
				{
					matx[i][j] = output_str[i];
					matx[i][k] = '/';
				}
				else if(i == k)
				{
						matx[i][j] = '/';
						matx[i][k] = output_str[i];
				}
				else
				{
					if(j == k)
					{
						matx[i][j] = '|';
					}
					else
					{					
						if(cnt_ptr ==i)
						{
							matx[i][j] = '-';
							matx[i][k] = '-';
						}
						else
						{
							matx[i][j] = ' ';
							matx[i][k] = ' ';
						}
					}
				}
			}
			matx[i][table_size-1] = '\n'; 
		}
		for(i=0;i<table_size;i++)
		{
			for(j=0; j<table_size;j++)
			{
				printf("%c",matx[i][j]);
			}
		}
		delay(300);
		system("cls");
		for(i = 0; i<table_size;i++)
		{
			for(j =0, k = table_size-2;j <= k; j++, k--)
			{
				if((i == j) || (i == k))
				{
					if(i<cnt_ptr)
					{
						matx[i][j] = '\\';
						matx[i][k] = '/';
					}
					else if (i>cnt_ptr)
					{
						matx[i][j] = '/';
						matx[i][k] = '\\';
					}
					else 
					{
						matx[i][j] = output_str[i];
					}					
				}
				else
				{
					if(i == cnt_ptr)
					{
						matx[i][j] = '-';
						matx[i][k] = '-';
					}
					else if(j == cnt_ptr)
					{
						matx[i][j] = output_str[i];
					}
					else
					{
						matx[i][j] = ' ';
						matx[i][k] = ' ';
					}
				}
			}
			matx[i][table_size-1] = '\n'; 
		}
		for(i=0;i<table_size;i++)
		{
			for(j=0; j<table_size;j++)
			{
				printf("%c",matx[i][j]);
			}
		}	
		delay(300);
		system("cls");
		for(i = 0; i<table_size;i++)
		{
			for(j =0, k = table_size-2;j <= k; j++, k--)
			{
				if(i == k)
				{
					matx[i][j] = output_str[i];
				}
				else if(i == j)
				{
					matx[i][k] = output_str[i];
				}
				else if(i == cnt_ptr)
				{
					matx[i][cnt_ptr] = output_str[i];
				}
				else
				{
					if(j == k)
					{
						matx[i][j] = '|';
					}
					else
					{					
						if(cnt_ptr ==i)
						{
							matx[i][j] = '-';
							matx[i][k] = '-';
						}
						else
						{
							matx[i][j] = ' ';
							matx[i][k] = ' ';
						}
					}
				}
			}
			matx[i][table_size-1] = '\n'; 
		}
		for(i=0;i<table_size;i++)
		{
			for(j=0; j<table_size;j++)
			{
				printf("%c",matx[i][j]);
			}
			
		}
		delay(300);
		system("cls");
		for(i = 0; i<table_size;i++)
		{
			for(j =0, k = table_size-2;j <= k; j++, k--)
			{
				if((i == j) || (i == k))
				{
					if(i<cnt_ptr)
					{
						matx[i][j] = '\\';
						matx[i][k] = '/';
					}
					else if (i>cnt_ptr)
					{
						matx[i][j] = '/';
						matx[i][k] = '\\';
					}
					else 
					{
						matx[i][j] = output_str[i];
					}				
				}
				else{
					if(i == cnt_ptr)
					{
						matx[i][j] = output_str[j];
						matx[i][k] = output_str[k];
					}
					else if(j == cnt_ptr)
					{
						matx[i][j] = '|';
					}
					else
					{
						matx[i][j] = ' ';
						matx[i][k] = ' ';
					}
				}
			}
			matx[i][table_size-1] = '\n'; 
		}
		for(i=0;i<table_size;i++)
		{
			for(j=0; j<table_size;j++)
			{
				printf("%c",matx[i][j]);
			}
			
		}		
	}
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}