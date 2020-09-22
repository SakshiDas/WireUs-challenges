#include <iostream>

using namespace std;

int main(){
    int i;
string s = "HelloWorldThisIsACppProgram";

for( i=0; i <s.length(); i++){

    if(isupper(s[i+1]) == true){
        cout<<s[i];
        cout<<endl;
    }
    else
        cout<<s[i];
}
return 0;
}
