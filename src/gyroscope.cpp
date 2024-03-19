#include "gyroscope.h"

void initGyroscope(MPU6050 &gyroscope)
{
    Wire.begin();
    gyroscope.begin();
    gyroscope.calcGyroOffsets(false); // Change to true info to appear on the serial monitor.
}
