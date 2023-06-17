#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {
    int i,s=0;
    int n=arr.size();
    for(i=0;i<n;i++)
    {
        s+=arr[i];
    }
    int ls=0;
    for(i=0;i<n;i++)
    {
        s-=arr[i];
         if(s==ls) return i;
        ls+=arr[i];
       // if(s==ls) return i;
    }
    return -1;
}
