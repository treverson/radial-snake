#pragma once

#include <string>

namespace utils {
  double mod(double context, double num);

  double trim(double context, int decimals, const std::string mode = "round");

  bool isBetween(double context, double num1, double num2, const std::string precision = "exact");

  bool compare(double context, double num, const std::string precision = "exact");

  bool compare(double context, double num, const std::string method, const std::string precision);
}