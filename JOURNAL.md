---
title: "12 DoF Autonomous Quadruped"
author: "Nivaan Kaushal"
description: "A 12-DOF robotic quadruped powered by an ESP32, utelizing inverse kinematics to aid movement. Includes camera, IMU for intelligent movement. "
created_at: "2025-07-01"
---

## Total Time Spent: ~ 16.5 hours   

### July 1st
Time Spent: ~3 hours  

Today I spent around 3 hours finalizing the electronics setup for the quadruped. I worked through the voltage and current requirements for all 12 servos, made sure the ESP32 would get clean power, and mapped out how everything would be connected. After a lot of calculations and comparing specs, I landed on a 2S LiPo battery, a 5V 10A buck converter, and a PCA9685 PWM driver to handle the servo control. This setup ensures that each servo will get appropriate power. I will need 12 MG996R servos, as they are high torque, allow angle setting, and also affordable.  Next, I aim to make a CAD design for the quadruped that is built around these components. 

### July 2nd
Time Spent: ~2 hours

Today I spent around 2 hours constructing the central enclosure for the quadruped. This was particularly challenging because I had to design it with the constraints of the motors and circuitry, maintaining enough space for all the components but also staying lightweight. I found an online model of the MG996R servos, which was particularly helpful when designing the enclosure rather than just using numerical measurements. I also planned servo placement; the 4 servos shown below serve as hips. I will have 4 more servos serving as rotation points for the leg, and 4 others serving as knee joints. Hopefully the servos have enough power to sustain this load. 

![Day 1 Image](img/day1.png)

### July 3rd
Time Spent: ~5 hours

Today I spent around 5 hours designing the leg brace for the leg motor joints. This was especially time consuming because I learned to use a new tool: Fusion's Generative Design Tool. I first made a rough enclosure for the motor. This part was pretty easy. Then, I watched a tutorial on the generative design feature in Fusion. After watching it, I set the Preserve Geometry, Obstacle Geometry, and the Starting Shape. I ran several iterations of the Generative Design. After around 3 hours, I finally generated this really cool design that reduced weight while remaining structurally sound. I am really glad that I learned this new skill and will continue to use it on this project. 

![Day 2 Image](img/day2.png)
![Day 2 Image](img/day2_2.png)
![Day 2 Image](img/day2_3.png)
![Day 2 Image](img/day2_4.png)


