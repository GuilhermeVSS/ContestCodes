#include "bits/stdc++.h"

using namespace std;
const int MAXN = 1e6 + 10;
int vecA[MAXN];
int n, m;

int bbs(int current, int start, int end)
{
    int l = start, r = end;
    int ans = -1;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (vecA[mid] + current <= m)
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (vecA[l] + current <= m)
        return l;
    return ans;
}

int main()
{
    int count = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> vecA[i];
    }
    
    sort(vecA, vecA + n);
    int end = n - 1;

    for (int i = 0; i < end; i++)
    {
        int pos = bbs(vecA[i], i + 1, end);
       
        if (pos == -1)
        {
           
            break;
        }
        else if (vecA[i] + vecA[pos] <= m)
        {
            count++;
            end = pos - 1;
        }
    }

    count = count + (n - (count * 2));    
    cout << count << endl;
    return 0;
}