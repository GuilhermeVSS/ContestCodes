#include "bits/stdc++.h"
 
using namespace std;
const int MAXN = 1e6 + 10;
char frase[MAXN];
char gram[3];
char resp[3];
 
int main()
{
	int n;
	scanf("%d", &n);
	int cont = 0 , max = 0;
	scanf("%s", frase);	
	for(int i = 0; i < n-1; i++){
		gram[0] = frase[i];
		gram[1] = frase[i+1];
		for(int j = 0; j < n-1; j++){
			if(frase[j] == gram[0] && frase[j+1] == gram[1]) cont++;
		}
		if(cont >= max){
			 max = cont;
			resp[0] = gram[0];
			resp[1] = gram[1];
			resp[2] = '\0';
		}
		cont = 0;
	
	}
	printf("%s\n", resp);
	return 0;
}