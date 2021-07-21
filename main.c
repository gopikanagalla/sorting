#include<stdio.h>
#include<time.h>
#include"header.h"
void printarray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
void compare(int arr[],int n)
{
	int tarr[50]={0},i;
	for(i=0;i<n;i++)
	{
		tarr[i]=arr[i];
		if(arr[i]!=tarr[i])
			break;
	}
	if(i<5)
		printf("failed\n");
	else
		printf("success\n");
}
int main()
{
	int arr[50],n,i,arr1[50];
	double timespent;
	time_t begin,end;
	printf("enter the no.of elements:");
	scanf("%d",&n);
	printf("enter %d integers:",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
		arr1[i]=arr[i];
	for(i=0;i<5;i++)
	{
		switch(i)
		{
			case 0:timespent=0.0;
			       begin=clock();
			       bubble_sort(arr,n);
			       printf("sorted elements incase of bubble sort\n");
			       printarray(arr,n);
			       end=clock();
			       compare(arr1,n);
			       timespent=((double)(end-begin))/CLOCKS_PER_SEC;
			       printf("the time taken for bubblesort in sec:%f\n",timespent);
			       printf("\n");break;	
			case 1:timespent=0.0;
                               begin=clock();
                               insertionsort(arr,n);
			       printf("sorted elements incase of insertionsort\n"); 
                               printarray(arr,n);
                               end=clock();
			       compare(arr1,n);
                               timespent=((double)(end-begin))/CLOCKS_PER_SEC;
                               printf("the time taken for insertionsort in sec:%f\n",timespent);
			       printf("\n");break;
			case 2:timespent=0.0;
                               begin=clock();
                               selectionSort(arr,n);
                               printf("sorted elements incase of selectionsort\n");
                               printarray(arr,n);
                               end=clock();
			       compare(arr1,n);
                               timespent=((double)(end-begin))/CLOCKS_PER_SEC;
                               printf("the time taken for selectionsort in sec:%f\n",timespent);
			       printf("\n");break;
			case 3:timespent=0.0;
                               begin=clock();
                               mergesort(arr,0,n-1);
                               printf("sorted elements incase of mergesort\n");
                               printarray(arr,n);
                               end=clock();
			       compare(arr1,n);
                               timespent=((double)(end-begin))/CLOCKS_PER_SEC;
                               printf("the time taken for mergesort in sec:%f\n",timespent);
			       printf("\n");break;
			case 4:timespent=0.0;
                               begin=clock();
                               quicksort(arr1,0,n-1);
                               printf("sorted elements incase of quicksort\n");
                               printarray(arr,n);
                               end=clock();
			       compare(arr1,n);
                               timespent=((double)(end-begin))/CLOCKS_PER_SEC;
                               printf("the time taken for quicksort in sec:%f\n",timespent);
                               printf("\n");break;

		}
	}
	return 0;
}	


