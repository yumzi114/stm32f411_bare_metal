#include "main.h"



void ssd1306_i2c_cmd(I2C_TypeDef *i2c, uint8_t cmd);
void ssd1306_init(I2C_TypeDef *i2c);
void ssd1306_set_cursor(I2C_TypeDef *i2c, uint8_t col, uint8_t page, uint8_t width);
void ssd1306_i2c_data(I2C_TypeDef *i2c, uint8_t data);
void ssd1306_draw_str(I2C_TypeDef *i2c,uint8_t col, uint8_t page, const char* str);
void ssd1306_clear(I2C_TypeDef *i2c);
void ssd1306_draw_char(I2C_TypeDef *i2c, uint8_t col, uint8_t page, char c);
void ssd1306_i2c_data_multi(I2C_TypeDef *i2c, const uint8_t* data, size_t len);