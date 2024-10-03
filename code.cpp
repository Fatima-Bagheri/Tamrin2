#include <iostream>
#include <string>

int main()
{
  int num1, num2, num3;
  int res;
  std::cout << "Enter Numbers: "
  std::cin >> num1 >> num2 >> num3;
  res = num1 + num2 + num3;
  int avg = res / 3;
  std::cout << "Res: " << res;
  std::cout << "Avg: " << avg;
}
