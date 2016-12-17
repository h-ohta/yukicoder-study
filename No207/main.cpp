#include <iostream>

constexpr int32_t MIN = 1;
constexpr int32_t MAX = 2000000000;

int main() {
  int32_t A, B;
  std::cin >> A >> B;

  if (A < MIN || A > MAX) {
    //std::cout << "Input invalid A" << std::endl;
    exit(-1);
  }

  if (B < MIN || B > MAX) {
    //std::cout << "Input invalid B" << std::endl;
    exit(-1);
  }

  if ((B - A) < 0 || (B - A) > 100) {
    //std::cout << "B - A is over 100 or under 0" << std::endl;
    exit(-1);
  }

  for (int32_t i = A; i <= B; i++) {

    if (i % 3 == 0) {
      std::cout << i << std::endl;
      continue;
    }

    if (std::to_string(i).find("3") != std::string::npos) {
      std::cout << i << std::endl;
      continue;
    }
  }
  return 0;
}
