#include <iostream>
using namespace std;


int main()
{
  double temp;
  double X0 = 0;
  double X1 = 0;
  double Y0 = 0;
  double Y1 = 0;
  double entropy;

  cout << "Enter a temperature in C (150-500):";
  cin >> temp;

  if ((temp < 150) || (temp > 500)) {cout << "Error, out of range" << endl;
  }

  
  
  else {
    if ((temp >= 150) && (temp <= 250)) {X0 = 150;
    X1 = 250;
    Y0 = 7.281;
    Y1 = 7.71;
    }
    
    else if ((temp > 250) && (temp <= 300)) {X0 = 250;
    X1 = 300;
    Y0 = 7.71;
    Y1 = 11;
    }
   

  else if ((temp >= 300) && (temp <= 400)) {X0 = 300;
    X1 = 400;
    Y0 = 11;
    Y1 = 8.2236;
    }

  else if ((temp > 400) && (temp <= 500)) {X0 = 400;
    X1 = 500;
    Y0 = 8.2236;
    Y1 = 8.5153;
    }
  
  entropy = (Y0 + (Y1 - Y0)*((temp-X0)/(X1-X0)));
  }
  cout << "The entropy is: " << entropy << " kJ/(kg.k)" << endl;
   
 return 0;
   }

#define UNUSED(x) (void)x
