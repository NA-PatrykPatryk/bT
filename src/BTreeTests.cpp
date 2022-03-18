#include <string>
#include "gtest/gtest.h"
#include "BTree.hpp"

struct BTreeTest : public testing::Test {
    BTree<int> intSut{};
};


TEST_F(BTreeTest, whenCreatedBTreeSizeIs0) {
    
    EXPECT_EQ(intSut.size(), 0);
}

TEST_F(BTreeTest, whenCreatedBTreeIsEmpty) {

    EXPECT_EQ(intSut.empty(), true);
}

TEST_F(BTreeTest, whenElementInsertedIntoTreeSizeShouldReturnAndEmptyShouldReturnFalse) {
    intSut.insert(5);
    EXPECT_EQ(intSut.size(), 1);
    EXPECT_EQ(intSut.empty(), false);
}

TEST_F(BTreeTest, BinaryTreeShouldBeAbleToContainObjectsOfDifferentTypes) {
    BTree<float> sut;
    sut.insert(5);
    EXPECT_EQ(sut.size(), 1);

    BTree<std::string> sut2;
    sut2.insert("test");
    EXPECT_EQ(sut2.size(), 1);
}