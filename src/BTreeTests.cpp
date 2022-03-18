#include <string>
#include <vector>
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

TEST_F(BTreeTest, whenInserting2ElementSizeIs2) {
    intSut.insert(5);
    intSut.insert(3);
    EXPECT_EQ(intSut.size(), 2);
}

TEST_F(BTreeTest, whenInserting3DescendingElementSizeIs3) {
    intSut.insert(5);
    intSut.insert(3);
    intSut.insert(1);
    EXPECT_EQ(intSut.size(), 3);
}

TEST_F(BTreeTest, whenInserting3AscendingElementSizeIs3) {
    intSut.insert(1);
    intSut.insert(3);
    intSut.insert(5);
    EXPECT_EQ(intSut.size(), 3);
}

TEST_F(BTreeTest, printTest) {

    intSut.insert(1);
    intSut.insert(3);
    intSut.insert(5);
    intSut.insert(2);
    intSut.insert(7);
    intSut.insert(4);

    //intSut.print();

    EXPECT_TRUE(true);
}

TEST_F(BTreeTest, whenToVectorCalledShouldReturnVectorWithSortedElements) {
    
    std::vector<int> vec{ 5, 1, 3, 8, 2 };
    
    intSut.insert(vec.at(0));
    intSut.insert(vec.at(1));
    intSut.insert(vec.at(2));
    intSut.insert(vec.at(3));
    intSut.insert(vec.at(4));

    std::vector<int> resultVec{ intSut.toVector()};
    std::sort(vec.begin(), vec.end());

    EXPECT_EQ(vec.at(0), resultVec.at(0));
    EXPECT_EQ(vec.at(1), resultVec.at(1));
    EXPECT_EQ(vec.at(2), resultVec.at(2));
    EXPECT_EQ(vec.at(3), resultVec.at(3));
    EXPECT_EQ(vec.at(4), resultVec.at(4));
}
