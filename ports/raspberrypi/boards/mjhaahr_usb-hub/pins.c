#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS
    
    { MP_ROM_QSTR(MP_QSTR_L3R), MP_ROM_PTR(&pin_GPIO2) },
    { MP_ROM_QSTR(MP_QSTR_L3G), MP_ROM_PTR(&pin_GPIO1) },
    { MP_ROM_QSTR(MP_QSTR_L3B), MP_ROM_PTR(&pin_GPIO0) },
    
    { MP_ROM_QSTR(MP_QSTR_L2R), MP_ROM_PTR(&pin_GPIO10) },
    { MP_ROM_QSTR(MP_QSTR_L2G), MP_ROM_PTR(&pin_GPIO9) },
    { MP_ROM_QSTR(MP_QSTR_L2B), MP_ROM_PTR(&pin_GPIO5) },
    
    { MP_ROM_QSTR(MP_QSTR_L1R), MP_ROM_PTR(&pin_GPIO14) },
    { MP_ROM_QSTR(MP_QSTR_L1G), MP_ROM_PTR(&pin_GPIO13) },
    { MP_ROM_QSTR(MP_QSTR_L1B), MP_ROM_PTR(&pin_GPIO12) },
    
    
    { MP_ROM_QSTR(MP_QSTR_OC1), MP_ROM_PTR(&pin_GPIO11) },
    { MP_ROM_QSTR(MP_QSTR_OC2), MP_ROM_PTR(&pin_GPIO4) },
    { MP_ROM_QSTR(MP_QSTR_OC3), MP_ROM_PTR(&pin_GPIO3) },
    
    { MP_ROM_QSTR(MP_QSTR_LED_EN), MP_ROM_PTR(&pin_GPIO20) },
    
    { MP_ROM_QSTR(MP_QSTR_USB_LED), MP_ROM_PTR(&pin_GPIO23) },
    { MP_ROM_QSTR(MP_QSTR_PWR_LED), MP_ROM_PTR(&pin_GPIO24) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
