#ifndef KEYCODES_H
#define KEYCODES_H

#include <stdint.h>

const uint8_t media[] =
    {
        0x10, // MUTE
        0x40, // VOLUME DOWN
        0x20, // VOLUME UP
        0x02, // TRACK -
        0x01, // TRACK +
        0x08, // PLAY/PAUSE
        0x04, // STOP
    };

const uint8_t keycodes[] =
    {
        0, // 0x00
        0x46, // 0x01    PRINT
        0, // 0x02
        0x03, // 0x03    ExSeL
        0x01, // 0x04    CURSR SEL
        0x00, // 0x05    ATTN
        0x29, // 0x06    CLEAR
        0X3A, // 0x07    F1
        0, // 0x08    F13
        0xe3, // 0x09    TEST
        0x06, // 0x0A    DONJI BLANK
        0x04, // 0x0B    ERASE EOF
        0x02, // 0x0C    GORNJI BLANK
        0X2B, // 0x0D    TAB
        0X35, // 0x0E    `~
        0X3B, // 0x0F    F2
        0, // 0x10    F14
        0x01, // 0x11    LCTRL
        0x02, // 0x12    LSHIFT
        0X31, // 0x13    DONJA KOSA CRTA
        0X39, // 0x14    CAPS LOCK
        0X14, // 0x15    Q
        0X1E, // 0x16    1!
        0X3C, // 0x17    F3
        0, // 0x18    F15
        0x04, // 0x19    LALT
        0X1D, // 0x1A    Z
        0X16, // 0x1B    S
        0X04, // 0x1C    A
        0X1A, // 0x1D    W
        0X1F, // 0x1E    2@
        0X3D, // 0x1F    F4
        0, // 0x20    F16
        0X06, // 0x21    C
        0X1B, // 0x22    X
        0X07, // 0x23    D
        0X08, // 0x24    E
        0X21, // 0x25    4$
        0X20, // 0x26    3#
        0X3E, // 0x27    F5
        0, // 0x28    F17
        0X2C, // 0x29    SPACE
        0X19, // 0x2A    V
        0X09, // 0x2B    F
        0X17, // 0x2C    T
        0X15, // 0x2D    R
        0X22, // 0x2E    5%
        0X3F, // 0x2F    F6
        0, // 0x30    F18
        0X11, // 0x31    N
        0X05, // 0x32    B
        0X0B, // 0x33    H
        0X0A, // 0x34    G
        0X1C, // 0x35    Y
        0X23, // 0x36    6^
        0X40, // 0x37    F7
        0, // 0x38    F19
        0x40, // 0x39    RALT
        0X10, // 0x3A    M
        0X0D, // 0x3B    J
        0X18, // 0x3C    U
        0X24, // 0x3D    7&
        0X25, // 0x3E    8*
        0X41, // 0x3F    F8
        0, // 0x40    F20
        0X36, // 0x41    ,<
        0X0E, // 0x42    K
        0X0C, // 0x43    I
        0X12, // 0x44    O
        0X27, // 0x45    0)
        0X26, // 0x46    9(
        0X42, // 0x47    F9
        0, // 0x48    F21
        0X37, // 0x49    .>
        0X38, // 0x4A    /?
        0X0F, // 0x4B    L
        0X33, // 0x4C    ;:
        0X13, // 0x4D    P
        0X2D, // 0x4E    -_
        0X43, // 0x4F    F10
        0, // 0x50    F22
        0, // 0x51
        0X34, // 0x52    '"
        0X31, // 0x53    \|
        0X2F, // 0x54    [{
        0X2E, // 0x55    =+
        0X44, // 0x56    F11
        0, // 0x57    F23
        0x10, // 0x58    RCTRL
        0x20, // 0x59    RSHIFT
        0X28, // 0x5A    ENTER
        0X30, // 0x5B    ]}
        0, // 0x5C
        0, // 0x5D
        0X45, // 0x5E    F12
        0, // 0x5F    F24
        0X51, // 0x60    DOWN
        0X50, // 0x61    LEFT
        0, // 0x62    CENTER
        0X52, // 0x63    UP
        0X4C, // 0x64    DELETE
        0X4D, // 0x65    END
        0X2A, // 0x66    BACKSPACE
        0X49, // 0x67    INSERT
        0, // 0x68
        0X59, // 0x69    NUM1
        0X4F, // 0x6A    RIGHT
        0X5C, // 0x6B    NUM4
        0X5F, // 0x6C    NUM7
        0X4E, // 0x6D    PG DW
        0X4A, // 0x6E    HOME
        0X4B, // 0x6F    PG UP
        0X62, // 0x70    NUM0
        0X63, // 0x71    NUM .
        0X5A, // 0x72    NUM2
        0X5D, // 0x73    NUM5
        0X5E, // 0x74    NUM6
        0X60, // 0x75    NUM8
        0X53, // 0x76    NUM MACRO1
        0X54, // 0x77    NUM MACRO2
        0, // 0x78
        0X58, // 0x79    NUM ENTER
        0X5B, // 0x7A    NUM3
        0X57, // 0x7B    NUM+
        0X57, // 0x7C    NUM-
        0X61, // 0x7D    NUM9
        0X55, // 0x7E    NUM MACRO 3
        0, // 0x7F
        0, // 0x80
        0, // 0x81
        0, // 0x82
        0x05, // 0x83    ErInp
        0X56, // 0x84    NUM MACRO4
        0, // 0x85
        0, // 0x86
        0, // 0x87
        0, // 0x88
        0, // 0x89
        0, // 0x8A
        0, // 0x8B
        0, // 0x8C
        0, // 0x8D
        0, // 0x8E
        0, // 0x8F

};

#endif
