#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,temp,x,a,b,num;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);   
    }
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>num;
        auto low=lower_bound(v.begin(),v.end(),num);
        if(v[low-v.begin()]==num){
            cout<<"Yes "<<low-v.begin()+1<<endl;          
        }
        else{
            cout<<"No "<<low-v.begin()+1<<endl;
        }
    }
    
    return 0;
}