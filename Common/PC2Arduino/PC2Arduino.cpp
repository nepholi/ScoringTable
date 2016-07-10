 //SerialTest.cpp : Defines the entry point for the console application.

#include "PC2Arduino.h"
#include <iostream>
#include <windows.h>

#include "Serial.h"
#include "stdafx.h"

using namespace std;

namespace waa {

	//tstring commPortName((_TCHAR*)"COM9");
	tstring commPortName;// ((_TCHAR*)"COM4");
	Serial serial;
	void ComportSet(char *comport){
		commPortName=((_TCHAR*)comport);
	}
	void ComportInit(void){
		serial.SerialInit(commPortName);
	}
	bool waa::PC2Arduino(char *command){
		int i = 0;
		char buffer = '\0';
		bool status = false;
		//tstring commPortName(Comport);
		//Serial serial(commPortName);
		serial.flush();
	
		do {
			i++;
		} while (strcmp(command, PCCommand[i]) != 0 || i >= DEF_ARDUINO_COMMAND_NUMBER);

		if (i<DEF_ARDUINO_COMMAND_NUMBER && i >= 0)
		{
			//serial.write(ArduinoCommand+i);
			serial.write(ArduinoCommand[i]);
			Sleep(5);
			serial.read(&buffer, 1);
			Sleep(5);
			if (buffer == '0')	status = true;
		}
		else {
			printf("command error,please insert again\n");
		}
	

		return status;
}

};