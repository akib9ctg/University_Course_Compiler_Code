#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    for(int i=0; a[i]; i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            a[i]='1';
        }
        else if(a[i]=='+' || a[i]=='-')
        {
            a[i]='2';
        }
        else if(a[i]=='(')
        {
            a[i]='3';
        }
        else if(a[i]==')')
        {
            a[i]='4';
        }
    }

    int i=0,f=1;
    while(a.length()!=1)
    {
        //f=1;
        string b="";
        cout<<"out "<<a<<endl;
        for(int i=0; a[i]; i++)
        {
            if(a[i]=='1'&& a[i+1]=='2' && a[i+2]=='1')
            {
                b+='1';
                i+=2;
            }
            else if(a[i]=='3'&& a[i+1]=='1' && a[i+2]=='4')
            {
                b+='1';
                i+=2;
            }
            else
            {
                b+=a[i];
            }
        }
        if(a==b)break;
        a=b;


    }
    if(a.length()==1){
        cout<<"Accept"<<endl;
    }
    else{
        cout<<"WA"<<endl;
    }


return 0;
}
