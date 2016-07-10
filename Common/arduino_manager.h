/**=============================================================================
* file name  : arduino_manager.h
* created    : 2016.04.09
* author     : pow
* copyright  : WAA Team. All rights reserved.
=============================================================================**/
#pragma once

#include <JuceHeader.h>
#include <Common/PC2Arduino/Serial.h>
#include <Common/PC2Arduino/PC2Arduino.h>



namespace waa {

	enum ArduinoCommand : int {
		aGameClockPause = 0,
		aGameClockContinue = 1,
		aGameClockReset = 2,
		aShotClockReset_24 = 3,
		aShotClockReset_14 = 4,
		aGameClockIncrease = 5,
		aGameClockDecrease = 6,
		aHomeFaul = 7,
		aGuestFaul = 8,
		aPeroid = 9,
		aHomeOffense = 10,
		aGuestOffense = 11,
		aHomeScoreIncrease = 12,
		aHomeScoreDecrease = 13,
		aGuestScoreIncrease = 14,
		aGuestScoreDecrease = 15
		
	};
	

class ArduinoManager
{
public:
	ArduinoManager();
	~ArduinoManager();

	bool SetupArduinoEnvironment(bool ArduinoSwtich);
	bool PingAuduino();

	bool StartArduino();
	bool EndArduino();

	static bool SendCommandToArduino(int command);

private:

};


}