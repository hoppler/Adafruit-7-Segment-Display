//
// Created by hoppler on 3/5/16.
//

#include "wiringPi.h"
#include "Adafruit_LEDBackpack.h"
#include <iostream>
#include <cstring>


int main(int argc, char** argv)
{
	if (wiringPiSetup () < 0) {
		fprintf (stderr, "Unable to setup wiringPi: %s\n", strerror (errno));
		return 1;
	}

	auto tmpDisplay = Adafruit_7segment();
	tmpDisplay.begin(0x70);
	tmpDisplay.print(9999);
	tmpDisplay.writeDisplay();

	return 0;
}
