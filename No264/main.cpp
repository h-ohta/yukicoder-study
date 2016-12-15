#include <iostream>

int main() {

  int32_t me;
  int32_t you;
  std::cin >> me >> you;

  // gu: 0, choki: 1, pa: 2
  if ((me == 0 && you == 0) || (me == 1 && you == 1) || (me == 2 && you == 2)) {
    std::cout << "Drew" << std::endl;
  } else if ((me == 0 && you == 1) || (me == 1 && you == 2) || (me == 2 && you == 0)) {
    std::cout << "Won" << std::endl;
  } else if ((me == 0 && you == 2) || (me == 1 && you == 0) || (me == 2 && you == 1)) {
    std::cout << "Lost" << std::endl;
  } else {
    std::cout << "unknown" << std::endl;
  }

  return 0;
}
