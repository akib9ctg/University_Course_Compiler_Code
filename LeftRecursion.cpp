#include<bits/stdc++.h>
using namespace std;
int nextToken=0;
string a;
void match(){
    nextToken=nextToken+1;
}
void F(){
    if(a[nextToken]=='i'){
        match();
    }
    else if(a[nextToken]=='n'){
        match();
    }
    else{match();return;}
}
void T(){
    F();
    while(1){
        if(a[nextToken]=='*'){
            match();
            F();
        }
        else if(a[nextToken]=='/'){
            match();
            F();
        }
        else return;
    }

}
void E(){
    T();
    while(1){
        if(a[nextToken]=='+'){
            match();
            T();
        }
        else if(a[nextToken]=='-'){
            match();
            T();
        }
        else return;
    }
}
int main()
{
    cin>>a;
    nextToken=0;
    int strSize=a.length();
    E();
    cout<<nextToken<<" "<<strSize<<endl;
    if(nextToken==strSize){
        cout<<"Ok"<<endl;
    }else{
        cout<<"Error"<<endl;
    }
    return 0;
}
