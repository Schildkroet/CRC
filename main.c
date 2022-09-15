#include <stdio.h>
#include "CRC.h"


int main(void)
{
    uint8_t data[8] = {1,2,3,4,5,6,7,8};
        
    CRC_Init();
        
    uint8_t ret = CRC_CalculateCRC8(data, 8);
    uint16_t ret1 = CRC_CalculateCRC16(data, 8);
    uint32_t ret2 = CRC_CalculateCRC32(data, 8);
        
    printf("CRC8 : 0x%X\n", ret);
    printf("CRC16: 0x%X\n", ret1);
    printf("CRC32: 0x%X\n", ret2);
        
        
    return 0;
}
