#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << unitbuf;
    cerr << unitbuf;

    cout << "$ ";
    string s;
    while(getline(cin,s)){
    if(s=="exit")break;
    else {
    cout << s << ": command not found" << '\n';
    cout<<"$ " ;
  }
  }
}
