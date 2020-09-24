#include <iostream>

using namespace std;

int main(){
string str = "sakshi";
int n = str.length();
//char c;
int c[n] , d[n-1];

for(int  i = 0; i<n ; i++){
    c[i]= int(str[i]);

}
for(int  i = 0; i<n-1 ; i++)
{
    d[i] = c[i+1] - c[i];
}

for(int  i = 0; i<n-1 ; i++){
    cout<<char(c[i]) <<d[i];
}
cout<<char(c[n-1]);
return 0;
}
