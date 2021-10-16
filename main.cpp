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

  cout << "Going further" << endl;

  return 0;
}
