/* NOTE THAT MANY NUMBERS ARE APPROXIMATIONS UNTIL MOTORS 
   ARE IN HAND AND PARTS ARE PRINTED. */

#include <cmath>
#include <tuple> 
#include <Wire.h>
#include "MPU6050.h"
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
MPU6050 imu;

struct Orientation {
    double pitch;
    double roll;
    double yaw;
};

struct JointAngles {
    double hip;
    double shoulder;
    double knee;
};

Orientation readIMU() {
    imu.update();

    Orientation o;
    o.pitch = imu.getAngleX(); 
    o.roll  = imu.getAngleY(); 
    o.yaw   = imu.getAngleZ(); 

    return o;
}

JointAngles inverseKinematics(double x, double y, double l1, double l2, double hipAngle) {
    double c = std::sqrt(x * x + y * y);
    double theta2 = std::acos((c * c - l1 * l1 - l2 * l2) / (2 * l1 * l2)); // Law of Cosines

    double phi = std::atan2(y, x);
    double psi = std::atan2(l2 * std::sin(theta2), l1 + l2 * std::cos(theta2));
    double theta1 = phi - psi;
    JointAngles angles;
    angles.hip = hipAngle;                       
    angles.shoulder = theta1 * 180.0 / M_PI;    
    angles.knee = theta2 * 180.0 / M_PI;
    return angles;
}

int degreesToPulse(double degrees) {
    int servoMin = 150; // ** APPROXIMATION **
    int servoMax = 600; // ** APPROXIMATION **
    return map(degrees, 0, 180, servoMin, servoMax);
}

void moveLeg(int hipChannel, int shoulderChannel, int kneeChannel,
             double x, double y, double l1, double l2, double hipAngle) {
    JointAngles ang = inverseKinematics(x, y, l1, l2, hipAngle);

    pwm.setPWM(hipChannel, 0, degreesToPulse(ang.hip));
    pwm.setPWM(shoulderChannel, 0, degreesToPulse(ang.shoulder));
    pwm.setPWM(kneeChannel, 0, degreesToPulse(ang.knee));
}

void walk(double stepLength, double liftHeight, double l1, double l2, int stepDelay) {
    double baseX = 10; 
    double baseY = -15; 

    moveLeg(0, 1, 2, baseX + stepLength, baseY + liftHeight, l1, l2, 90);
    moveLeg(9, 10, 11, baseX + stepLength, baseY + liftHeight, l1, l2, 90);
    delay(stepDelay);

    moveLeg(0, 1, 2, baseX + stepLength, baseY, l1, l2, 90);
    moveLeg(9, 10, 11, baseX + stepLength, baseY, l1, l2, 90);
    delay(stepDelay);

    moveLeg(3, 4, 5, baseX + stepLength, baseY + liftHeight, l1, l2, 90);
    moveLeg(6, 7, 8, baseX + stepLength, baseY + liftHeight, l1, l2, 90);
    delay(stepDelay);

    moveLeg(3, 4, 5, baseX + stepLength, baseY, l1, l2, 90);
    moveLeg(6, 7, 8, baseX + stepLength, baseY, l1, l2, 90);
    delay(stepDelay);
}

void setup(){
    Serial.begin(115200);
    Wire.begin();

    imu.begin();
    imu.calcGyroOffsets(); 

    pwm.begin();
    pwm.setPWMFreq(50); 

}

void loop(){
    Orientation ori = readIMU();

    Serial.print("Pitch: "); Serial.print(ori.pitch);
    Serial.print("  Roll: "); Serial.print(ori.roll);
    Serial.print("  Yaw: "); Serial.println(ori.yaw);

    delay(50); 

    walk(5, 3, 8, 8, 300); // ** APPROXIMATIONS **
}