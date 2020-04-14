#include <iostream>
#include <set>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int a,c,b,k=0,m=0;
    cin>>c>>b;
 
    for(c;c<=b;c++)
    {
        a=c;
        k=0;
        set<int>se;
        for(int i=0;a>0;i++)
        {
            se.insert(a%10);
            a=a/10;
            k++;
        }
        int s=se.size();
        if(s==k)
        {
            cout<<c;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
