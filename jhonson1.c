#include <stdio.h>
int main() 
{
	int a[50],n,i,j,temp;
	printf("Enter number of packages for delivery :");
	scanf("%d",&n);
	printf("Enter time to reach destination :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
	   for(j=0;j<n-1-i;j++){
          if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
       }
    }
printf("classifed packages based on their destination\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}
