#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor intake = motor(PORT16, ratio6_1, false);
motor flywheel = motor(PORT19, ratio6_1, false);
digital_out indexer = digital_out(Brain.ThreeWirePort.H);
motor RightBottom = motor(PORT21, ratio6_1, false);
motor RightTop = motor(PORT20, ratio6_1, true);
motor RightFront = motor(PORT7, ratio6_1, false);
digital_out angler = digital_out(Brain.ThreeWirePort.C);
motor LeftBottom = motor(PORT9, ratio6_1, true);
motor LeftTop = motor(PORT8, ratio6_1, false);
motor LeftFront = motor(PORT3, ratio6_1, true);
inertial imu = inertial(PORT10);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}