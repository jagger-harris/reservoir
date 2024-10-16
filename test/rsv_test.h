#ifndef RSV_TEST_H
#define RSV_TEST_H

#include "test_dynamic_array.h"
#include "test_hash_set.h"
#include "test_hash_table.h"
#include "test_string.h"
#include "test_threads.h"

static inline int rsv_test_all(void) {
  int failed_tests = 0;

  failed_tests += test_dynamic_array();
  failed_tests += test_hash_set();
  failed_tests += test_hash_table();
  failed_tests += test_string();

#if defined(__unix__)
  failed_tests += test_threads();
#endif

  return failed_tests;
}

#endif /* RSV_TEST_H */
