#include <iostream>
using namespace std;
float fact(float k);
float pow(float k,float l);
int main(){
    float x,n,sum=0;
    int i;
    cin>>n>>x;
    n=n*2;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
           sum=sum+(pow(x,i)/fact(i));
    }
    cout<<sum;
    return 0;
}
float fact(float k)
{
    float i,f=1;
    for(i=1;i<=k;i++)
      f=f*i;
    return f;
}
float pow(float k,float l)
{
    float i,p=1;
    for(i=1;i<=l;i++)
      p=p*k;
    return p;
}