// April Long Challange
#include <stdio.h>
#include<stdlib.h>
#define mod 1000000007
int cmp(const void *a,const void *b) {
long int *x = (long int *) a;
long int *y = (long int *) b;
return *y - *x;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		long profit = 0, k;
		scanf("%d", &n);
		long ar[n];
		for(int i=0; i<n; i++)
			scanf("%ld", &ar[i]);
		qsort(ar, n, sizeof(*ar), cmp);
		for(int i=0; i<n; i++){
			profit += ((ar[i] - i) > 0 ? (ar[i] - i) : 0);
			profit = profit % mod;
		}

		printf("%ld\n", profit);
	}
    return 0;
}
