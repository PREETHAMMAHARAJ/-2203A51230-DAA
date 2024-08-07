#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,temp,n;
    printf("enter number of elements");
    scanf("%d",&n);
    int a[n];
    printf("array elements are");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
	for(i=1;i<n;i++){
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	for(i=0;i<n;i++)
     printf("%d,",a[i]);
     
return 0;
}

