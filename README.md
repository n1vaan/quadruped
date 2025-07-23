# Quadruped Robot

### Project Description

This is a smart quadruped robot dog that imitates the Boston Dynamics robot Spot. It uses inverse kinematics logic, along with visual input through cameras and quantitive measurements through an IMU to inform it's walking and movement algorithmns. 


### Why we made it

We set out to build a quadruped robot to better understand how complex systems like locomotion, balance, and perception work together in robotics. This project gave us the opportunity to apply concepts like inverse kinematics, sensor integration, and real-time control in a hands-on way. Building a walking robot also pushed us to think carefully about both mechanical design and software logic.

## Fully Assembled Prototype 
![CAD](img/day4_1.png)

## Rendered Prototype 
![CAD](img/render.png)

## Circuit 
![Circuitry](img/schematic.png)
![Diagram](img/circuitdiagram.png)


## Bill of Materials (BOM)

| Component                           | Quantity | Price Estimate | Link |
|-------------------------------------|----------|----------------|------|
| MG996R Motors                       | 8        | $36        | [Amazon](https://www.amazon.com/6-Pack-MG996R-Torque-Digital-Helicopter/dp/B07MFK266B/ref=asc_df_B0BMM1G74B?mcid=895b588916e63ac8979880c805978872&hvocijid=14981104030393967827-B0BMM1G74B-&hvexpln=73&tag=hyprod-20&linkCode=df0&hvadid=721245378154&hvpos=&hvnetw=g&hvrand=14981104030393967827&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9007587&hvtargid=pla-2281435179018&th=1) |
| PCA9685                             | 1        | $14            | [Amazon](https://www.amazon.com/HiLetgo-PCA9685-Channel-12-Bit-Arduino/dp/B07BRS249H/ref=sr_1_1_sspa?crid=23PBH9MR11NR3&dib=eyJ2IjoiMSJ9.K8E8lR6SJTCT20R4w3dp2WKv3ytACOiSBWQcGH08smWSlCXtz7XgDCyFnZ_gcVe2dEEXjvic6CCSOO1kHDambBWjUWGrWIJYlO6f_m79qbhOEXqG0aLm66LBFJZUTy0OFIgKEa4aObNYtcLky7pP3za-gu2NZNPvBzu8Bj4k4uOx-WY5QeQicOVYAY-MnuEOHaEKGRaoBpRu4Tk-Dt6G6qyFgM7wjFg3VPR9VA-Cx2M.YYJRKkS-cEUj1t-PUgqbqWOas5KVWs-Q6icrg3tflYc&dib_tag=se&keywords=PCA9685&qid=1752531396&s=toys-and-games&sprefix=pca9685%2Ctoys-and-games%2C108&sr=1-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1) |
| XT60 Connectors              | 1               | $9              | [Amazon](https://www.amazon.com/Pairs-Female-Connector-Silicon-Battery/dp/B07QH249CR/ref=sr_1_11?crid=2Q56W344FN55P&dib=eyJ2IjoiMSJ9.nngpRUVRf-DUgyRDqeJY9vdU0cMqA_02N_U8sDkrIEAtmZ1iJ1q1ZNx6ShGuKxn0Dtx1ORqsrY77WSiGVR7FQNoTPzKgc3yXwCDGulzXYo35mt7GONtiUoZNxVzt44iLMZ4zg8S-wu2VGJG2wDMWM9sJMIsq7KWVs0ONYNPlQEiT18tCS51FweuicbFQ8uAgBpq_MEqPX4ggIKRx0PQu5yvdBACARmPvOYuljv-Vi6XBEsnbruduSDk_OlB8DRYeLf4j4iAqbS2JhS3_Thqk3LJsnxe2v5oNzYwB-o1sIDI.gGUBmpCAWNn8I4ges7l_pFt6xGPn5RnJWWRhuMnntdU&dib_tag=se&keywords=xt60+connector&qid=1752709748&sprefix=xt%2Caps%2C111&sr=8-11) 
| 12V to 5V Voltage Transformer       | 1        | $10             | [Amazon](https://www.amazon.com/VOLRANTISE-Converter-Voltage-Regulator-Transformer/dp/B09WZ9DC9W/ref=sr_1_1_sspa?crid=1H72N4HAQF4TO&dib=eyJ2IjoiMSJ9.6_PEK-XO0rSnnr_wx3-z-oRYOH9WR49jl9Xul-m4QfPEHbvHl5swrXt5uwW98O5imOETmMBVh3Pex7x_IPD5OeCgKrK_IgI5YbCKmpib4ToQs7U-vwr5QP0zQvNNkVHmaVq8dB1tXs_yqnsRubKGyyq-Gme4_lDAXixsHlRKAkO2UKzpYGns-xeLhFgWfMg3eS99veSm9a9Dv6fpy2KTrCSAmEEOmZdQxFAbJ5pR5fQ.4xJDbfwcJAoW4umYmHvj8vvVMw5hBgy5NnmDEC9v6pA&dib_tag=se&keywords=DC%2B12V%2F24V%2Bto%2B5V%2B10A%2BConverter%2B-%2BVoltage%2BRegulator%2BStep%2BDown%2BBuck%2BConverter%2BPower%2BSupply%2BTransformer%2B(12V%2F24V%2Bto%2B5V%2B10A)&qid=1752709920&sprefix=dc%2B12v%2F24v%2Bto%2B5v%2B10a%2Bconverter%2B-%2Bvoltage%2Bregulator%2Bstep%2Bdown%2Bbuck%2Bconverter%2Bpower%2Bsupply%2Btransformer%2B12v%2F24v%2Bto%2B5v%2B10a%2B%2Caps%2C57&sr=8-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&th=1)|
| Raspberry Pi Zero 2 W        | 1                | $22             | [Amazon](https://www.amazon.com/Raspberry-Zero-Bluetooth-RPi-2W/dp/B09LH5SBPS/ref=sr_1_1?crid=YBII58N2AFOE&dib=eyJ2IjoiMSJ9.3BENuF2Ktu1UHOlVshSOQZzPdcY9VetMFfLCt_cnJtKyG4m6kvjrZYj-Upstp7VqZ5hGCCLio9i8bRsnCZtpddN0fAAcCS9_AriKg-FHo6dtItEyPG7QCAOOMKk0KFGWQvbmohc-ScqLmoSfzOmZhhLlL2TRA_TMIk8vky2aN5XNiiVgrpjahg-J-Ae5p7Lnex38wwuj6Kzxu4ORkyE7moN_XeOC9_llyhx8fib8soY.Dmye3VPpw5p6UiQxGGoaQT12ZmI4RLMhwQkPma2joDM&dib_tag=se&keywords=raspberry+pi+0&qid=1752877463&sprefix=raspberry+pi+0%2Caps%2C212&sr=8-1)
| Total                        | 14               | $91             | N/A |

