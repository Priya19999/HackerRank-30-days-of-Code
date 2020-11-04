#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n;
    
    cin>>t;
    string arr[1000];
   for(int j=0;j<t;j++)
    {
        string s1,s2;
        string s;
        cin>>s;
    
        for(int i=0;i<s.size();i++)
        {
            if( i%2==0)
            {
                s1+=s[i];
            }
            else{
                s2+=s[i];
            }
        }
        cout<<s1<<" "<<s2<<endl;        
    }
    return 0;
}

