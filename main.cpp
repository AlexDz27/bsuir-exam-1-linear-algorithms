#include <iostream>

using namespace std;

int main() {
  // x = 0.03981, y = -1625, z = 0.512 -> a = 1.2619

  double x, y, z;
  double result;

  cout << "Enter values for variables 'x', 'y', 'z'" << endl;
  cout << "X: "; cin >> x;
  cout << "Y: "; cin >> y;
  cout << "Z: "; cin >> z;

  if (!cin.good()) { // If user entered values other than numbers
    cout << "Error: you've entered bad values into one of the variables. All variables must be numbers. Exiting the program...";
    return 1;
  }

  /*** First action **/
  double firstActionResult = pow(2, -x);

  /*** Second action ***/
  double secondTerm = pow(fabs(y), 1.0 / 4);
  double secondActionResult = sqrt(x + secondTerm);

  /*** Third action ***/
  double EulersNumberExponent = (x - 1) / (sin(z));
  double thirdActionResult = pow(exp(EulersNumberExponent), 1.0 / 3);

  result = firstActionResult * secondActionResult * thirdActionResult;

  cout << result; // 1.2794

  return 0;
}
