#include<iostream>
#include<stdio.h>
using namespace std;
char str[105];
int m, n = 0, t = 0, sum = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        bool isFull = true;
        cin>>str;
        for (int j = 0; j < m; j++)
        {
            isFull = isFull & (str[j] == '*');
        }
        if (isFull)t++;
        else
        {
            sum += (t * (t + 1)) / 2;
            t = 0;
        }
    }

    sum += t * (t + 1) / 2;


    printf("%i\n", sum);
}


