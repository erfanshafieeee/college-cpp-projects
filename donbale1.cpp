#include <iostream>
using namespace std;
int main(){
    float n,x,i,m,f=1,sum=0;
    cin>>n>>x;
    m=x;
    for(i=1;i<=n;i++)
    {
        sum=sum+(m/f);
        m=m*(x*x);
        f=f*(2*i)*((2*i)+1);
    }
    cout<<sum;
    return 0;
}