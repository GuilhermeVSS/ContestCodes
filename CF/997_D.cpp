#include "bits/stdc++.h"
 
using namespace std;
 
const int MAXN = 1e6 + 10;
const int MAXS = 110;
typedef long long unsigned llu;
llu resp[MAXS];
llu num[MAXS];

int n, pos;
 
void dfs (llu x){
	for (int i = 0; i < n; i++){
		if(x*2 == num[i] || (x%3 == 0 && x/3 == num[i])){
			resp[pos] = num[i];
			pos++;
			dfs(num[i]);
		}
	}
}
 
int main ()
{
	int cont = 0;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++){
		scanf ("%llu", &num[i]);
	}
 
	for (int i = 0; i < n; i++){
				resp[0] = num[i];
				pos = 1;
				dfs(num[i]);
				if(pos == n){
					for(int i = 0; i < pos; i++)
						printf("%llu ", resp[i]);
					putchar('\n');
					break;
				}
	}
 
	return 0;
}