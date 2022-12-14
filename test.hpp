#ifndef TEST_HPP
#define TEST_HPP

#include "error.hpp"

const int AMOUNT  = 10;  ///< Amount of tests
const int ANS_LEN = 16;  ///< Max length of answer

/*!
    This structure is used to give access to user's input data for test functions.
*/
struct Test_data {
    double a;           ///< Coefficient a
    double b;           ///< Coefficient b
    double c;           ///< Coefficient c
    double x1;          ///< First root (if exists)
    double x2;          ///< Second root (if exists)
    char res[ANS_LEN];  ///< Description of the result
};

const int ARGUMENTS_NUMBER = 6; ///< number of arguments in every string of test file

/*!
    This function is used to get test data from .txt file.
    \param[in] f - test .txt file
    \param[out] test - structure that is used to contain test data
    \return NO_ERROR (0) - correct input data
    \return INCORRECT_INPUT (-1) - incorrect input data
*/
Errors test_read( struct Test_data *test, FILE *f );

/*!
    This function is used to print input data, result of solving and wanted data for one test.
    \param[in] test - structure that is used to contain test data
    \param[in] num - number of a test
    \param[in] f - test .txt file
    \param[in] test_count - all tests counter
    \param[in] correct_test_count - correct tests counter
    \return NO_ERROR (0) - test was correct
    \return INCORRECT_INPUT (-1) - test input was incorrect
*/
Errors test_print( struct Test_data *test, int num, FILE *f, int *test_count, int *correct_test_count );

/*!
    This function is used to print results of all tests.
    \param[in] test_file_name - name of test file
*/
void test( const char *file_name );

#endif
