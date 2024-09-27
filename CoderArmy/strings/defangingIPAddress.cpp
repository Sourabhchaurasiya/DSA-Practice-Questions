#include<bits/stdc++.h>
using namespace std;
// class Solution{
//     public:
//         string ipAddress(){
//             string address;
//             cin>>address;
//             int index=0;
//             string ans;
//             while(index<address.size()){
//                 if(address[index]=='.')
//                     ans=ans+".";
//                 else ans=ans+address[index];
//                 index++;
//             }
//             return ans;
//         }
// };

class Solution{
    public:
        string defangIPaddr(string address){
            string ans;
            int index=0;
            while(index<address.size()){
                if(address[index]=='.')ans+="[.]";
                else ans+=address[index];
                index++;
            }
            return ans;
        }
};