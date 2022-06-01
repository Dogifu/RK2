#include "../sort.cpp"
#include "gtest/gtest.h"

using namespace std;

TEST(Sort, FullTest) {
    int array[20] = {12,54,23,22,876,32,266,112,-5,23,3,-44,23,-5,
                     -43,23,52,234,6,0};
    int expect[20] = {-44, -43 ,-5 ,-5 ,0 ,3 ,6, 12, 22, 23, 23, 23, 23, 32, 52, 54, 112, 234, 266 ,876 };
    MergeSort(array,0,19);
    for (size_t x =0; x < 20; ++x) {
        ASSERT_EQ(array[x],expect[x]);
    }
}

TEST(Sort, EmptyArray) {
    int *array = new int{0};
    int *expect = new int{0};
    MergeSort(array,0,0);
    for (size_t x =0; x < 0; ++x) {
        ASSERT_EQ(array[x],expect[x]);
    }
}


TEST(Sort, OneEl) {
    int array[1] = {1};
    int expect[1] = {1};
    MergeSort(array,0,1);
    for (size_t x =0; x < 1; ++x) {
        ASSERT_EQ(array[x],expect[x]);
    }
}



