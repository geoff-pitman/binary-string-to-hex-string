
// programming competition question:
// recieve binary number input as string
// output hex number as string
#include <iostream> 
#include <string>        
#include <bitset>
#include <sstream>

using namespace std;

int main ()
{
  string inp;
  stringstream outp;
  while(cin >> inp)
  {
	 bitset<1028> baz (string(inp.c_str()));
	 outp << hex << baz.to_ulong() << endl;
	 outp >> inp;
	 for(int i = 0; i < inp.length(); i++)
	 {
			if(inp[i] > 96 && inp[i] < 122)
				inp[i] -= 32;
	 }
	 cout << inp << endl;
  }

  return 0;
}
