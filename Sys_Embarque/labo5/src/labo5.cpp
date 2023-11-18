/*
 * labo2.cpp
 *
 *  Created on:
 *      Author:
 */

#include "mbed.h"
I2C i2c(P0_10, P0_11);
Serial pc(USBTX,USBRX);

void read_btn(void){
	uint8_t val_read;
	uint8_t address = 0x1C;
	uint8_t addr_btn = 0x03;

	while (1) {
		i2c.start();
		i2c.write(address << 1);
		i2c.write(addr_btn);
		i2c.stop();

		i2c.start();
		i2c.write((address << 1) + 1);
		val_read = i2c.read(0) >> 4;
		i2c.stop();
	}
}

int main(void) {
	uint8_t val_read;
	uint8_t address = 0x1C;

	while (1) {
		wait_ms(50);
		i2c.start();
		i2c.write((address << 1));
		i2c.write(0x14);
		i2c.write(0x80);
		i2c.stop();

		i2c.start();
		i2c.write((address << 1) + 1);
		val_read = i2c.read(0x05);
		i2c.stop();

	}
}

