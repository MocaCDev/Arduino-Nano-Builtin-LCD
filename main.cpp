#include <U8g2lib.h>

U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);    //

int lineht;

void setup()
{
    u8g2.begin();
    u8g2.setFont(u8g2_font_ncenB14_tr);
    u8g2.setFontPosTop();
    u8g2.clear();
    u8g2.setCursor(0, 0);
    u8g2.print("MOCA");
    u8g2.updateDisplay();
}

void loop()
{
    delay(2000);
}
