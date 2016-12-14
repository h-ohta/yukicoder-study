#include <iostream>

int main() {

  int32_t count = 0;
  for (int32_t i = 1; i <= 12; i++) {
    for (int32_t j = 1; j <= 31; j++) {
      if (i == 2 && j == 29)
        break;

      if (j == 31 && (i == 4 || i == 6 || i == 9 || i == 11))
        break;

      //std::cout << i << " / " << j << std::endl;

      int32_t X = i;
      int32_t Y1 = j / 10;
      int32_t Y2 = j % 10;

      if(X == Y1 + Y2){
        //std::cout << i << " / " << j << " is HAPPY DAY" << std::endl;
        count++;
      }

    }
  }
  std::cout << count << std::endl;
  return 0;
}
