#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,i,j,k,l,temp;
    
    cin>>n>>q;
    
    vector<vector<int>> v(n);
    for(int l=0;l<n;l++){
        cin>>k;
        
        for(int j=0;j<k;j++){
            cin>>temp;
            v[l].push_back(temp);
        }
    }
    
    for(int l=0;l<n;l++){      
            cin>>i>>j;
            cout<<v[i].at(j)<<endl;
    }
    return 0;
}