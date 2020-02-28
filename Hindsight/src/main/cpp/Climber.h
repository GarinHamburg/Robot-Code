#ifndef CLIMBER_H
#define CLIMBER_H

#include <frc/Solenoid.h>
#include <frc/DoubleSolenoid.h>
#include <frc/Compressor.h>
#include <frc/Spark.h>

class Climber {
public:
	Climber(int leftClimberUpPort, int leftClimberDownPort, int rightClimberUpPort, int rightClimberDownPort, int winchMotorPort);
	void StartCompressor();
	void StopCompressor();
	void LiftClimber();
	void LowerClimber();
	void WinchSpeed(double speed);
private:
	frc::DoubleSolenoid leftClimber;
	frc::DoubleSolenoid rightClimber;
	frc::Compressor hindsightCompressor;
	frc::Spark winch;
};

#endif