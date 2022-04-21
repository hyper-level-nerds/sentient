

set(SENTIENT_C_LIBRARY_SRC
    sentient.c
    core/types.c
    core/memory.c
    core/field_info.c
    core/model_info.c
    core/protocol_info.c
    core/protocol/protocol_error_codes.c
    core/protocol/protocol_node.c)

add_library(sentient ${SENTIENT_C_LIBRARY_SRC})