#include <iostream>
using namespace std;

void reverse1(string str){
    int n = str.length();
    for(int i = 0 ; i< str.length()/2 ; i++){
        swap(str[i],str[n-i-1]);
    }
    cout<<str;
}

int main(){

string str;
cin>>str;
reverse1(str);


return 0 ;}
