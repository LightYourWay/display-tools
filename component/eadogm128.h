/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __EADOGM128_H__
#define __EADOGM128_H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "spi_api.h"
    class eadogm128
    {
        spi_api& spiHandle;

    public:
        eadogm128(spi_api* spi_handle);

        void writeRegister(uint8_t register_addr, uint8_t data);
    };

#ifdef __cplusplus
}
#endif

#endif /* __EADOGM128_H__ */