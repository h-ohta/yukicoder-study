#include <iostream>

int main() {
  int32_t N;
  std::cin >> N;
  if (N < 0) {
    std::cout << "Please input number over 1" << std::endl;
    exit(-1);
  }

  for (int32_t i = 1; i <= N; i++) {

    if (i % 3 == 0 && i % 5 == 0)
      std::cout << "FizzBuzz" << std::endl;
    else if (i % 3 == 0)
      std::cout << "Fizz" << std::endl;
    else if (i % 5 == 0)
      std::cout << "Buzz" << std::endl;
    else
      std::cout << i << std::endl;

  }
  return 0;
}
