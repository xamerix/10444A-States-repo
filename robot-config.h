using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor intake;
extern motor flywheel;
extern digital_out indexer;
extern motor RightBottom;
extern motor RightTop;
extern motor RightFront;
extern digital_out angler;
extern motor LeftBottom;
extern motor LeftTop;
extern motor LeftFront;
extern inertial imu;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );