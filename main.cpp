#include <bits/stdc++.h>
using namespace std;
 
bool handle_echo(const string& input){
  if(input=="echo"||input=="echo "){
    cout << "write something :)\n";
    return true ;
  }
  if(input.substr(0,5)=="echo "){
    cout << input.substr(5) <<endl;
    return true ;
  }
  return false ;
}

bool handle_type(const string& input){
  if(input=="type"||input=="type "){
    cout << "write something :)\n";
    return true ;
  }
  if(input.substr(0,5)=="type "){
    string cmd = input.substr(5);
    if(cmd=="type")
      cout<<"type is a shell builtin"<<endl;
    else if(cmd=="exit")
      cout<<"exit is a shell builtin"<<endl;
    else if(cmd=="echo")
      cout<<"echo is a shell builtin"<<endl;
    else cout<<cmd<<": not found"<<endl;
      return true;
    }
  return false;
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
    if(handle_type(input))continue;
    cout<< input << ": command not found"<< endl;
  }
}
