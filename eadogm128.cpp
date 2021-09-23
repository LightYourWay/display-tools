#include "eadogm128.h"

eadogm128::eadogm128(spi_api* spi_handle) : spiHandle(*spi_handle) {}

void eadogm128::writeRegister(uint8_t register_addr, uint8_t data)
{
    spiHandle.start();
    spiHandle.sendByte(register_addr);
    spiHandle.sendByte(data);
    spiHandle.stop();
}
