#include "pch.h"
#include "MergeSort.h"
#include <vector>
#include <algorithm>
#include "gtest/gtest.h"

TEST(MergeSortTests, AlreadySortedArray) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    std::vector<int> expected = arr;

    MergeSort<int>::sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTests, ReverseSortedArray) {
    std::vector<int> arr = { 9, 7, 5, 3, 1 };
    std::vector<int> expected = { 1, 3, 5, 7, 9 };

    MergeSort<int>::sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTests, RandomArray) {
    std::vector<int> arr = { 42, -3, 17, 0, 9, 9 };
    std::vector<int> expected = arr;

    std::sort(expected.begin(), expected.end());
    MergeSort<int>::sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTests, NegativeNumbersOnly) {
    std::vector<int> arr = { -10, -50, -1, -3, -2 };
    std::vector<int> expected = arr;

    std::sort(expected.begin(), expected.end());
    MergeSort<int>::sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTests, PositiveAndNegativeNumbers) {
    std::vector<int> arr = { -2, 5, -10, 7, 0, -3 };
    std::vector<int> expected = arr;

    std::sort(expected.begin(), expected.end());
    MergeSort<int>::sort(arr);

    EXPECT_EQ(arr, expected);
}
