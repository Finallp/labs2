#include <cashes.hpp>

int main() {
  cash_test Direction = cash_test("direction");
  Direction.straight();
  Direction.output(std::cout);
  cash_test Reverse = cash_test("reverse");
  Reverse.reverse();
  Reverse.output(std::cout);
  cash_test Random = cash_test("random");
  Random.random();
  Random.output(std::cout);
}