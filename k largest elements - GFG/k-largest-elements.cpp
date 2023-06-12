//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int> result;
	    for(int i=0; i<n; i++) {
	        result.push_back(arr[i]);
	    }
	    sort(result.begin() , result.end());
	    reverse(result.begin(), result.end());
	    vector<int> temp;
	    for(int i=0; i<k; i++) {
	        temp.push_back(result[i]);
	    }
	    return temp;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends