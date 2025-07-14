---
title: "BreatheTrack Solar‑Powered PCB Design"
author: "Lance Martinez"
description: "Solar panel, battery charger, protection, and boost stages to power our custom ESP32‑AQI sensor board from sunlight alone."
created_at: "2025-06-14"
---

## Total Time Spent: ~ 16.5 hours   

### June 3
Time Spent: ~6 hours  

Today, I focused on building the core ESP32 section of our custom PCB in KiCad 9.0. I added all the main headers, supporting components, and filtered power supply for the ESP32. This includes decoupling capacitors, pull-up resistors, and the external crystal to keep the ESP32 stable. This was my first time building something like this, so I carefully checked all the pin assignments and made sure everything matched the microcontroller datasheet.

![Day 1](img/Day%201.png)


### June 5
Time Spent: ~3 hours  
Today I started adding power management to the board. I wired in the solar panel input with a Schottky diode, connected it to a TP4056 charging IC with battery protection, and then added a boost converter to step up the voltage for the ESP32. I also placed the JST connectors for both the battery and solar panel. Getting all the power paths correct took some troubleshooting, especially routing from the solar panel through the diode into the charger. I made sure everything would pass power safely and avoid battery drain through the panel at night.

![Day 2](img/Day%202.png)




### June 10
Time Spent: ~3 hours  
This day was all about finishing the wiring. I routed power and signal lines for the full system, including the ESP32, USB port, and power modules. I carefully laid out the boost converter output to feed into the ESP32's 5V input rail and added silkscreen labels for clarity. I also added vias and filled in ground planes to reduce noise and improve current return paths. The PCB was becoming more complete and compact, and I started preparing for design rule checks.

![Day 3](img/Day%203.png)


### June 12

Time Spent: ~1.5 hours   

Today, I finalized the 3D-printed enclosure for our system. This case securely holds the ESP32, AQI sensor, and the breadboard containing the circuitry. The design includes precision slots that apply just enough pressure to hold the board firmly in place. The top and bottom covers snap into the frame and leave space for airflow, allowing accurate environmental readings. Building this physical housing was a major step toward making our device ready for outdoor areas.

![Prototype CAD](img/prototypecad.png)


## June 14
Time Spent: ~3 hours  
Today I fixed the final DRC errors and reviewed the board for manufacturing. I checked footprint sizes, confirmed that clearances were good, and ran the 3D viewer for the first time to confirm everything looked right. Seeing the board in 3D helped catch small alignment issues, and I made final tweaks to trace widths and placements. Now, the board is ready to export Gerber files and send for fabrication!

![Day 4](img/Day%204.png)

