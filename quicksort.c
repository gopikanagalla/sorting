#include"header.h"
int partition(int a[],int l,int u)
{
	int v,i,j,temp;
	v=a[l];
	i=l;
	j=u+1;
	do
	{
		do
			i++;
		while(a[i]<v&&i<=u);
		do
			j--;
		while(v<a[j]);
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}while(i<j);
	a[l]=a[j];
	a[j]=v;
	return j;
}
void quicksort(int a[],int l,int u)
{
	int j;
	if(l<u)
	{
		j=partition(a,l,u);
		quicksort(a,l,j-1);
		quicksort(a,j+1,u);
	}
}