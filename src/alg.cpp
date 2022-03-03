// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double res = 1.0;
  if (n == 0) {
    return 1;
  }
  if (n == 1) {
    return value;
  }
  for (int i = 1; i < n; i++)
    res = res * value;
  return res;
}

uint64_t fact(uint16_t n) {
  uint64_t factorial = 1;
  if (n <= 1) {
    return 1;
  }
  for (int i = 1; i <= n; i++) {
    factorial = factorial * i;
  }
  return factorial;
}

double calcItem(double x, uint16_t n) {
return pown(x, n)/fact(n);
}

double expn(double x, uint16_t count) {
  double res = 1;
  for (int i = 1; i <= count; i++)
    res += calcItem(x, i);
  return res;
}

double sinn(double x, uint16_t count) {
  double res = 0;
  for (int i = 1; i <= count; i++)
    res += pown((-1), i-1)*(pown(x, 2*i-1)/fact(2*i-1));
  return res;
}

double cosn(double x, uint16_t count) {
  double res = 0;
  for (int i = 1; i <= count; i++)
    res += pown((-1), i-1)*(pown(x, 2*i-2)/fact(2*i-2));
  return res;
}
