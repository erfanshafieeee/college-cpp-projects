#include <iostream>
using namespace std;
int main(){
    int x,y=0,t,symmetric;
    while(symmetric!=0)
    {
        cout<<"adad khod ra vared konid"<<endl;
        cin>>x;
        t=x;
        while(x>0)
        {
            y=y*10+x%10;
            x=x/10;
        }
        if (y==t)
           symmetric=0;
        else{
            cout<<"adad shoma motegharen nabood"<<endl;
            y=0;
        }
    }
    cout<<"payan barname";
    return 0;
}