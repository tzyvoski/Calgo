#ifndef TTYPES_H

#define TTYPES_H

typedef enum
{
    CALGO_OUTPUT_TOKEN  = 0xB00,
    CALGO_INPUT_TOKEN   = 0xB01,
    CALGO_DECLARE_TOKEN = 0xB02,
    CALGO_SET_TOKEN     = 0xB03,
    CALGO_IF_TOKEN      = 0xB04,
    CALGO_ELSE_TOKEN    = 0xB05,
    CALGO_END_TOKEN     = 0xB06,
    CALGO_FOR_TOKEN     = 0xB07,
    CALGO_WHILE_TOKEN   = 0xB08
} token_t;

#endif
