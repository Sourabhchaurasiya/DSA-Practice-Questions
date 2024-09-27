/*There are n children who want to go to a Ferris wheel, and your task is to find a gondola for each child.
Each gondola may have one or two children in it, and in addition, the total weight in a gondola may not exceed x. You know the weight of every child.
What is the minimum number of gondolas needed for the children?
Input
The first input line contains two integers n and x: the number of children and the maximum allowed weight.
The next line contains n integers p_1,p_2,\ldots,p_n: the weight of each child.
Output
Print one integer: the minimum number of gondolas.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    return 0;
}
const int maxn=2e5+10;
int n,x,p[maxn],i,j,ans;
bool have_gondola_yet[maxn];
void solve(){
    cin>>n>>x;
    for(int i=0;i<n;i++)
        cin>>p[i];
    sort(p,p+n);
    i=0;j=n-1;
    while(i<j){
        if(p[i]+p[j]>x){
            j--;
        }
        else{
            ans++;
            have_gondola_yet[i]=have_gondola_yet[j]=1;
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++)
        ans+=have_gondola_yet[i]==0;
    cout<<ans<<"\n";
}