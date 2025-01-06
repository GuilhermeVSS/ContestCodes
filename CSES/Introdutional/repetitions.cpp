#include "bits/stdc++.h"

using namespace std;

int main()
{

    string phrase;
    cin >> phrase;

    int count = 1;
    int longestSequenceSize = 0;
    for (int i = 1; i < phrase.size(); i++)
    {
        if (phrase[i] == phrase[i - 1]) count++;
        else {
            longestSequenceSize = max(longestSequenceSize, count);
            count = 1;
        }
    }

    cout << max(longestSequenceSize, count) << endl;

    return 0;
}