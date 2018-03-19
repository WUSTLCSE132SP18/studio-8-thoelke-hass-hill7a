#include <Wire.h> // Must include Wire library for I2C
#include <SparkFun_MMA8452Q.h> // Includes the SFE_MMA8452Q library

MMA8452Q accel; // Default MMA8452Q object create. (Address = 0x1D)


void setup () {
  Serial.begin(9600);

  accel.init(); // Default init: +/-2g and 800Hz ODR

}

void loop () {
  if (accel.available()) {
    accel.read(); // Update acceleromter data

    //  xAcceleration = accel.cx; // Read in calculated x-axis acceleration

    Serial.print(accel.cx);
    Serial.print(",");
    //  yAcceleration = accel.cy; // Read in calculated y-axis acceleration

    Serial.print(accel.cy);
    Serial.print(",");

    //  zAcceleration = accel.cz; // Read in calculated z-axis acceleration

    Serial.print(accel.cz);
    //   Serial.print(",");
    Serial.println();
  }

}

