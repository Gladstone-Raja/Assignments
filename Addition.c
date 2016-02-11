#include <stdio.h>

int add(int a,int b,int c)
{
    return(a+b+c);
}
int main()
{
    int a,b,c,sum,arr[3];
    
    printf("\nUsing variables :");
    printf("\nEnter 3 no.s :");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    printf("\nThe sum is : %d",sum);

    
    printf("\nUsing array :");
    printf("\nEnter the elements of array :");
    scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
    sum=arr[0]+arr[1]+arr[2];
    printf("\nThe sum is : %d",sum);

    
    printf("\nUsing function :");
    printf("\nEnter 3 no.s :");
    scanf("%d%d%d",&a,&b,&c);
    sum=add(a,b,c);
    printf("\nThe sum is : %d",sum);
    
	return 0;
}

