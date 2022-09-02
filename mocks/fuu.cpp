/** @file
 *  @copyright ABC
 */
#include <fuu.h>

/**
 *  @ingroup mocks
 *  @addtogroup fuu
 *  @li A mock of fuu to return values Unit testing.
 *  @{ */

/**
 * @brief Mock fuu init() function
 * @li Comment to mock.
 * @return Always false for this mock
 */
bool fuu::init() {
    return false;
}

/**
 * @brief Docu of mock fuu foo1() function
 * @li Comment to foo1.
 * @return Always returns -99 as mock
 */
int16_t fuu::foo1() {
    return -99;
}

/*! @} */