#include <stdio.h>
void commonInArray(int a[],int b[],int,int);
int main(void) {
    
    int a[]={5,1,4,2,3};
    int b[]={9,8,7,6,5,4};
    commonInArray(a,b,5,6);
	
	return 0;
}

void commonInArray(int a[],int b[],int m,int n)
{
    int s=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            s++;
            (a[i]==b[j])?printf("common element is%d\t\n",a[i]): printf("no common\n");  
        }
    }
    printf("%d",s);
}

