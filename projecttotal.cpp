#include <iostream>
#include <string.h>
using namespace std;
char list[5][25]={};
char extra_list[5][25]={};
char name[1][10]={};
int main()
{
    void show();
    int i,j,codei,codej,a,darkhast;
    cout<<"jomalat khod ra vared konid :"<<"\n";
    for(i=0;i<5;i++)
        gets(list[i]);
    for(i=0;i<5;i++)
        strcpy(extra_list[i],list[i]);
    cout<<"\n";
    while(darkhast!=0)
    {
        cout<<"choose your option :"<<"\n";
        cout<<"ADD"<<":"<<"0"<<"\n";
        cout<<"REMOVE"<<":"<<"1"<<"\n";
        cout<<"FIND"<<":"<<"2"<<"\n";
        cout<<"EXIT"<<":"<<"3"<<"\n";
        cin>>a;
        switch(a)
        {
            case 0:
                cout<<"kalamee ke mikhahid add konid ra vared konid:"<<"\n";
                cin>>name[0];
                cout<<"mahal add ra vared konid"<<"\n";
                cin>>codei>>codej;
                for(i=0;i<codej-1;i++)
                    extra_list[codei-1][i]=list[codei-1][i];
                i=codej;
                for(j=0;j<strlen(name[0]);j++)
                {
                    extra_list[codei-1][i]=name[0][j];
                    i++;
                }
                for(i=codej+strlen(name[0]);i<25;i++)
                    extra_list[codei-1][i]=list[codei-1][i-strlen(name[0])];
                show();
            break;
            case 1:
                cout<<"kalamee ke mikhahid remove konid ra vared konid:"<<"\n";
                cin>>name[0];
                cout<<"mahal remove ra vared konid :"<<"\n";
                cin>>codei>>codej;
                for(i=0;i<codej-1;i++)
                    extra_list[codei-1][i]=list[codei-1][i];
                for(i=codej-1;i<25;i++)
                    extra_list[codei-1][i]=list[codei-1][i+strlen(name[0])];
                show();
            break;
            case 2:
                cout<<"kalamee ke be donbal on hastid ra vared konid :"<<"\n";
                cin>>name[0];
                for(i=0;i<5;i++)
                    if(strstr(list[i],name[0]))
                        cout<<"["<<i+1<<"]"<<"["<<(strlen(list[i])-strlen(strstr(list[i],name[0]))+1)<<"]"<<"\n"; 
                else
                    cout<<"peyda nashod!!"<<"\n";
            break;
            case 3:
                darkhast=0; 
        }//switch
    }//while
}//main
void show()
{
    int i , j;
    for(i=0;i<5;i++)
        puts(extra_list[i]);
    for(i=0;i<5;i++)
        for(int j=0;j<25;j++)
            list[i][j]=extra_list[i][j];
}