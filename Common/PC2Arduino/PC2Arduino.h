#pragma once

#include <iostream>
#include <windows.h>

#include "Serial.h"
#include "stdafx.h"
#define DEF_ARDUINO_COMMAND_NUMBER 16
namespace waa {
	const char PCCommand[DEF_ARDUINO_COMMAND_NUMBER][10] = { "pause", "continue", "start600", "start24", "start14", "TimeInc", "TimeDec", 
		"faulA", "faulB", "period", "left", "right", "IncA", "DecA", "IncB", "DecB" };
	const char ArduinoCommand[DEF_ARDUINO_COMMAND_NUMBER][2] = { "T", "T", "t", "R", "r", "U", "D", "F", "f", "P", "V", "V", "A", "a", "B", "b", };
	
	bool OpenCom(void);
	bool PC2Arduino(char *command);
}