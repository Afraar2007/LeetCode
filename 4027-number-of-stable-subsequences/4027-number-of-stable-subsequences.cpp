#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    const long long MOD = 1000000007LL;
    int countStableSubsequences(vector<int>& v) {
        long long e1 = 0, e2 = 0, o1 = 0, o2 = 0;
        for (int x : v) {
            if ((x & 1) == 0) { // even
                long long ne1 = (e1 + (o1 + o2 + 1)) % MOD;
                long long ne2 = (e2 + e1) % MOD;
                e1 = ne1; e2 = ne2;
            } else { // odd
                long long no1 = (o1 + (e1 + e2 + 1)) % MOD;
                long long no2 = (o2 + o1) % MOD;
                o1 = no1; o2 = no2;
            }
        }
        long long ans = (e1 + e2 + o1 + o2) % MOD;
        return (int)ans;
    }
};