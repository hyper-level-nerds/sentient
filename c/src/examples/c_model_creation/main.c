#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "./example_model.h"

// /**
//  * @author Jin
//  * @brief preprocessor if interface implementation
//  * 
//  */
// #define __sentient_pp_i_if(cond) \
//         __sentient_pp_i_if_impl(__sentient_pp_i_if_case_, cond)
// #define __sentient_pp_i_if_case_0(t, ...) __VA_ARGS__
// #define __sentient_pp_i_if_case_1(t, ...) t 

// #define __sentient_pp_i_if_impl(arg, ...) \
//         __sentient_pp_i_if_impl_impl(arg, __VA_ARGS__)
// #define __sentient_pp_i_if_impl_impl(arg, ...) \
//                                      arg ## __VA_ARGS__

// /**
//  * @author Jin
//  * @brief preprocessor complement implementation
//  * 
//  */
// #define __sentient_pp_complement(arg) \
//         __sentient_pp_complement_impl(__sentient_pp_complement_, arg)
// #define __sentient_pp_complement_1 0
// #define __sentient_pp_complement_0 1

// #define __sentient_pp_complement_impl(arg, ...) \
//         __sentient_pp_complement_impl_impl(arg, __VA_ARGS__)
// #define __sentient_pp_complement_impl_impl(arg, ...) \
//                                            arg ## __VA_ARGS__

// /**
//  * @author Jin
//  * @brief preprocessor and implementation
//  * 
//  */
// #define __sentient_pp_and(arg) \
//         __sentient_pp_and_impl(__sentient_pp_and_, arg)
// #define __sentient_pp_and_1(arg) 0
// #define __sentient_pp_and_0(arg) arg

// #define __sentient_pp_and_impl(arg, ...) \
//         __sentient_pp_and_impl_impl(arg, __VA_ARGS__)
// #define __sentient_pp_and_impl_impl(arg, ...) \
//                                     arg ## __VA_ARGS__

// /**
//  * @author Jin
//  * @brief preprocessor increase implementation
//  * 
//  */
// #define __sentient_pp_increase(i) \
//         __sentient_pp_increase_impl(__sentient_pp_increase_impl_, i)

// #define __sentient_pp_increase_impl(arg, ...) \
//         __sentient_pp_increase_impl_impl(arg, __VA_ARGS__)
// #define __sentient_pp_increase_impl_impl(arg, ...) \
//                                          arg ## __VA_ARGS__

// /**
//  * @author Jin
//  * @brief preprocessor increase implementation
//  * 
//  */
// #define __sentient_pp_decrease(i) \
//         __sentient_pp_decrease_impl(__sentient_pp_decrease_impl_, i)

// #define __sentient_pp_decrease_impl(arg, ...) \
//         __sentient_pp_decrease_impl_impl(arg, __VA_ARGS__)
// #define __sentient_pp_decrease_impl_impl(arg, ...) \
//                                          arg ## __VA_ARGS__

// #include <sentient/core/internal/inc_dec.h>

// /**
//  * @author Jin
//  * @brief 
//  * 
//  */
// #define __sentient_pp_check(...) \
//         __sentient_pp_check_impl(__VA_ARGS__, 0,)
// #define __sentient_pp_check_impl(x, n, ...) n

// /**
//  * @author Jin
//  * @brief what the hell is this
//  * 
//  */
// #define __sentient_pp_probe(x) x, 1,

// #define __sentient_pp_is_paren(x) \
//         __sentient_pp_check(__sentient_pp_is_paren_probe x)

// #define __sentient_pp_is_paren_probe(...) \
//         __sentient_pp_probe(~)

// /**
//  * @author Jin
//  * @brief meta logical not implementation
//  * 
//  */
// #define __sentient_pp_not(x) \
//         __sentient_pp_check(__sentient_pp_not_impl(__sentient_pp_not_impl_, x))
// #define __sentient_pp_not_impl_0 \
//         __sentient_pp_probe(~)

// #define __sentient_pp_not_impl(arg, ...) \
//         __sentient_pp_not_impl_impl(arg, __VA_ARGS__)
// #define __sentient_pp_not_impl_impl(arg, ...) \
//                                     arg ## __VA_ARGS__

// /**
//  * @author Jin
//  * @brief 
//  * 
//  */
// #define __sentient_pp_bool(x) \
//         __sentient_pp_complement(__sentient_pp_not(x))

// /**
//  * @author Jin
//  * @brief 
//  * 
//  */
// #define __sentient_pp_if(cond) \
//         __sentient_pp_i_if(__sentient_pp_bool(cond))

// /**
//  * @author Jin
//  * @brief 
//  * 
//  */
// #define __sentient_pp_expand(...) __VA_ARGS__
// #define __sentient_pp_eat(...)
// #define __sentient_pp_when(cond) \
//         __sentient_pp_if(cond)(__sentient_pp_expand, __sentient_pp_eat)

// #define __sentient_pp_empty()
// #define __sentient_pp_defer(x) x __sentient_pp_empty()
// #define __sentient_pp_obstruct(...) \
//         __VA_ARGS__ __sentient_pp_defer(__sentient_pp_empty)()

// #define __sentient_pp_repeat(count, expr, ...) \
//     __sentient_pp_when(count) \
//     ( \
//         __sentient_pp_obstruct(__sentient_pp_indirect) () \
//         ( \
//             __sentient_pp_decrease(count), expr, __VA_ARGS__ \
//         ) \
//         __sentient_pp_obstruct(expr) \
//         ( \
//             __sentient_pp_decrease(count), __VA_ARGS__ \
//         ) \
//     )

// #define __sentient_pp_indirect() __sentient_pp_repeat

#include <sentient/core/pp_utils.h>

int main(int argc, char** argv)
{
    const int i = ___sentient_pp_1(5, 6, 7);

    const int ii = ___sentient_pp_1(___sentient_pp_indirect(5));

    return 0;
};