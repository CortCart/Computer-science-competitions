#include<iostream>
#include<stdio.h>

using namespace std;
long long int k ,n,br=2, f1=1, f2=1, f3;

int broi(long long a)
{
    int h=0;
    while(a!=0)
    {
               a=a/10;
               h++;
    }
    return h;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   scanf("%i", &n);
   if(n==1)printf("%d\n",1);
   else
   {

    while(n>br)
    {
        n-=br;
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        br=    broi(f3);
    }

    k=br-n;
    for(int i = 0; i < k; i++)
    {
        f3 /=10;
    }
    printf("%i\n",f3 %10);
   }
}
