// April Long Challange
#include<bits/stdc++.h>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long n, oc = 0, k=1, s = 0;
		cin >> n;
		vector<long> ar(n), v;
		vector<bool> visited(n, false);
		bool f = false;
		for(int i=0; i<n; i++){
			cin >> ar[i];
			// If 4 is present
			if(ar[i] % 4 == 0 && ar[i])
				f = true;
		}
		
		// For Odd Count
		for(int i=0, k=0; i<n; i++){
			if(ar[i]&1 && ar[i]){
				k++;
				if(i == n-1)
					oc += ((k*(k+1))/2);	
			}
			else{
				oc += ((k*(k+1))/2);
				k=0;
			}
		}
		v.pb(0);
		bool flag = false;
		for(int i=0, j; i<n; i++){
			if(ar[i] % 4 == 0){
				v.pb(i+1);
				k = 1;
				continue;
			}
			if(ar[i] % 2 == 0){
				k = 1, j = i;
				int x;
				for(x=i; x<n; x++){
					if(ar[x] % 4 == 0){
						v.pb(x+1); k=1;
						flag = false;
						break;
					}
					k *= ar[x];
					if(k%4 != 0){
						if(visited[x] == false){
							visited[x] = true;
							v.pb(v.back());	// Keep updating last value
						}
					}
					else{
						v.pb(j+1);	// Formed 4
						cout << x << " " << ar[x] << endl;
						visited[x] = true;
						--x;
						flag = true;
						break;
					}
				}
				i = x;
			}
			else{
				v.pb(v.back());
			}
		}
		// Accumulate result
		for(int i=0; i<v.size(); i++){
			cout << v[i] << " ";
			s += v[i];
		}
		// Print results
		cout << oc + s << endl;
	}
}
