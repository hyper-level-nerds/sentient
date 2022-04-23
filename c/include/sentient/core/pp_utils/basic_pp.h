#ifndef __SENTIENT_CORE_PP_UTILS_BASIC_PP_H__
#define __SENTIENT_CORE_PP_UTILS_BASIC_PP_H__


#ifdef __cplusplus
extern "C"
{
#endif 

/**
 * @author Jin
 * @brief empty pp
 */
#define ___sentient_pp_empty() 

/**
 * @author Jin
 * @brief recursive
 */
#define ___sentient_pp_recurse(x) \
        x ___sentient_pp_recurse(x)

/**
 * @author Jin
 * @brief lazy evaluation
 */
#define ___sentient_pp_defer(...) \
        __VA_ARGS__ ___sentient_pp_empty()

#define ___sentient_pp_defer1(...) \
        __VA_ARGS__ ___sentient_pp_defer(___sentient_pp_empty) ()
#define ___sentient_pp_defer2(...) \
        __VA_ARGS__ ___sentient_pp_defer1(___sentient_pp_empty) ()
#define ___sentient_pp_defer3(...) \
        __VA_ARGS__ ___sentient_pp_defer2(___sentient_pp_empty) ()
// #include <sentient/core/internal/pp_defers.h>

/**
 * @author Jin
 * @brief evaluation
 */
#define ___sentient_pp_eval(...) \
        __VA_ARGS__

#define ___sentient_pp_eval1(...) \
        ___sentient_pp_eval(___sentient_pp_eval(__VA_ARGS__))
#define ___sentient_pp_eval2(...) \
        ___sentient_pp_eval1(___sentient_pp_eval1(__VA_ARGS__))
#define ___sentient_pp_eval3(...) \
        ___sentient_pp_eval2(___sentient_pp_eval2(__VA_ARGS__))
// #include <sentient/core/internal/pp_evals.h>

/**
 * @author Jin
 * @brief 
 */
#define ___sentient_pp_recurse(x) \
        x ___sentient_pp_recurse_indirect ___sentient_pp_empty () () (x)
#define ___sentient_pp_recurse_indirect(x) \
        ___sentient_pp_recurse

#ifdef __cplusplus
}
#endif

#endif