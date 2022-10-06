// Problem Link: https://www.hackerrank.com/challenges/cpp-sets/problem
// Langugae: C
// User: mahmoud_gamal_a3

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{

        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        int iCount;
        set<int> se;
        cin >> iCount;
        for (int i = 0 ; i < iCount; i++)
        {
            int type, query;
            cin >> type >> query;
            switch (type)
            {
                case 1:
                    se.insert(query);
                    break;
                case 2:
                    se.erase(query);
                    break;
                case 3:
                    cout << (se.find(query) == se.end() ? "No\n" : "Yes\n");
                    break;
            }
        }  






       return 0;
}