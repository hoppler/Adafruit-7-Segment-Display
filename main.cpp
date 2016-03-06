//
// Created by hoppler on 3/5/16.
//

#include <wiringPi.h>
#include <iostream>
#include <cstring>

#include "Adafruit_LEDBackpack.h"

int main(int argc, char** argv)
{
	if (wiringPiSetup () < 0) {
		std::cout<< "Unable to setup wiringPi: " << strerror (errno) << std::endl;
		return 1;
	}

	auto tmpDisplay = Adafruit_7segment();
	tmpDisplay.begin(0x70);
	//tmpDisplay.begin("/dev/i2c-1", 0x70);
	tmpDisplay.print(10);
	tmpDisplay.writeDisplay();

	return 0;
}
