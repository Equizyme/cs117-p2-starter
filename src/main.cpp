#include <iostream>
using namespace std;


int main()
{
  double temp;
  const int T1 = 150;
  const int T2 = 250;
  const int T3 = 300;
  const int T4 = 400;
  const int T5 = 500;
  double entropy;

  cout << "Enter a temperature in C (150-500):";
  cin >> temp;

  if ((temp < 150) || (temp > 500)) {cout << "Error, out of range" << endl;
  }

  
  else {
    if ((temp >= 150) && (temp <= 250)) {entropy = (7.71 + (7.71 - 7.281)*((temp-T1)/(T2-T1)));
    }
    
    else if ((temp > 250) && (temp <= 300)) { entropy = (7.71 + (11 - 7.71)*((temp-T2)/(T3-T2)));
    }
   
    else if ((temp >= 300) && (temp <= 400)) {entropy = (11 + (8.2236 - 11)*((temp-T3)/(T4-T3)));
    }

    else if ((temp > 400) && (temp <= 500)) {entropy = (8.2236 + (8.51530 - 8.2236)*((temp-T4)/(T5-T4)));
    }
  
  cout << "The entropy is: " << entropy << " kJ/(kg.k)" << endl;
  }
   
 return 0;
   }

#define UNUSED(x) (void)x
