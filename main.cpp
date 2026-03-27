#include <bits/stdc++.h>
using namespace std;
 
bool handle_echo(const string& input){
if(input=="echo"){
  cout << "write something :)\n";
  return true ;
}
if(input.substr(0,5)=="echo "){
  cout << input.substr(5) <<endl;
  return true ;
}
return false ;
}
int main() {
  
  cout << unitbuf;
  cerr << unitbuf;
  while (true ){
    cout<< "$ ";
    string input;
    getline(cin,input);
    if(input=="exit")break;
    if(handle_echo(input))continue;
    cout<< input << ": command not found"<< endl;
  }
}
