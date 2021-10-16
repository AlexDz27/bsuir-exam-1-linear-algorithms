#include <iostream>

using namespace std;

int main() {
  // x = 0.03981, y = -1625, z = 0.512 -> a = 1.2619

  double x = 0.03981;
  double y = -1625;
  double z = 0.512;

  /*** First action **/
  double firstActionResult = pow(2, -x);

  /*** Second action ***/
  double secondTerm = pow(fabs(y), 1.0 / 4);
  double secondActionResult = sqrt(x + secondTerm);

  /*** Third action ***/
  double EulersNumberExponent = (x - 1) / (sin(z));
  double thirdActionResult = pow(exp(EulersNumberExponent), 1.0 / 3);
  
  double result = firstActionResult * secondActionResult * thirdActionResult;
  
  cout << result;

  return 0;
}
