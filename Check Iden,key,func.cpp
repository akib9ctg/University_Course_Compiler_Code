#include<bits/stdc++.h>
using namespace std;
set<string> Keywords;
set<string> Identifiers;
set<string> Functions;
set<string> Operators;
set<string> Digits;
set<string> :: iterator it;

bool isKeyword(string a)
{
    string keyWord[]= {"int","float","double","if","for","while","return"};
    for(int i=0; i<7; i++)
    {
        if(a==keyWord[i])
        {
            return true;
        }
    }
    return false;

}
bool isIdentifier(string a)
{
    int IsValid=0;
    if((a[0]>='0' && a[0]<='9'))
    {
        IsValid=1;
    }
    if(IsValid==0)
    {
        for(int i=0; a[i]; i++)
        {
            if(!(((a[i]>='0' && a[i]<='9') || (a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z')||a[i]=='_')))
            {
                IsValid=1;
            }
        }
    }
    if(IsValid==0)return true;
    else return false;
}
bool IsOperator(string a)
{
    string OperatorWord[]= {",",";","=","+","-","*","/","++","--","{","}"};
    for(int i=0; i<11; i++)
    {
        if(a==OperatorWord[i])
        {
            return true;
        }
    }
    return false;
}
bool IsDigit(string a)
{
    for(int i=0; a[i]; i++)
    {
        if(!(a[i]>='0' && a[i]<='9'))
        {
            return false;
        }
    }
    return true;
}
bool IsFunction(string a){
    string b=a.substr(0,a.length()-2);
    if(isIdentifier(b)&& a[a.length()-2]=='(' && a[a.length()-1]==')')
        return true;
    return false;
}
int main()
{
    freopen("in.txt","r+",stdin);
    string a;
    while(cin>>a){
        if(isKeyword(a)){
            Keywords.insert(a);
        }
        else if(IsDigit(a)){
            Digits.insert(a);
        }
        else if(isIdentifier(a)){
            Identifiers.insert(a);
        }
        else if(IsOperator(a)){
            Operators.insert(a);
        }

        else if(IsFunction(a)){
            Functions.insert(a);
        }
    }
    cout<<"Keywords:"<<endl;
    for( it=Keywords.begin();it!=Keywords.end();it++){
        cout<<*it<<endl;
    }
    cout<<"Identifier:"<<endl;
    for( it=Identifiers.begin();it!=Identifiers.end();it++){
        cout<<*it<<endl;
    }
    cout<<"Operators:"<<endl;
    for( it=Operators.begin();it!=Operators.end();it++){
        cout<<*it<<endl;
    }
    cout<<"Digits:"<<endl;
    for( it=Digits.begin();it!=Digits.end();it++){
        cout<<*it<<endl;
    }
    cout<<"Functions:"<<endl;
    for( it=Functions.begin();it!=Functions.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}
