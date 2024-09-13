#define US_KEYBOARD

#include "PS2.h"
#include "Keycodes.h"
#include "PluggableUSBHID.h"
#include "USBKeyboard.h"

USBKeyboard Keyboard;

PS2 test;

void setup()
{
    delay(2000);
    test.initialize(100,3,2);
    //Serial.begin(9600);
}


int modifier=0;

void loop()
{
    if(test.available())
    {
        int code = test.readScanCode();
        
        if(code == 0x1b)
        {
            while(!test.available());
            code = test.readScanCode();
        }



        if((code > 0x2 && code < 0x06)||(code>0x09 && code <0x0d) || code == 0x83)
        {
            HID_REPORT report;

            report.data[0] = 3;
            report.data[1] = media[keycodes[code]];
            report.length = 2;
            Keyboard.send(&report);
            uint8_t code1 = code;
            int tren=millis();
            
            report.data[0] = 3;
            report.data[1] = 0;
            report.length = 2;
            Keyboard.send(&report);
        }
        else if(code == 0x11 || code == 0x58 || code == 0x59 || code == 0x39 || code == 0x12 || code == 0x19)
        {
            modifier|=keycodes[code];
        }
        else if(code == 0xf0)
        {
            while(!test.available());
            code = test.readScanCode();
            if(code != 0x14)
            {
                modifier&=~keycodes[code];
            }
        }
        else if(code == 0x09)
        {
            HID_REPORT report;

            report.data[0] = 1;
            report.data[1] = 0x01;
            report.data[2] = 0;
            report.data[3] = 0x04;
            report.data[4] = 0;
            report.data[5] = 0;
            report.data[6] = 0;
            report.data[7] = 0;
            report.data[8] = 0;
            report.length=9;
            Keyboard.send(&report);
            report.data[1] = 0;
            report.data[3] = 0;
            report.data[4] = 0;
            Keyboard.send(&report);
            Keyboard._putc('#');
            const char program[]="include <iostream>\n\nint main(int argc, char** argv)\n{\n\n\nreturn 0;\n}";
            for(int i=0;i<strlen(program);i++)
            {
                Keyboard._putc(program[i]);
            }
            report.data[0] = 1;
            report.data[1] = 0;
            report.data[2] = 0;
            report.data[3] = 0x52;
            report.data[4] = 0;
            report.data[5] = 0;
            report.data[6] = 0;
            report.data[7] = 0;
            report.data[8] = 0;
            Keyboard.send(&report);
            report.data[3] = 0;
            Keyboard.send(&report);
            report.data[3] = 0x52;
            Keyboard.send(&report);
            report.data[3] = 0;
            Keyboard.send(&report);
            report.data[3] = 0x52;
            Keyboard.send(&report);
            report.data[3] = 0;
            Keyboard.send(&report);
        }
        else
        {
            HID_REPORT report;

            report.data[0] = 1;
            report.data[1] = modifier;
            report.data[2] = 0;
            report.data[3] = keycodes[code];
            report.data[4] = 0;
            report.data[5] = 0;
            report.data[6] = 0;
            report.data[7] = 0;
            report.data[8] = 0;
        
            report.length = 9;
        
            Keyboard.send(&report);
            report.data[1]=0;
            report.data[3]=0;
            Keyboard.send(&report);
        }
    }
}
