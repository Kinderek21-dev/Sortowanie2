#include "pch.h"


#include "MergeSort.h"
#include <vector>
#include <algorithm>

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

TEST(MergeSortTests, EmptyArray) {
    std::vector<int> arr = {};
    std::vector<int> expected = {};

    MergeSort<int>::sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTests, SingleElementArray) {
    std::vector<int> arr = { 42 };
    std::vector<int> expected = { 42 };

    MergeSort<int>::sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTests, TwoElementsArray) {
    std::vector<int> arr = { 20, 10 };
    std::vector<int> expected = { 10, 20 };

    MergeSort<int>::sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTests, ArrayWithDuplicates) {
    std::vector<int> arr = { 5, 2, 8, 2, 5, 1 };
    std::vector<int> expected = { 1, 2, 2, 5, 5, 8 };
    MergeSort<int>::sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTests, NegativeArrayWithDuplicates) {
    std::vector<int> arr = { -5, -2, -8, -2, -5, -1 };
    std::vector<int> expected = { -8, -5, -5, -2, -2, -1 };

    MergeSort<int>::sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTests, MixedArrayWithDuplicates) {
    std::vector<int> arr = { 0, -10, 5, 0, 10, -5, 5, 10 };
    std::vector<int> expected = arr;
    std::sort(expected.begin(), expected.end());
    MergeSort<int>::sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTests, LargeArray) {
    std::vector<int> arr;
    for (int i = 200; i >= 0; --i) {
        arr.push_back(i);
    }

    std::vector<int> expected = arr;
    std::sort(expected.begin(), expected.end());

    MergeSort<int>::sort(arr);

    EXPECT_EQ(arr, expected);
}
    

TEST(MergeSortTests, LargeMixedArrayWithDuplicates) {
    std::vector<int> arr;
    for (int i = -150; i <= 150; ++i) {
        arr.push_back(i);
        if (i % 10 == 0) arr.push_back(i); 
    }

    std::vector<int> expected = arr;
    std::sort(expected.begin(), expected.end());

    MergeSort<int>::sort(arr);

    EXPECT_EQ(arr, expected);
}
