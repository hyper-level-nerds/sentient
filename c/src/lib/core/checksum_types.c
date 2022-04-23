#include <sentient/core/checksum_types.h>

static
sentient_bool
sentient_match_checksum_crc1(sentient_void* data,
                             sentient_size data_size)
{
    bool result = false;

    return result;
}

static
sentient_bool
sentient_match_checksum_crc5(sentient_void* data,
                             sentient_size data_size)
{
    bool result = false;

    return result;
}
static
sentient_bool
sentient_match_checksum_crc7(sentient_void* data,
                             sentient_size data_size)
{
    bool result = false;

    return result;
}
static
sentient_bool
sentient_match_checksum_crc8(sentient_void* data,
                             sentient_size data_size)
{
    bool result = false;

    return result;
}
static
sentient_bool
sentient_match_checksum_crc8_fletcher(sentient_void* data,
                                      sentient_size data_size)
{
    bool result = false;

    return result;
}
static
sentient_bool
sentient_match_checksum_crc16_fletcher(sentient_void* data,
                                       sentient_size data_size)
{
    bool result = false;

    return result;
}
static
sentient_bool
sentient_match_checksum_crc16_adler_a(sentient_void* data,
                                      sentient_size data_size)
{
    bool result = false;

    return result;
}
static
sentient_bool
sentient_match_checksum_crc16_adler_b(sentient_void* data,
                                      sentient_size data_size)
{
    bool result = false;

    return result;
}
static
sentient_bool
sentient_match_checksum_CRC16_ccitt(sentient_void* data,
                                    sentient_size data_size)
{
    bool result = false;

    return result;
}
static
sentient_bool
sentient_match_checksum_CRC16_ibm(sentient_void* data,
                                  sentient_size data_size)
{
    bool result = false;

    return result;
}
static
sentient_bool
sentient_match_checksum_crc32_adler(sentient_void* data,
                                    sentient_size data_size)
{
    bool result = false;

    return result;
}
static
sentient_bool
sentient_match_checksum_crc32_ieee_802_3(sentient_void* data,
                                         sentient_size data_size)
{
    bool result = false;

    return result;
}
static
sentient_bool
sentient_match_checksum_crc32_castagnoli(sentient_void* data,
                                         sentient_size data_size)
{
    bool result = false;

    return result;
}

static
sentient_bool
sentient_match_checksum_crc64_iso(sentient_void* data,
                                  sentient_size data_size)
{
    bool result = false;

    return result;
}
static
sentient_bool
sentient_match_checksum_crc64_ecma_182(sentient_void* data,
                                       sentient_size data_size)
{
    bool result = false;

    return result;
}

static
sentient_bool
sentient_match_checksum_crc128(sentient_void* data,
                               sentient_size data_size)
{
    bool result = false;

    return result;
}

sentient_bool
sentient_match_checksum(enum sentient_checksum_types cs_type,
                        sentient_void* cs_data,
                        sentient_size  cs_data_size)
{
    sentient_bool result = true;

    switch(cs_type)
    {
    case SENTIENT_CHECKSUM_TYPES_NONE:
    {
        break;
    }
    case SENTIENT_CHECKSUM_TYPES_CRC1:
    {
        result = sentient_match_checksum_crc1(cs_data, cs_data_size);
        break;
    }
    case SENTIENT_CHECKSUM_TYPES_CRC5:
    {
        result = sentient_match_checksum_crc1(cs_data, cs_data_size);
        break;
    }
    case SENTIENT_CHECKSUM_TYPES_CRC7:
    {
        result = sentient_match_checksum_crc1(cs_data, cs_data_size);
        break;
    }
    case SENTIENT_CHECKSUM_TYPES_CRC8:
    {
        result = sentient_match_checksum_crc1(cs_data, cs_data_size);
        break;
    }
    case SENTIENT_CHECKSUM_TYPES_CRC8_FLETCHER:
    {
        result = sentient_match_checksum_crc1(cs_data, cs_data_size);
        break;
    }
    case SENTIENT_CHECKSUM_TYPES_CRC16_FLETCHER:
    {
        result = sentient_match_checksum_crc1(cs_data, cs_data_size);
        break;
    }
    case SENTIENT_CHECKSUM_TYPES_CRC16_ADLER_A:
    {
        result = sentient_match_checksum_crc1(cs_data, cs_data_size);
        break;
    }
    case SENTIENT_CHECKSUM_TYPES_CRC16_ADLER_B:
    {
        result = sentient_match_checksum_crc1(cs_data, cs_data_size);
        break;
    }
    case SENTIENT_CHECKSUM_TYPES_CRC16_CCITT:
    {
        result = sentient_match_checksum_crc1(cs_data, cs_data_size);
        break;
    }
    case SENTIENT_CHECKSUM_TYPES_CRC16_IBM:
    {
        result = sentient_match_checksum_crc1(cs_data, cs_data_size);
        break;
    }
    case SENTIENT_CHECKSUM_TYPES_CRC32_ADLER:
    {
        result = sentient_match_checksum_crc1(cs_data, cs_data_size);
        break;
    }
    case SENTIENT_CHECKSUM_TYPES_CRC32_IEEE_802_3:
    {

        break;
    }
    case SENTIENT_CHECKSUM_TYPES_CRC32_CASTAGNOLI:
    {

        break;
    }
    case SENTIENT_CHECKSUM_TYPES_CRC64_ISO:
    {

        break;
    }
    case SENTIENT_CHECKSUM_TYPES_CRC64_ECMA_182:
    {

        break;
    }
    case SENTIENT_CHECKSUM_TYPES_CRC128:
    {

        break;
    }
    }

    return result;
}