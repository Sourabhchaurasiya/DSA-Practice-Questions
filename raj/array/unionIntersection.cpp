#include<bits/stdc++.h>
using namespace std;

//UNION
vector<int>sortedArray(vector<int>a,vector<int>b){
    int n1=a.size();
    int n2=b.size();
    set<int>st;
    for(int i=0;i<n1;i++)st.insert(a[i]);
    for(int i=0;i<n2;i++)st.insert(b[i]);
    vector<int>temp;
    for(auto it:st)temp.push_back(it);
}
//Optimal
vector<int>sortedArray(vector<int>a,vector<int>b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int>unionArr;
    while(i<n1&&j<n2){
        if(a[i]<b[j]){
            if(unionArr.size()==0||unionArr.back()!=a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArr.size()==0||unionArr.back()!=b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
        while(i<n1){
            if(a[i]<b[j]){
            if(unionArr.size()==0||unionArr.back()!=a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        }
        while(j<n2){
            if(unionArr.size()==0||unionArr.back()!=b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    return unionArr;
}
//optimal
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>m(nums1.begin(),nums1.end());
        vector<int>res;
        for(auto a:nums2){
            if(m.count(a)){
                res.push_back(a);
                m.erase(a);
            }
        }
        return res;
    }

//INTERSECtion
vector<int>findArrayIntersection(vector<int>&A,int n,vector<int>&B,int m){
    vector<int>ans;
    int vis[m]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i]==B[j]&&vis[j]==0){
                ans.push_back(A[i]);
                vis[j]=1;
                break;
            }
            if(B[j]>A[j])break;
        }
    }
    return ans;
}
//Optimal 2-pointer Approach
vector<int>findArrayIntersection(vector<int>&A,int n,vector<int>&B,int m){
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n&&j<m){
        if(A[i]<B[j])i++;
        else if(A[i]>B[j])j++;
        else {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}