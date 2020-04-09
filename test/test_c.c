#include "unity.h"
#include "a.h"
#include "b.h"
#include "c.h"

void setUp(void) {}
void tearDown(void) {}

void test_c1(void) {
    c1();
    TEST_ASSERT_EQUAL_INT(1, 1);
}

void test_c2(void) {
    c2();
    TEST_ASSERT_EQUAL_INT(1, 1);
}

void test_c3(void) {
    c3();
    TEST_ASSERT_EQUAL_INT(1, 1);
}