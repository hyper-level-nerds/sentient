#include <sentient/core/memory.h>
#include <sentient/core/types.h>
#include <stdlib.h>


#ifdef SENTIENT_C_USE_ZEPHYR
#define SENTIENT_MALLOC_API k_malloc
#define SENTIENT_CALLOC_API k_calloc
#define SENTIENT_FREE_API   k_free
#elif SENTIENT_C_USE_FREERTOS
#define SENTIENT_MALLOC_API pvPortMalloc
#define SENTIENT_CALLOC_API(CNT, SIZE) \
	SENTIENT_MALLOC_API(CNT * SIZE)
#define SENTIENT_FREE_API   vPortFree
#else
#define SENTIENT_MALLOC_API malloc
#define SENTIENT_CALLOC_API calloc
#define SENTIENT_FREE_API   free
#endif


static
const sentient_size
sentient_type_info_prealloc_size =
	sizeof(sentient_model_uid);

sentient_void*
sentient_malloc(enum sentient_field_types type)
{
	sentient_void* ptr = sentient_nullptr;

	ptr = SENTIENT_MALLOC_API(
		sentient_type_info_prealloc_size + 1);

	return ptr;
}

sentient_void*
sentient_calloc(enum sentient_field_types type, sentient_size count)
{
	sentient_void* ptr = sentient_nullptr;

	return ptr;
}

sentient_void
sentient_free(void* model_ptr)
{

}