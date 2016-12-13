#include <iostream>

int main() {
  int32_t S, F;
  std::cin >> S >> F;

  if (S < 0 || S > 456) {
    std::cout << "S is invalid" << std::endl;
    exit(-1);
  }

  if (F < 1 || F > 123) {
    std::cout << "F is invalid" << std::endl;
    exit(-1);
  }

  int32_t result = 1 + S / F;

  std::cout << result << std::endl;
  return 0;
}
