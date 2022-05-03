#include <gtest/gtest.h>
#include "../src/packagePostal.h"
#include "../src/package.h"


namespace
{
    // Category 1
    TEST(Postal_Shipping_Test, TEST_Return_30)
    {

        PackagePostal* p1 = new PackagePostal(1,2,100,0); // (category, weight, distance, price)
        
        // category = 1, weight 0-3 10, distance = 100 == 30

        double current = p1->CalculateShipping();
        double expected = 30;

        EXPECT_DOUBLE_EQ(expected, current);

    }

    TEST(Postal_Shipping_Test, TEST_Return_45)
    {

        PackagePostal* p1 = new PackagePostal(1,4,100,0); // (category, weight, distance, price)
        
        // category = 1, weight = 4-8, distance = 100 == 45

        double current = p1->CalculateShipping();
        double expected = 45;

        EXPECT_DOUBLE_EQ(expected, current);

    }

    TEST(Postal_Shipping_Test, TEST_Return_60)
    {

        PackagePostal* p1 = new PackagePostal(1,9,100,0); // (category, weight, distance, price)
        
        // category = 1, weight = 9+, distance = 100 == 60

        double current = p1->CalculateShipping();
        double expected = 60;

        EXPECT_DOUBLE_EQ(expected, current);

    }

    // Category: 2

    TEST(Postal_Shipping_Test, TEST_Return_2p8) // 2.8
    {

        PackagePostal* p1 = new PackagePostal(2,2,100,0); // (category, weight, distance, price)
        
        // category = 2, weight = 0-3, distance = 100, == 2.8

        double current = p1->CalculateShipping();
        double expected = 2.8;

        EXPECT_DOUBLE_EQ(expected, current);

    }

    TEST(Postal_Shipping_Test, TEST_Return_5p3) //5.3
    {

        PackagePostal* p1 = new PackagePostal(2,4,100,0); // (category, weight, distance, price)
        
        // category = 2, weight = 4-8, distance = 100 == 5.3

        double current = p1->CalculateShipping();
        double expected = 5.3;

        EXPECT_DOUBLE_EQ(expected, current);

    }

    TEST(Postal_Shipping_Test, TEST_Return_7p5) // 7.5
    {

        PackagePostal* p1 = new PackagePostal(2,9,100,0); // (category, weight, distance, price)
        
        // category = 2, weight = 9+, distance = 100 == 7.5

        double current = p1->CalculateShipping();
        double expected = 7.5;

        EXPECT_DOUBLE_EQ(expected, current);

    }

    // Category 3

    TEST(Postal_Shipping_Test, TEST_Return_1p2) // 1.2
    {

        PackagePostal* p1 = new PackagePostal(3,9,100,0); // (category, weight, distance, price)
        
        // category = 3, weight = 9+, distance = 100 == 7.5

        double current = p1->CalculateShipping();
        double expected = 1.2;

        EXPECT_DOUBLE_EQ(expected, current);

    }
}