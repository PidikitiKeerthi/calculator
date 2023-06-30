#include <iostream>
#include <string>
#include <sstream>

float calculate(float num1, float num2, char op) {
  switch(op) {
    case '+':
      return num1 + num2;
    case '-':
      return num1 - num2;
    case '*':
      return num1 * num2;
    case '/':
      if (num2 != 0)
        return num1 / num2;
      else
        throw std::runtime_error("Error! Division by zero is not allowed.");
    default:
      throw std::runtime_error("Error! Invalid operator.");
  }
}

int main() {
  char op;
  float num1, num2;

  std::cout << "Enter operator: +, -, *, /: ";
  std::cin >> op;

  std::cout << "Enter two operands: ";
  std::cin >> num1 >> num2;

  try {
    float result = calculate(num1, num2, op);
    std::cout << num1 << " " << op << " " << num2 << " = " << result << std::endl;
  } catch (const std::runtime_error& error) {
    std::cout << "Error: " << error.what() << std::endl;
  }

  return 0;
}
