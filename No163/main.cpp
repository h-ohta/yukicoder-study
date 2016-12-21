#include <iostream>

int main() {
  std::string str;
  std::cin >> str;

  for (auto &&el : str)
    el = (char) (isupper(el) ? tolower(el) :
                 islower(el) ? toupper(el) : el);

  std::cout << str << std::endl;

  return 0;
}
