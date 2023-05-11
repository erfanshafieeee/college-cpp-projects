#include <iostream>
using namespace std;
void aval(int x);
int main()
{
    int i;
    for(i=2;i<=1000;i++)
       aval(i);
    return 0;

}
void aval(int x)
{
    int i,sw=0;
    for(i=2;i<=(x/2)&& sw==0;i++)
        if(x % i ==0)
           sw=1;
    if(sw==0)
       cout<<x<<endl;

}