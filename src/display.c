
#include "main.h"
const uint8_t font5x8[][5] = {
  {0x00,0x00,0x00,0x00,0x00}, // 32: (space)
  {0x00,0x00,0x5F,0x00,0x00}, // 33: !
  {0x00,0x07,0x00,0x07,0x00}, // 34: "
  {0x14,0x7F,0x14,0x7F,0x14}, // 35: #
  {0x24,0x2A,0x7F,0x2A,0x12}, // 36: $
  {0x23,0x13,0x08,0x64,0x62}, // 37: %
  {0x36,0x49,0x55,0x22,0x50}, // 38: &
  {0x00,0x05,0x03,0x00,0x00}, // 39: '
  {0x00,0x1C,0x22,0x41,0x00}, // 40: (
  {0x00,0x41,0x22,0x1C,0x00}, // 41: )
  {0x14,0x08,0x3E,0x08,0x14}, // 42: *
  {0x08,0x08,0x3E,0x08,0x08}, // 43: +
  {0x00,0x50,0x30,0x00,0x00}, // 44: ,
  {0x08,0x08,0x08,0x08,0x08}, // 45: -
  {0x00,0x60,0x60,0x00,0x00}, // 46: .
  {0x20,0x10,0x08,0x04,0x02}, // 47: /
  {0x3E,0x51,0x49,0x45,0x3E}, // 48: 0
  {0x00,0x42,0x7F,0x40,0x00}, // 49: 1
  {0x42,0x61,0x51,0x49,0x46}, // 50: 2
  {0x21,0x41,0x45,0x4B,0x31}, // 51: 3
  {0x18,0x14,0x12,0x7F,0x10}, // 52: 4
  {0x27,0x45,0x45,0x45,0x39}, // 53: 5
  {0x3C,0x4A,0x49,0x49,0x30}, // 54: 6
  {0x01,0x71,0x09,0x05,0x03}, // 55: 7
  {0x36,0x49,0x49,0x49,0x36}, // 56: 8
  {0x06,0x49,0x49,0x29,0x1E}, // 57: 9
  {0x00,0x36,0x36,0x00,0x00}, // 58: :
  {0x00,0x56,0x36,0x00,0x00}, // 59: ;
  {0x08,0x14,0x22,0x41,0x00}, // 60: <
  {0x14,0x14,0x14,0x14,0x14}, // 61: =
  {0x00,0x41,0x22,0x14,0x08}, // 62: >
  {0x02,0x01,0x51,0x09,0x06}, // 63: ?
  {0x32,0x49,0x79,0x41,0x3E}, // 64: @
  {0x7E,0x11,0x11,0x11,0x7E}, // 65: A
  {0x7F,0x49,0x49,0x49,0x36}, // 66: B
  {0x3E,0x41,0x41,0x41,0x22}, // 67: C
  {0x7F,0x41,0x41,0x22,0x1C}, // 68: D
  {0x7F,0x49,0x49,0x49,0x41}, // 69: E
  {0x7F,0x09,0x09,0x09,0x01}, // 70: F
  {0x3E,0x41,0x49,0x49,0x7A}, // 71: G
  {0x7F,0x08,0x08,0x08,0x7F}, // 72: H
  {0x00,0x41,0x7F,0x41,0x00}, // 73: I
  {0x20,0x40,0x41,0x3F,0x01}, // 74: J
  {0x7F,0x08,0x14,0x22,0x41}, // 75: K
  {0x7F,0x40,0x40,0x40,0x40}, // 76: L
  {0x7F,0x02,0x0C,0x02,0x7F}, // 77: M
  {0x7F,0x04,0x08,0x10,0x7F}, // 78: N
  {0x3E,0x41,0x41,0x41,0x3E}, // 79: O
  {0x7F,0x09,0x09,0x09,0x06}, // 80: P
  {0x3E,0x41,0x51,0x21,0x5E}, // 81: Q
  {0x7F,0x09,0x19,0x29,0x46}, // 82: R
  {0x46,0x49,0x49,0x49,0x31}, // 83: S
  {0x01,0x01,0x7F,0x01,0x01}, // 84: T
  {0x3F,0x40,0x40,0x40,0x3F}, // 85: U
  {0x1F,0x20,0x40,0x20,0x1F}, // 86: V
  {0x3F,0x40,0x38,0x40,0x3F}, // 87: W
  {0x63,0x14,0x08,0x14,0x63}, // 88: X
  {0x07,0x08,0x70,0x08,0x07}, // 89: Y
  {0x61,0x51,0x49,0x45,0x43}, // 90: Z
  {0x00,0x7F,0x41,0x41,0x00}, // 91: [
  {0x02,0x04,0x08,0x10,0x20}, // 92: '\'
  {0x00,0x41,0x41,0x7F,0x00}, // 93: ]
  {0x04,0x02,0x01,0x02,0x04}, // 94: ^
  {0x40,0x40,0x40,0x40,0x40}, // 95: _
  {0x00,0x03,0x07,0x00,0x00}, // 96: `
  {0x20,0x54,0x54,0x54,0x78}, // 97: a
  {0x7F,0x48,0x44,0x44,0x38}, // 98: b
  {0x38,0x44,0x44,0x44,0x20}, // 99: c
  {0x38,0x44,0x44,0x48,0x7F}, //100: d
  {0x38,0x54,0x54,0x54,0x18}, //101: e
  {0x08,0x7E,0x09,0x01,0x02}, //102: f
  {0x0C,0x52,0x52,0x52,0x3E}, //103: g
  {0x7F,0x08,0x04,0x04,0x78}, //104: h
  {0x00,0x44,0x7D,0x40,0x00}, //105: i
  {0x20,0x40,0x44,0x3D,0x00}, //106: j
  {0x7F,0x10,0x28,0x44,0x00}, //107: k
  {0x00,0x41,0x7F,0x40,0x00}, //108: l
  {0x7C,0x04,0x18,0x04,0x78}, //109: m
  {0x7C,0x08,0x04,0x04,0x78}, //110: n
  {0x38,0x44,0x44,0x44,0x38}, //111: o
  {0x7C,0x14,0x14,0x14,0x08}, //112: p
  {0x08,0x14,0x14,0x18,0x7C}, //113: q
  {0x7C,0x08,0x04,0x04,0x08}, //114: r
  {0x48,0x54,0x54,0x54,0x20}, //115: s
  {0x04,0x3F,0x44,0x40,0x20}, //116: t
  {0x3C,0x40,0x40,0x20,0x7C}, //117: u
  {0x1C,0x20,0x40,0x20,0x1C}, //118: v
  {0x3C,0x40,0x30,0x40,0x3C}, //119: w
  {0x44,0x28,0x10,0x28,0x44}, //120: x
  {0x0C,0x50,0x50,0x50,0x3C}, //121: y
  {0x44,0x64,0x54,0x4C,0x44}, //122: z
  {0x00,0x08,0x36,0x41,0x00}, //123: {
  {0x00,0x00,0x7F,0x00,0x00}, //124: |
  {0x00,0x41,0x36,0x08,0x00}, //125: }
  {0x08,0x08,0x2A,0x1C,0x08}, //126: ~
  {0x08,0x1C,0x2A,0x08,0x08}, //127: DEL(화살표 등 특수)
};


