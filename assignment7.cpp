#include <stdio.h>

int fact(int n)
{
    int facto = 1;
    for(int i=1; i<=n; i++)
    {
        facto *= i;
    }
    return facto;
}
int len(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
}



int main()
{
    int x,l;
    printf("\nEnter the number : ");
    scanf(" %d",&x);
    l = len(x);
    int temp = x;
    int sum=0;
    for(int i=0; i<l; i++)
    {
        int a = temp%10;
        sum += fact(a);
        temp/=10;
    }
    if(sum == x)
    {
        printf("This is a strong number ");
    }
    else
    {
        printf("Not a strong number");
    }
    
}


