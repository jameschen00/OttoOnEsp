# OttoDiy using a Wemos D1

## Why ?

Well in the first place I had some Wemos D1 lying on my bench but no arduino nano. I ordered one but was so excited to make this cute robot that I decided to try to make my Esp8266 work.

Then WemosD1 as every Esp8266 has built in wifi, and allow you to serve html file from the board. I thought that it would be nice to have a browser based interface to interact with Otto.

## What have been done so far ?

- Otto_easycal : can be compiled and run on WemosD1, updown and walk commands don't work that good at the moment

## Roadmap

Make these sketches compilable and make them run smoothly :

- Otto_ServoHome
- Otto_calibration
- Otto_SingleLadies
- Otto_smooth_criminal
- Otto_smooth_criminal_US
- Otto_avoid

Also I'd like to test all this on NodeMcu

Then I'd like to go my way on cool stuff like :

- OTA : be able to upload new sketches on Otto "Over The Air", with no USB plugged in
- WebInterface : who need a mobile app when you can have a smooth responsive web interface working in any browser
- Add numerous sensors and features... this project is cool :)
