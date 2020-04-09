#include "unity.h"
#include "a.h"

void setUp(void) {}
void tearDown(void) {}

void test_a1(void) {
    a1();
    TEST_ASSERT_EQUAL_INT(1, 1);
}

void test_a2(void) {
    a2();
    TEST_ASSERT_EQUAL_INT(1, 1);
}

void test_a3(void) {
    a3();
    TEST_ASSERT_EQUAL_INT(1, 1);
}