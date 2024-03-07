#include <bits/stdc++.h>
using namespace std;
short tab[105][105];

/*
Write a program that, for two sequences of lowercase English alphabet letters with a length of at most 100,
calculates the length of their longest common subsequence.

INPUT
Two text sequences, as described.

OUTPUT
The length of the longest common subsequence of the given sequences.
*/

int main()
{
    string s1,s2;
    int d1,d2;
    cin >> s1 >> s2;
    d1 = s1.size();
    d2 = s2.size();
    s1 = "^" + s1;
    s2 = "^" + s2;
    for (int i=1; i<=d1; i++)
    {
        for (int j=1; j<=d2; j++)
        {
            if (s1[i] == s2[j])
            {
                tab[i][j] = tab[i-1][j-1]+1;
            }
            else
            tab[i][j] = max(tab[i][j-1],tab[i-1][j]);
        }
    } cout << tab[d1][d2];
}