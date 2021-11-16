from building import *
Import('rtconfig')

src   = ['rt_vsnprintf.c']
CPPDEFINES = []

def handle_preprocessor_macros(cdefines):
    if rtconfig.CROSS_TOOL == 'keil': # MDK MUST add ' for string-like micros.
        return ["'" + cdefines + "'"]
    else: # GCC and IAR MUST NOT add ' for string-like micros; otherwise, compiler will give errors.
        return [cdefines]

CPPDEFINES += handle_preprocessor_macros('sprintf(str, ...)=rt_sprintf(str, __VA_ARGS__)')
CPPDEFINES += handle_preprocessor_macros('snprintf(str, n, ...)=rt_snprintf(str, n, __VA_ARGS__)')
CPPDEFINES += handle_preprocessor_macros('printf(...)=rt_kprintf(__VA_ARGS__)')

group = DefineGroup('rt_vsnprintf', src, depend = [], CPPDEFINES = CPPDEFINES)
Return('group')
