#include <iostream>
using namespace std;


int main()
{
  double temp;
  double entropy;

  cout << "Enter a tempurature in C (150-500):";
  cin >> temp;
  entropy = 7.2810 + (7.5081 - 7.2810)*((temp-150)/(200-150));
  cout << "The entropy is: " << entropy << " kJ/(kg.k)" << endl;
 return 0;
   }

#define UNUSED(x) (void)x
