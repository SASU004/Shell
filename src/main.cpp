#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    cout << unitbuf;
    cerr << unitbuf;
    string s;
    
    while (true){

    cout << "$ ";
    getline(cin,s);
    if(s=="exit")break;
    if(s.substr(0,5)=="echo ")
      cout<<s.substr(5)<<'\n';
    else if(s.substr(0,5)=="type "){
      if(s.substr(5,9)=="echo")
      cout<<"echo "<<"is a shell builtin"<<endl;
      else if(s.substr(5,9)=="exit")
      cout<<"exit "<<"is a shell builtin"<<endl;
      else if(s.substr(5,9)=="type")
      cout<<"type "<<"is a shell builtin"<<endl;
      else cout<<s.substr(5,9)<<": not found"<<endl;
     
    }
    else cout << s << ": command not found" << '\n';
    

  }
}

