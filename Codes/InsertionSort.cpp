#include <bits/stdc++.h>
using namespace std;
vector<int>wektor;
int main ()
{
    ios_base::sync_with_stdio(false);
    std::cout.sync_with_stdio(false);
    cin.tie(0);
    int n,a, yet;
    cin >> n >> a;
    wektor.push_back(a);
    for (int i=1; i<n; i++)
    {
        cin >> a;
        wektor.push_back(a);
        yet=i;
        while (yet>0 && wektor[yet-1]>a)
        {
            swap(wektor[yet], wektor[yet-1]);
            yet--;
        }
    }
    for (int i=0; i<wektor.size(); i++)
    {
        cout << wektor[i] << " ";
    }
}