void ssd1306_i2c_cmd(I2C_TypeDef *i2c, uint8_t cmd) {
    i2c->CR1 &= ~( 1U << 11); 
    i2c->CR1 |= ( 1U << 8 ); 
    while (!(i2c->SR1 & ( 1U << 0 ))) {}
    (void)i2c->SR1;
    i2c->DR = 0x78; // (0x3C << 1)
    while (!(i2c->SR1 & (1U << 1))) {}
    (void)i2c->SR1;
    (void)i2c->SR2;
    i2c->DR = 0x00;
    while (!(i2c->SR1 & (1U << 7))) {}
    i2c->DR = cmd;
    while (!(i2c->SR1 & (1U << 7))) {}
    i2c->CR1 |= ( 1U << 9 );
}

void ssd1306_init(I2C_TypeDef *i2c) {
    ssd1306_i2c_cmd(i2c,0xAE); // Display OFF

    ssd1306_i2c_cmd(i2c,0xA8); // Set Multiplex Ratio
    ssd1306_i2c_cmd(i2c,0x3F);

    ssd1306_i2c_cmd(i2c,0xD3); // Set Display Offset
    ssd1306_i2c_cmd(i2c,0x00);

    ssd1306_i2c_cmd(i2c,0x40); // Set Display Start Line

    ssd1306_i2c_cmd(i2c,0xA1); // Set Segment remap (A0/A1)
    ssd1306_i2c_cmd(i2c,0xC8); // Set COM output scan direction

    ssd1306_i2c_cmd(i2c,0xDA); // Set COM Pins hardware config
    ssd1306_i2c_cmd(i2c,0x12);

    ssd1306_i2c_cmd(i2c,0x81); // Set contrast
    ssd1306_i2c_cmd(i2c,0x7F);

    ssd1306_i2c_cmd(i2c,0xA4); // Entire display ON (resume to RAM)
    ssd1306_i2c_cmd(i2c,0xA6); // Normal display (A7=Inverse)

    ssd1306_i2c_cmd(i2c,0xD5); // Set display clock divide
    ssd1306_i2c_cmd(i2c,0x80);

    ssd1306_i2c_cmd(i2c,0x8D); // Enable charge pump regulator
    ssd1306_i2c_cmd(i2c,0x14);

    ssd1306_i2c_cmd(i2c,0xAF); // Display ON
}

