#include<bits/stdc++.h>
using namespace std;
/*Qualifying to Pre-Elimination
###Read problems statements in Hindi ,Mandarin chinese , Russian, Vietnamese and Bengali as well.
Snackdown 2019 is coming! There are two rounds (round A and round B) after the qualification round. From both of them, teams can qualify to the pre-elimination round. According to the rules, in each of these two rounds, teams are sorted in descending order by their score and each team with a score greater or equal to the score of the team at the 
K=1500-th place advances to the pre-elimination round (this means it is possible to have more than K qualified teams from each round in the case of one or more ties after the 
K-th place).
Today, the organizers ask you to count the number of teams which would qualify for the pre-elimination round from round A for a given value of K (possibly different from 
1500). They provided the scores of all teams to you; you should ensure that all teams scoring at least as many points as the 
K-th team qualify.*/

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end(),greater<>());
        int score=v[k-1];
        int count=0;
        for(int i=0;i<n;i++){
            if(v[i]>=score)count++;
            else break;
        }
        cout<<count<<endl;
    }
}