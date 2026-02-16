#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << unitbuf;
    cerr << unitbuf;

    cout << "$ ";
    string s;
    while(getline(cin,s)){
    if(s=="exit")break;
    if(s.substr(0,5)=="echo "){
      cout<<s.substr(5)<<'\n';
      cout<<"$ ";
    }

    else {
    cout << s << ": command not found" << '\n';
    cout<<"$ " ;
    }

  }
}
