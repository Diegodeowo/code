#include <gtest/gtest.h>
#include "../src/packageFedex.h"
#include "../src/package.h"


namespace
{
    TEST(Fedex_Shipping_Test, TEST_Return_35)
    {

        PackageFedex* p1 = new PackageFedex(9,300,0); // (weight, distance, price)
        
        // weight < 10, distance < 500 == 35

        double current = p1->CalculateShipping();
        double expected = 35;

        EXPECT_DOUBLE_EQ(expected, current);

    }

    TEST(Fedex_Shipping_Test, TEST_Return_45)
    {

        PackageFedex* p1 = new PackageFedex(11,300,0); // (weight, distance, price)
        
        // weight > 10, distance < 500 == 45

        double current = p1->CalculateShipping();
        double expected = 45;

        EXPECT_DOUBLE_EQ(expected, current);

    }

    TEST(Fedex_Shipping_Test, TEST_Return_50)
    {

        PackageFedex* p1 = new PackageFedex(9,501,0); // (weight, distance, price)
        
        // weight < 10, distance > 500 == 50

        double current = p1->CalculateShipping();
        double expected = 50;

        EXPECT_DOUBLE_EQ(expected, current);
    }

    TEST(Fedex_Shipping_Test, TEST_Return_60)
    {

        PackageFedex* p1 = new PackageFedex(11,501,0); // (weight, distance, price)
        
        // weight > 10, distance > 500 == 60

        double current = p1->CalculateShipping();
        double expected = 60;

        EXPECT_DOUBLE_EQ(expected, current);
    }
}