# stm32f411_bare_metal


platformio project init --board blackpill_f411ce

 ini file chage

[env:blackpill_f411ce]<br/>
platform = ststm32<br/>
board = blackpill_f411ce<br/>
framework = libopencm3<br/>
debug_tool = jlink<br/>
upload_protocol = jlink<br/>


or

framework = cmsis

pio run -t upload

