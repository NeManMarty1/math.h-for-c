#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_math.h"



START_TEST(s21_abs_test){
    int x = -10;
    ck_assert_double_eq(s21_abs(x) , abs(x));
}
END_TEST

START_TEST(s21_ceil_test){
    double x = -10.2;
    ck_assert_double_eq(s21_ceil(x) , ceil(x));
}
END_TEST

Suite *lib_suit(void){
    Suite *s;
    s = suite_create("Function Check");

    TCase *tc_ceil;
    TCase *tc_abs;

    tc_abs = tcase_create("Fabs func");
    suite_add_tcase(s, tc_abs);
    tcase_add_test(tc_abs, s21_abs_test);


    tc_ceil = tcase_create("Ceil func");
    suite_add_tcase(s, tc_ceil);
    tcase_add_test(tc_ceil, s21_ceil_test);

    return s;

}


int main(void){
    Suite *s;
    SRunner *sr;
    
    s = lib_suit();
    sr = srunner_create(s);
    srunner_run_all(sr, CK_VERBOSE);
    srunner_free(sr);
    return 0;
}

