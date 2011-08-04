#include <string>

#include <value.hpp>
#include <gtest/gtest.h>

using uniformed_access::value;

TEST(value_test, test1)
{
    value<int> v;
    v = 0;
    EXPECT_EQ(v, 0);

    v = 11;
    EXPECT_EQ(v, 11);
}
