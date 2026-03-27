#include <bits/stdc++.h>
using namespace std;
 

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;
  while (true ){
    cout<< "$ ";
    string input;
    getline(cin,input);
    if(input=="exit")break;
    cout<< input << ": command not found"<< endl;
  }
}
