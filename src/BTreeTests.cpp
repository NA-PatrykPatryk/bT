#include "gtest/gtest.h"
#include "BTree.hpp"



TEST(BTreeTest, whenCreatedBTreeSizeIs0) {
    BTree sut;
    EXPECT_EQ(sut.size(), 0);
}


TEST(BTreeTest, whenCreatedBTreeIsEmpty) {
    BTree sut;
    EXPECT_EQ(sut.empty(), true);
}