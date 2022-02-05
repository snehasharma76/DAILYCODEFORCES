#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t ;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    int ans = max(min(a,b)*2, max(a,b));
		cout<< ans*ans <<endl;
	    
	}
	return 0;
}
