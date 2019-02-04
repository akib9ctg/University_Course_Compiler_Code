#include<bits/stdc++.h>
using namespace std;
string RemoveSingleLineComment(string withComment){
    size_t found1=withComment.find("//");
    size_t found2=withComment.find("@");

    ///Finding '@' after the '//'s positon
    while(1){
         found2=withComment.find("@",found1+1); ///Here 1 is the size of string(@).
         if(found1<found2){
            break;
         }
    }

    string withOutComment=withComment.erase(found1,found2-found1+1);
    return withOutComment;
}
int main()
{
    freopen("inputSingleCommentProgram.txt","r+",stdin);
    string withComment="";
    string ptr;
    while(getline(cin,ptr)){
        withComment=withComment+"@"+ptr;
    }
    string withOutComment=RemoveSingleLineComment(withComment);
    for(int i=0;withOutComment[i];i++){
        if(withOutComment[i]=='@'){
            cout<<endl;
            continue;
        }
        cout<<withOutComment[i];
    }
    return 0;
}
