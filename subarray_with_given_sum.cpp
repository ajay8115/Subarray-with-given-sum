// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

vector<int> subarraySum(int a[], int n, long long s)
{
    int l = 0, r = 0;
    long long sum = 0;

    vector<int> v;
    while (l < n and r < n)
    {
        if (sum < s)
        {
            sum += a[r];
        }
        if (sum == s)
        {
            v.push_back(l + 1);
            v.push_back(r + 1);
            
            return v;
        }
        else
        {
            while (sum > s and l <= r)
            {
                sum -= a[l];
                l++;
                if (sum == s)
                {
                    v.push_back(l + 1);
                    v.push_back(r + 1);
                    return v;
                }
            }
        }
        r++;
    }

    v.push_back(-1);
    return v;
}