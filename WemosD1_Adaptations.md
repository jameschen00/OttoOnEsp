# OttoDiy using a Wemos D1

## Why ?

Well in the first place I had some Wemos D1 lying on my bench but no arduino nano. I ordered one but was so excited to make this cute robot that I decided to try to make my Esp8266 work.

Then WemosD1 as every Esp8266 has built in wifi, and allow you to serve html file from the board. I thought that it would be nice to have a browser based interface to interact with Otto.

## What have been done so far ?

| Sketches                | Working  | Comments |
| ----------------------- | :------: | -------- |
| Otto_easycal            | 100% ok  |          |
| Otto_ServoHome          | 100% ok  |          |
| Otto_singleladies       | 100% ok  | https://youtu.be/0ht7QITkSCU |
| Otto_smooth_criminal    | 100% ok  |          |
| Otto_smooth_criminal_US | no       | Waiting for my UltraSonic sensor to come ;) |
| Otto_avoid              | no       |          |
| Otto_calibration        | no       | I will rewrite quite everything in this sketch. Using SerialUi is not the best option for ESP |

## Supported sensors & devices

At the moment, the otto sensor/devices may be disabled using #ifdef Use_SensorName to take one problem after the other :

| Sensor/device        | Working  | Comments |
| -------------------- | :------: | -------- |
| Legs Servos          | yes      |          |
| Buzzer               | yes      |          |
| UltraSonic sensor    | no       | will work on it asap |
| Battery reader       | no       | Only one analog pin on Wemos, may conflict with noise sensor |
| Noise sensor         | no       | Only one analog pin on Wemos, may conflict with battery reader |
| Led matrix           | no       |          |

## Roadmap

Make all sketches compilable and make them run smoothly.

Also I'd like to test all this on NodeMcu and ESP32

Then I'd like to go my way on cool stuff like :

- OTA : be able to upload new sketches on Otto "Over The Air", with no USB plugged in
- WebInterface : who need a mobile app when you can have a smooth responsive web interface working in any browser
- Add numerous sensors and features... this project is cool :)
