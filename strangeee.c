#include <stdio.h>
#include <stdlib.h>

long long int maximum(long long int arr[],long long int n,long long int m)
{
    long long int r;
    r=arr[n];
    for (long long int i = n; i <=m; i++)
    {
        if(arr[i]>r)
        {
            r=arr[i];
        }
    }
    return r;
}
long long int sum(long long int arr[],long long int n,long long int m)
{
    long long int sum=0;
    for (long long int i = n; i <=m; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
long long int gcd(long long int a,long long int b)
{
    if (a==0)
        return b;
    return abs(gcd(abs(b)%abs(a),abs(a)));
}
long long int find_GCD(long long int arr[],long long int n,long long int m)
{
    long long int result=arr[n];
    for (long long int i=n+1;i<=m;i++)
    {
        result=gcd(abs(arr[i]),abs(result));
        if(result==1)
        {
        return 1;
        }
    }
    return result;
}
 long long int function(long long int x,long long int y,long long int z)
{
    long long int p;
    p=x*(y-z);
    return p; 
}
int main()
{
    unsigned short int k;
    long long int x,f,g,u,v;
    scanf("%hu",&k);
    long long int arr[50001];
    for(int i=0;i<k;i++)
    {
        scanf("%ld",&arr[i]);
    }
    f=function(arr[0],arr[0],arr[0]);
    for(long long int i=0;i<k;i++)
    {
        for(long long int j=i;j<k;j++)
        {
            x=find_GCD(arr,i,j);
            if(x<0)
            {
                x=-x;
            }
            u=sum(arr,i,j);
            v=maximum(arr,i,j);
            g=function(x,u,v);
            if(g>f)
            {
                f=g;
            }
        }
    }
    printf("%ld",f);
    return 0;
}
