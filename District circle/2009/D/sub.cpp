#include<iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>


using namespace std;
char input[82];

int Min[82];
int Max[82];
int result[82];
int n, a,t;

int comp(int const& i, int const& j) {
    return i > j;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scanf("%s", input);
	//cin>>input;
	n = strlen(input);
    a = sizeof(input) / sizeof(input[0]);
    for (int i = 0; i < n; i++)
    {
        Max[i] = input[i] - '0';
        Min[i] = input[i] - '0';
    }
    sort(Min, Min + n);
    sort(Max, Max+n , greater<int>());
    for (int i = n; i >= 0; i--)
    {
        if (Max[i] < Min[i])Max[i] += 10, Max[i - 1]--;
       result[i]= Max[i] - Min[i];
    }
    t = 0;
    for (int i = 0; i < n; i++) if (result[i] != 0)t = 1;
    if (t == 1)  for (int i = 0; i < n; i++)printf("%i", result[i]);
    else printf("%i",0);

    printf("\n");
}
