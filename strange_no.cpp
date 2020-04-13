// April Long Challange
#include <bits/stdc++.h>
using namespace std;
long findPrimes(long x){
	long count = 0;
	// O(sqrt(n))
	while(!x&1){
		x = x >> 1;
		count++;
	}
	// Lost all its even'ness in the above step
	for(int i=3; i<=sqrt(x); i+=2){
		while(x % i == 0){
			x /= i;
			count++;
		}
	}
	if(x > 2)
		count++;

	return count;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long x, k;
		cin >> x >> k;
		// Find all the prime factors of x
		long count = findPrimes(x);
		if(count >= k)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
