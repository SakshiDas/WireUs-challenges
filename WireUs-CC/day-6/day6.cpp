#include <iostream>
using namespace std;

int main(){
    char c;
    string str = "sssaaaaabcckkkkkkk";
    c = str[0];
    for(int i = 0; i < str.length(); i++){

        if(c != str[i+1] ){
            c = str[i+1];
            continue;
        }
        else{
            str[i+1] = '*';
        }

    }
    cout<<str<<endl;

}
