#include <iostream>
using namespace std;

/*
Given is a sequence of n integers : a1, a2, ..., an.For each position i = 1, 2, ..., n, calculate the minimum value to the right of that position(including position i).
More precisely, output n numbers, where the i - th number is min{ ai, ai + 1, ..., an }.

INPUT
The first line of standard input contains a single natural number n(1≤n≤106).The second line contains n integers ranging from <-109, 109>, separated by a single space.

OUTPUT
The output should consist of n numbers, where the i - th number is min{ ai, ai + 1, ..., an }.
*/

int tab[1000000];
int tab2[1000000];

int main()
{

    int n,b;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        cin >> tab[i];
    }
        int s=tab[n-1];
    for (int i=0; i<n; i++)
    {
        if (tab[n-1-i] < s)
        {
            s = tab[n-1-i];
        }
        tab2[n-1-i] = s;
    }
    for (int i = 0; i < n; i++)
    {
        cout << tab2[i] << " ";
    }




}
