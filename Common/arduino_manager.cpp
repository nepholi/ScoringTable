/**=============================================================================
* file name  : arduino_manager.cpp
* created    : 2016.04.09
* author     : pow
* copyright  : WAA Team. All rights reserved.
=============================================================================**/

#include "arduino_manager.h"

namespace waa {

ArduinoManager::ArduinoManager()
{
}

ArduinoManager::~ArduinoManager()
{
}

bool ArduinoManager::SetupArduinoEnvironment(bool ArduinoSwtich)
{
	//waa::OpenCom(ArduinoSwtich);
	return true;
}

bool ArduinoManager::PingAuduino()
{
	Serial *ComPort;
	
	return true;
}

bool ArduinoManager::StartArduino()
{
	return true;
}

bool ArduinoManager::EndArduino()
{
	return true;
}

bool ArduinoManager::SendCommandToArduino(int command)
{
	
	char *temp = strdup(PCCommand[command]);
	waa::PC2Arduino(temp);
	return true;
}


}
