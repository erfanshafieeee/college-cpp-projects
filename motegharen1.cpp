#include <iostream>
using namespace std;
int maghloob(int x);
int main(){
    int x,result=0,symmetric=1;
    while(symmetric!=0)
    {
        cout<<"adad khod ra vared konid"<<endl;
        cin>>x;
        result=maghloob(x);
        if(result==x)
           symmetric=0;
        else
           cout<<"adad shoma motegharen nabood"<<endl;
    }
    cout<<"payan barname";
    return 0;
}
int maghloob(int x){
    int y=0;
    while(x>0)
    {
        y=y*10+x%10;
        x=x/10;
    }
    return y ;
}