void ssd1306_set_cursor(I2C_TypeDef *i2c, uint8_t col, uint8_t page, uint8_t width) {
    ssd1306_i2c_cmd(i2c,0x21); // Set column address
    ssd1306_i2c_cmd(i2c,col);
    ssd1306_i2c_cmd(i2c,col + width - 1); // 여기를 127말고 width-1로
    ssd1306_i2c_cmd(i2c,0x22); // Set page address
    ssd1306_i2c_cmd(i2c,page);
    ssd1306_i2c_cmd(i2c,page);
}

void ssd1306_i2c_data(I2C_TypeDef *i2c, uint8_t data) {
    i2c->CR1 &= ~( 1U << 11);
    i2c->CR1 |= ( 1U << 8 );
    while (!(i2c->SR1 & ( 1U << 0 ))) {}
    (void)i2c->SR1;
    i2c->DR = 0x78; // (0x3C << 1)
    while (!(i2c->SR1 & (1U << 1))) {}
    (void)i2c->SR1;
    (void)i2c->SR2;
    i2c->DR = 0x40;   // 0x40: 데이터 모드
    while (!(i2c->SR1 & (1U << 7))) {}
    i2c->DR = data;   // 실제 픽셀 데이터
    while (!(i2c->SR1 & (1U << 7))) {}
    i2c->CR1 |= ( 1U << 9 );
}


void ssd1306_draw_char(I2C_TypeDef *i2c, uint8_t col, uint8_t page, char c) {
    // ssd1306_set_cursor(col, page, 6);
    uint8_t buf[6];
    for (int i = 0; i < 5; i++) buf[i] = font5x8[c - 32][i];
    buf[5] = 0x00;
    ssd1306_set_cursor(i2c, col, page, 6);
    ssd1306_i2c_data_multi(i2c, buf, 6);
}
void ssd1306_draw_str(I2C_TypeDef *i2c,uint8_t col, uint8_t page, const char* str) {
    while (*str) {
        ssd1306_draw_char(i2c, col, page, *str++);
        col += 6;
    }
}

void ssd1306_clear(I2C_TypeDef *i2c) {
    uint8_t buf[128] = {0};
    for (uint8_t page = 0; page < 8; page++) {
        ssd1306_set_cursor(i2c,0, page, 128);
        ssd1306_i2c_data_multi(i2c,buf, 128);
    }
}

void ssd1306_i2c_data_multi(I2C_TypeDef *i2c, const uint8_t* data, size_t len) {
    i2c->CR1 &= ~( 1U << 11);
    i2c->CR1 |= ( 1U << 8 );
    while (!(i2c->SR1 & ( 1U << 0 ))) {}
    (void)i2c->SR1;
    i2c->DR = 0x78; // SSD1306 주소
    while (!(i2c->SR1 & (1U << 1))) {}
    (void)i2c->SR1;
    (void)i2c->SR2;

    i2c->DR = 0x40; // 컨트롤 바이트(데이터)
    while (!(i2c->SR1 & (1U << 7))) {}

    for (size_t i = 0; i < len; i++) {
        i2c->DR = data[i];
        while (!(i2c->SR1 & (1U << 7))) {}
    }
    i2c->CR1 |= ( 1U << 9 );
}