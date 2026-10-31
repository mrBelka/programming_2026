#pragma once

namespace arrayUtils {
constexpr int maxSize = 20'000;

void read(int array[maxSize], int &n);
void write(const int array[maxSize], int n);
void removeElements(int array[maxSize], int &n);
} // namespace arrayUtils
