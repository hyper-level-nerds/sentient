#include <sentient/core/memory.h>
#include <sentient/core/types.h>
#include <sentient/core/model_info.h>

#include <stdlib.h>
#include <string.h>


#ifdef SENTIENT_C_USE_ZEPHYR
#include <zephyr/zephyr.h>

#define SENTIENT_MALLOC_API k_malloc
#define SENTIENT_CALLOC_API k_calloc
#define SENTIENT_FREE_API   k_free
#elif SENTIENT_C_USE_FREERTOS
#include <FreeRTOS.h>

#define SENTIENT_MALLOC_API pvPortMalloc
#define SENTIENT_CALLOC_API(CNT, SIZE) \
	SENTIENT_MALLOC_API(CNT * SIZE)
#define SENTIENT_FREE_API   vPortFree
#else
#define SENTIENT_MALLOC_API malloc
#define SENTIENT_CALLOC_API calloc
#define SENTIENT_FREE_API   free
#endif



/**
 * @author Jin
 * @brief 
 * 
 * @param type 
 * @return sentient_void* 
 */
sentient_void*
__sentient_malloc_impl(sentient_model_uid type)
{
	sentient_void* ptr = sentient_nullptr;

	sentient_ssize model_size = 0;

	model_size =
		sentient_get_model_struct_size(type);

	if (model_size != -1)
	{
		ptr = SENTIENT_MALLOC_API(
			sizeof(sentient_model_uid) + model_size);
	}

	if (ptr != sentient_nullptr)
	{
		ptr = memmove(ptr, &type, sizeof(sentient_model_uid));
	}

	return ptr + sizeof(sentient_model_uid);
}

/**
 * @author Jin
 * @brief 
 * 
 * @param type 
 * @param count 
 * @return sentient_void* 
 */
sentient_void*
__sentient_calloc_impl(sentient_model_uid type, sentient_size count)
{
	sentient_void* ptr = sentient_nullptr;

	sentient_ssize model_size = 0;

	model_size =
		sentient_get_model_struct_size(type);

	if (model_size != -1)
	{
		ptr = SENTIENT_CALLOC_API(
			count,
			sizeof(sentient_model_uid) + model_size);
	}

	if (ptr != sentient_nullptr)
	{
		ptr = memmove(ptr, &type, sizeof(sentient_model_uid));
	}

	return ptr + sizeof(sentient_model_uid);
}

/**
 * @author Jin
 * @brief 
 * 
 * @param model_ptr 
 * @return sentient_void 
 */
sentient_void
sentient_free(void* model_ptr)
{
	SENTIENT_FREE_API(model_ptr - sizeof(sentient_model_uid));
}