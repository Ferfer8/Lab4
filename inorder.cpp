#include <iostream>
int main()
{
  int x, y, z;

  std::cout << "Enter three 3 digits:";
  std::cin >> x >> y >> z;
  if ((x<=y) && (y<=z))
    std::cout << "In Order\n";
  else if ((x>=y) && (y>=z))
    std::cout << "In order\n";
  else
    std::cout << "Not in order\n";
  return 0;
      
}
