#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int,string>> p = {{80,"Ashish"},
                            {99, "Krishnesh"},
                            {56, "raghav"},
                            {65, "Ajay"},
                            {70, "Rohit"}};
    sort(p.begin(), p.end());
    // for(auto var : p){
    //     cout << var << " ";
    // }
    for(int i = 0; i < p.size(); i++)
{
     cout << p[i].first << ", " << p[i].second << endl;
}
    return 0;
}