//get input string of 1s and 0s and output corresponding hex string
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
/*
programming competition problem:
get input string of 1s and 0s and output corresponding hex string
#include <iostream>
#include <string>
#include <bitset>
#include <sstream>

using namespace std;

int main ()
{
  string inp;
  stringstream outp;
  
  while(getline(cin,inp))
  {
    // remove spaces from input string
    string temp;
    for(int i = 0; i< inp.length(); i++)
      if(inp[i] != ' ')
        temp += inp[i];
    inp = temp;

    // map input string to binary values
    bitset<1028> baz (string(inp.c_str()));

    // convert to hex
    outp << hex << baz.to_ulong() << endl;

    // convert to upper hex chars
    outp >> inp;
    for(int i = 0; i < inp.length(); i++)
     if(inp[i] > 96 && inp[i] < 122)
      inp[i] -= 32;

    // output converted hex string
    cout << inp << endl;
  }

  return 0;
}
*/
