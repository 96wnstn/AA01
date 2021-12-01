#include <Arduino_LSM9DS1.h>

void setup() {
  Serial.begin(9600);
  if (!IMU.begin()) { //LSM9DS1센서 시작
    Serial.println("LSM9DS1센서 오류!");
    while (1);
  }
}

float ax, ay, az;
float gx, gy, gz;
float mx, my, mz;

void loop() {
  //가속도센서
  if (IMU.accelerationAvailable()) {
    IMU.readAcceleration(ax, ay, az);
     Serial.print("aa01,ax: ");
    Serial.print(ax);
    Serial.print(",ay: ");
    Serial.print(ay);
    Serial.print(",az: ");
    Serial.print(az);
  }
  
  if  (IMU.gyroscopeAvailable()) {
    IMU.readGyroscope(gx, gy, gz);
     Serial.print(" gx: ");
    Serial.print(gx);
    Serial.print(",gy: ");
    Serial.print(gy);
    Serial.print(",gz: ");
    Serial.print(gz);
  }
  
  if  (IMU.magneticFieldAvailable()) {
    IMU.readMagneticField(mx, my, mz);
     Serial.print(" mx: ");
    Serial.print(mx);
    Serial.print(",my: ");
    Serial.print(my);
    Serial.print(",mz: ");
    Serial.println(mz);
  }
  delay(2000);
}
  
  
