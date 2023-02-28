#include <iostream>
#include <vector>

std::vector<int> filter_even(const std::vector<int>& input) {
  std::vector<int> output;
  for (const auto& x : input) {
    if (x % 2 == 0) {
      output.push_back(x);
    }
  }
  return output;
}

int main() {
  std::vector<int> input = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::vector<int> output = filter_even(input);
  for (const auto& x : output) {
    std::cout << x << " ";
  }
  std::cout << std::endl;
  return 0;
}