#include <string>

#include <value.hpp>
#include <gtest/gtest.h>


using uniformed_access::f;


TEST(value_test, test1)
{
    EXPECT_EQ(f(1), 1);
}
