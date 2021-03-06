/* Boilerplate auto-generated by MMZK1526 */

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "mmzktestbase.h"

static void int_test(void) {
	mmzk_assert_pop_caption("Test int:\n");
	mmzk_assert_equal_int8(3, 3, "\tInt 8: ");
	mmzk_assert_equal_int16(3, 4, "\tInt 16: ");
	mmzk_assert_equal_int32(4, 3, "\tInt 32: ");
	mmzk_assert_equal_int64(3, 3, "\tInt 64: ");
	mmzk_assert_pop_caption("\n");

	mmzk_assert_pop_caption("Test uint:\n");
	mmzk_assert_equal_uint8(3, 3, "\tUnsigned Int 8: ");
	mmzk_assert_equal_uint16(3, 3, "\tUnsigned Int 16: ");
	mmzk_assert_equal_uint32(3, 3, "\tUnsigned Int 32: ");
	mmzk_assert_equal_uint64(3, 3, "\tUnsigned Int 64: ");
	mmzk_assert_pop_caption("\n");
}

static void char_bool_test(void) {
	mmzk_assert_pop_caption("Test char:\n");
	mmzk_assert_equal_char('c', 'c', "\t'c' == 'c': ");
	mmzk_assert_equal_char('C', 'c', "\t'C' == 'c': ");
	mmzk_assert_pop_caption("\n");

	mmzk_assert_pop_caption("Test bool:\n");
	mmzk_assert_true(1, "\ttrue: ");
	mmzk_assert_equal_bool(false, 0, "\tbool: ");
	mmzk_assert_pop_caption("\n");
}

static void pointer_test(void) {
	int32_t x = 5, y = 5;
	int32_t *ptr1 = &x;
	int32_t *ptr2 = &y;

	mmzk_assert_pop_caption("Test value:\n");
	mmzk_assert_equal_int32(x, y, "\tx == y: ");
	mmzk_assert_pop_caption("\n");

	mmzk_assert_pop_caption("Test address:\n");
	mmzk_assert_equal_ptr(ptr1, ptr1, "\tsame address: ");
	mmzk_assert_equal_ptr(ptr1, ptr2, "\tdifferent address: ");
	mmzk_assert_pop_caption("\n");
}

void integraltest_summary(void) {
	mmzk_test_summary(int_test, "Test int & uint (int_test):\n");
	mmzk_test_summary(
		char_bool_test, "Test char & bool (char_bool_test):\n");
	mmzk_test_summary(pointer_test, "Test pointer (pointer_test):\n");
}

#ifdef TEST_MAIN

// Run with the option "-v" to go verbose (show successful tests).
int main(int argc, char **argv) {
	return mmzk_test_report(integraltest_summary, argc, argv);
}

#endif /* TEST_MAIN */
