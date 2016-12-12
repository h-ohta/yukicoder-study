#include <iostream>

int main() {

  uint32_t a, b;
  std::cin >> a >> b;

  uint32_t quotinent = b / a;
  uint32_t remainder = b % a;
  uint32_t result = remainder > 0 ? quotinent + 1
                    : quotinent;
  std::cout << result << std::endl;

  return 0;
}
