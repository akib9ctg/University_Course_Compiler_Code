#include<bits/stdc++.h>
using namespace std;
string CommentRemover(string withComment){
    size_t found1=withComment.find("/*");
    size_t found2=withComment.find("*/");
    string withOutComment=withComment.erase(found1,found2-found1+2);
    return withOutComment;
}
int main()
{
    freopen("inputProgram.txt","r+",stdin);
    string withComment="";
    string str;
    while(getline(cin,str)){
        withComment=withComment+"@"+str;
    }
    string withOutComment=CommentRemover(withComment);
    for(int i=0;withOutComment[i];i++){
        if(withOutComment[i]=='@'){
            cout<<endl;
            continue;
        }
        cout<<withOutComment[i];
    }
    return 0;
}
