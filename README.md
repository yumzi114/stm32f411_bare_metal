# stm32f411_bare_metal


platformio project init --board blackpill_f411ce

 ini file chage

[env:blackpill_f411ce]
platform = ststm32
board = blackpill_f411ce
framework = libopencm3
debug_tool = jlink
upload_protocol = jlink


or

framework = cmsis

pio run -t upload