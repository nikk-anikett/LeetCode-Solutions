//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            vector<int> cntPos,cntNeg;
            for(int i=0;i<n;i++){
                if(arr[i] < 0)
                    cntNeg.push_back(arr[i]);
                else    
                    cntPos.push_back(arr[i]);
            }
            sort(arr,arr+n);
            int j=0;
            for(int i=0; i<cntNeg.size(); i++){
                arr[i]=cntNeg[j++];
            }
            int k=j;
            j=0;
            for(int i=k; i<n; i++){
                arr[k++]=cntPos[j++];
            }
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends