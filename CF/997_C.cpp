#include "bits/stdc++.h"
 
using namespace std;
int cont;

int main()
{	
	int n, k, aux;
	scanf("%d %d", &n, &k);
	int num[n];
	for(int i = 0; i < n; i++) scanf("%d", &num[i]);
	sort(num, num+n);
	if(k == 0 && num[0] == 1){
		printf("-1\n");
		return 0;
	}
	if(k == 0 && num[0] > 1){
		printf("1\n");
		return 0;
	}
	if(num[k]!= num[k-1]){
		printf("%d\n", num[k-1]);
		return 0;
	}
	else printf("-1\n"); 
	return 0;
}