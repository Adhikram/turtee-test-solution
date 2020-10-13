#include <bits/stdc++.h>

using namespace std;


int main()
{
 
//   #ifndef ONLINE_JUDGE
// 		freopen("input.txt","r",stdin);
// 		freopen("output.txt","w",stdout);
// #endif
string str1="XYYZXZYZXXYZ";
string str2="XYZ";

    int start=0,S=str2.size();
    while(start+S<=str1.size()){
        string demo=str1.substr(start,S);
        if(demo.find(str2[0])!=string::npos&& demo.find(str2[1])!=string::npos && demo.find(str2[2])!=string::npos){
            cout<<"substring "<<demo<<" present at index "<<start<<endl;
        }
        start++;
    }
 
  
}













