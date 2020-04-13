#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n;
		vector<int> b;
		for(int i=0; i<n; i++){
			cin >> k;
			if(k)   b.push_back(i+1);
		}
		 
		if(b.size() == 1){
	        cout << "YES" << endl;
	       continue;
		}
	        
		bool flag = false;
		for(int i=1; i<b.size(); i++){
			int d = b[i] - b[i-1];
			if(d < 6){
				cout << "NO" << endl;
				flag = true;
				break;
			} 
		}
		if(!flag)
		    cout << "YES" << endl;
	}
}
