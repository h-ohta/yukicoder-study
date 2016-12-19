#include <iostream>

int main() {
  int32_t L, M, N; // 100, 25, 1
  int32_t X = 0; // 1000
  std::cin >> L >> M >> N;

  // Exchange N
  while (N >= 25) {
    N -= 25;
    M++;
  }

  // Exchange M
  while (M >= 4) {
    M -= 4;
    L++;
  }

  while (L >= 10) {
    L -= 10;
    X++;
  }

  std::cout << L + M + N << std::endl;

  return 0;
}
