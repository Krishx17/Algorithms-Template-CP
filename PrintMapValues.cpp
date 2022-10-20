#include <bits/stdc++.h>
using namespace std;
int main(){ 
    map<int, int> skills;
    map<int, int>::iterator itr;
   for (itr = skills.begin(); itr != skills.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    return 0;
}