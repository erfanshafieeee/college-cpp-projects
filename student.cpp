#include<iostream>
using namespace std;
struct student
{
    string name ;
    string family;
    string stdno;
    string natcode;
    float course[5];
    int unit[5];
    float avarage;
}a[5],b;
void read();
void sort();
void write();
void mashroot();
void momtaz();
int main()
{
    read();
    sort();
    write();
    mashroot();
    momtaz();
}
void read()
{
    float sum1=0,sum2=0;
    for(int i=0;i<20;i++)
    {
        sum1=0;
        sum2=0;
        cout<<"enter your name"<<":"<<"\n";
        cin>>a[i].name;
        cout<<"enter your family"<<":"<<"\n";
        cin>>a[i].family;
        cout<<"enter your student number"<<":"<<"\n";
        cin>>a[i].stdno;
        cout<<"enter your national code number"<<":"<<"\n";
        cin>>a[i].natcode;
        for(int j=0;j<5;j++)
            {
                cout<<"Enter the grade of lesson"<<j+1<<"\n";
                cin>>a[i].course[j];
                cout<<"Enter the number of units of lesson"<<j+1<<"\n";
                cin>>a[i].unit[j];
                sum1=sum1+a[i].course[j]*a[i].unit[j];
                sum2=sum2+a[i].unit[j];
            }
        a[i].avarage=sum1/sum2;
    }
}
void sort()
{
    for(int i=1;i<20;i++)
        for(int j=0;j<20-i;j++)
        {
            if(a[j].avarage<a[j+1].avarage)
            {
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;
            }
        }
}
void write()
{
    for(int i=0;i<20;i++)
        cout<<a[i].name<<" "<<a[i].family<<":"<<a[i].avarage<<"\n";
}
void mashroot()
{
    cout<<"mashroti ha"<<"\n";
    for(int i=0;i<20;i++)
        if(a[i].avarage<12)
            cout<<a[i].name<<" "<<a[i].family<<":"<<a[i].avarage<<"\n";
}
void momtaz()
{
    cout<<"motaz ha"<<"\n";
    for(int i=0;i<20;i++)
        if(a[i].avarage>=17)
            cout<<a[i].name<<" "<<a[i].family<<":"<<a[i].avarage<<"\n";
}
//By Erfan Shafiee