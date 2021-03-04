
/*
 * File:   newavr-main.c
 * Author: I18379
 *
 * Created on July 11, 2018, 2:35 PM
 */


#include <avr/io.h>
#include <avr/eeprom.h>



struct eeprom {
                uint8_t _;
                uint64_t data;
};

struct eeprom EEMEM test[]= {{ 
                .data = 0xAABBCCDDABCDABCD,
    ._ = 1
},{ 
                .data = 0xAABBCCDDABCDABCD,
    ._ = 1
}};


int main() {
  
                return 1;
}

  