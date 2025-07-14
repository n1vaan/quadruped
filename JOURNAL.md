---
title: "12 DoF Autonomous Quadruped"
author: "Nivaan Kaushal"
description: "A 12-DOF robotic quadruped powered by an ESP32, utelizing inverse kinematics to aid movement. Includes camera, IMU for intelligent movement. "
created_at: "2025-07-01"
---

## Total Time Spent: ~ 16.5 hours   

### July 1st
Time Spent: ~3 hours  

Today I spent around 3 hours today finalizing the electronics setup for the quadruped. I worked through the voltage and current requirements for all 12 servos, made sure the ESP32 would get clean power, and mapped out how everything would be connected. After a lot of calculations and comparing specs, I landed on a 2S LiPo battery, a 5V 10A buck converter, and a PCA9685 PWM driver to handle the servo control. This setup ensures that each servo will get appropriate power. Next, I aim to make a CAD design for the quadruped that is built around these components. 


