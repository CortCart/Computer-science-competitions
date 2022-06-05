#include<iostream>
#include <stdio.h>
#include <vector>

using namespace std;
int n, ml;
vector<int> vec1;
vector<int> vec2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scanf("%d", &n);
    n -= 1;
    for (int i = 0; i < n / 2; i++)
    {
        int num=0;
        scanf("%d", &num);
        vec1.push_back(num);
    }
    for (int i = 0; i < n / 2; i++)
    {
        int num=0;
        scanf("%d", &num);
        vec2.push_back(num);
    }
    ml = 1001;
        for (int i = 0; i < n/2;i++)
        for (int j = 0; j < n/2;j++)
        {
            if (vec1[i] == vec2[j])
            {
                if (i + j < ml)
                {
                    ml = i+1 + j+1;
                }
            }
        }
    if(ml==1001)ml=0;
        printf("%d \n", ml);
}
