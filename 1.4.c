#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d", &a);
    int n=1;
   while(pow(2,n)<=a)
    {
        n++;
    }
    
    printf("%d",n-1);566;
    return 0;
}