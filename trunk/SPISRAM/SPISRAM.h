/*
  Copyright (c) 2010 by arms22 (arms22 at gmail.com)
  Microchip 23x256 SPI SRAM library for Arduino
  
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
*/

#ifndef SPISRAM_H
#define SPISRAM_H

#include <SPI.h>

class SPISRAM
{
public:
	SPISRAM(byte ncsPin);
	byte read(unsigned int address);
	void read(unsigned int address, byte *buffer, unsigned int size);
	void write(unsigned int address, byte data);
	void write(unsigned int address, byte *buffer, unsigned int size);
private:
	byte _ncsPin;
	byte _buf[4];
	void select(void);
	void deselect(void);
	byte transfer(byte length);
};

#endif
