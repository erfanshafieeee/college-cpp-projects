#include <iostream>
using namespace std;
int main()
{
    int i , j=0,k=0 , n , b;
    int mosbat[100];
    int manfi[100];
    cout<<"chand adad mikhahid vared konid??";
    cin>>n;
    cout<<"tavajoh:in barname 0 ra mosbat dar nazar migirad"<<"\n"<<"adad khod ra vared konid:"<<"\n";
    for(i=0;i<n;i++)
        {
            cin>>b;
            if(b>=0)
                {
                    mosbat[j]=b;
                    j=j+1;
                }
                
            else
                {
                    manfi[k]=b;
                    k=k+1;
                }
        }
    cout<<"adad mosbat:"<<"\n";
    for(i=0;i<j;i++)
        cout<<mosbat[i]<<"\t";
    cout<<"\n";
    cout<<"adad manfi:"<<"\n";
    for(i=0;i<k;i++)
        cout<<manfi[i]<<"\t";
}