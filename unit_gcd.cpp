// April Long Challange
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, i=1;
		cin >> n;
		int d = n/2;
		if(n == 1){
			cout << 1 << endl;
			cout << 1 << " " << 1 << endl; 
			continue;
		}
		if(n == 2){
			cout << 1 << endl;
			cout << 2 << " " << 1 << " " << 2 << endl;
			continue;
		}

		cout << d << endl;
		
		if(n&1){
			d--;
			cout << 3 << " " << i << " " << i+1 << " " << n << endl;  
			// If d is Odd
			++i; ++i;
			while(d--){
				cout << 2 << " " << i << " " << i+1 << endl;
				i+=2; 
			}
		}
		else{
			while(d--){
				cout << 2 << " " << i << " " << i+1 << endl;
				i+=2;
			}
		}
	}
}
