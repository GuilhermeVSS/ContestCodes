#include "bits/stdc++.h"

using namespace std;
const int MAX_N = 1e3 + 10;
int virus[MAX_N];
int n;
int q;

int main()
{
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++) {
            cin >> virus[i];
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (virus[j + 1] < virus[j]) {
                    int aux = virus[j + 1];
                    virus[j + 1] = virus[j];
                    virus[j] = aux;
                }
            }
        }

        int sum = 0;
        for (int i = 0; i < n/2; i++) {
            sum += (virus[n - i - 1] - virus[i]);
        }

        cout << sum << endl;
    }

    return 0;
}