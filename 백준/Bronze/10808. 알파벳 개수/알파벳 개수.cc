#include <iostream>
#include <string>
using namespace std;


int main(void)
{
    //a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z
    int arr[26] ={0,};
    string s;
    cin >> s;

    for(auto& it : s)
    {
        for(int i = 0; i < 26; ++i)
        {
            if(it == ('a' + i))
                arr[i]++;
        }
    }
    for(int i =0; i< 26;++i)
    {
        cout << arr[i] << " ";
    }
}