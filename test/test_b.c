#include "unity.h"
#include "basic/a.h"
#include "b.h"

void setUp(void) {}
void tearDown(void) {}

void test_b1(void) {
    b1();
    TEST_ASSERT_EQUAL_INT(1, 1);
}

void test_b2(void) {
    b2();
    TEST_ASSERT_EQUAL_INT(1, 1);
}

void test_b3(void) {
    b3();
    TEST_ASSERT_EQUAL_INT(1, 1);
}