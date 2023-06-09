//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    int n=S.length();
		    int fact=1;
		    for(int i=1;i<=n;i++){
		        fact*=i;
		    }
		    set<string> ans;
		    int i=0;
		    while(i<fact){
		        next_permutation(begin(S),end(S));
		        ans.insert(S);
		        i++;
		    }
		    vector<string> res(begin(ans),end(ans));
		    return res;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends