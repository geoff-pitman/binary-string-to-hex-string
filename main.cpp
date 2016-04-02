#include <iostream> 
#include <string>        
#include <bitset>

using namespace std;

int main ()
{
  string inp;
  
  cin >> inp;
  bitset<2056> bits(string(inp.c_str()));
  cout << hex << bits.to_ulong() << endl;
  
  return 0;
}
