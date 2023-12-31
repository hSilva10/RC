#ifndef RESPONSE_MESSAGES_H
#define RESPONSE_MESSAGES_H


#include "../utils/utils.h"

// Define a structure to hold function pointers
struct ResponseMessages
{
    const char *(*LIN_OK)();
    const char *(*LIN_NOK)();
    const char *(*LIN_REG)();
    const char *(*LIN_ERR)();  

    const char *(*LOU_OK)();
    const char *(*LOU_NOK)();
    const char *(*LOU_UNR)();
    const char *(*LOU_ERR)();  

    const char *(*UNR_OK)();
    const char *(*UNR_NOK)();
    const char *(*UNR_UNR)();
    const char *(*UNR_ERR)();  

    const char *(*LMA_OK)(char *buffer);
    const char *(*LMA_NOK)();
    const char *(*LMA_NLG)();
    const char *(*LMA_ERR)();  

    const char *(*LMB_OK)(char *buffer);
    const char *(*LMB_NOK)();
    const char *(*LMB_NLG)();
    const char *(*LMB_ERR)();  

    const char *(*LST_OK)(char *buffer);
    const char *(*LST_NOK)();
    const char *(*LST_ERR)();  

    const char *(*SRC_OK)(char *buffer);
    const char *(*SRC_NOK)();
    const char *(*SRC_ERR)();  

    const char *(*OPA_OK)(char *buffer);
    const char *(*OPA_NOK)();
    const char *(*OPA_NLG)();
    const char *(*OPA_ERR)();  

    const char *(*CLS_OK)();
    const char *(*CLS_NOK)();
    const char *(*CLS_NLG)();
    const char *(*CLS_EAU)();
    const char *(*CLS_EOW)();
    const char *(*CLS_END)();
    const char *(*CLS_ERR)();  

    const char *(*SAS_OK)(char *buffer);
    const char *(*SAS_NOK)();
    const char *(*SAS_ERR)();  

    const char *(*BID_OK)();
    const char *(*BID_NOK)();
    const char *(*BID_NLG)();
    const char *(*BID_ACC)();
    const char *(*BID_REF)();
    const char *(*BID_ILG)();
    const char *(*BID_ERR)(); 
};

extern const struct ResponseMessages Messages;

#endif