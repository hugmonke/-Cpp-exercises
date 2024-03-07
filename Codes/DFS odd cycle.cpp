#include <iostream>
#include <stdio.h>
#include<algorithm>
#include <queue>
#include <vector>
#define limit 1000007
using namespace std;
vector<int> tab[limit];
int graf[limit];
int blu=1;
int red=2;
int nieparzysty = false;

/*
The first number in the input is the number of tests, denoted as t. Each of the t tests looks as follows:
n,m - in the first line, two numbers are provided; n - the number of vertices; m - the number of edges.
The next m lines provide the edges in the form of pairs (a,b).
Assumptions:
1 ≤ n ≤ 10^6
0 ≤ m ≤ 10^6
1 ≤ a,b ≤ n
*/
void dfs (int a, int matka)
{
    if(graf[matka] == blu){
        graf[a]= red;
    }
    else graf[a]= blu;

    for (int i = 0; i < tab[a].size(); i++)
    {
        if (graf[tab[a][i]])
        {
            if(tab[a][i] != matka && graf[a] == graf[tab[a][i]])
                nieparzysty = 1;
        }
        if (!graf[tab[a][i]])
        {
            dfs(tab[a][i],a);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    int a,b, ile,zad,wpi;
    cin >> t;


    for (int i = 0; i < t; i++)
    {
        cin >> zad >> wpi;
        //zerowanie tablicy i wektora------
        for (int i = 1; i <= zad+1; i++)
        {
            graf[i]=0;
        }
        for (int i = 1; i <= zad+1; i++)
        {
            tab[i].clear();
        }
        //----------------------------------
        for (int i = 1; i <= wpi; i++)
        {
            cin >> a >> b;
            tab[a].push_back(b);
            tab[b].push_back(a);
        }
        graf[0] = 2;
        dfs(1,0);
        for (int i = 2; i <=zad; i++){
            if (!graf[i])
            {
                dfs(i,0);
            }
        }
        if (nieparzysty)
            cout << "TAK" << "\n";
        else cout << "NIE"<< "\n";
        nieparzysty = 0;
    }
}
