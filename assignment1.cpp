#include <bits/stdc++.h>

using namespace std;


int main()
{
 
//   #ifndef ONLINE_JUDGE
// 		freopen("input.txt","r",stdin);
// 		freopen("output.txt","w",stdout);
// #endif
int n=7;
int demo=0;

    for(int i=1;i<2*n;i++)
    {
        if(i<n+1){
            demo++;
            for(int i=demo-1;i>=0;i--){
                cout<<" ";
            }
            for(int j=demo;j<=n;j++){
                cout<<j<<" ";
            }
        }else{
            demo--;
                for(int i=demo-1;i>=0;i--){
                    cout<<" ";
                }
                for(int j=demo;j<=n;j++){
                    cout<<j<<" ";
                }
        }
        cout<<endl;
    }

 
  
}













