from building import *
Import('rtconfig')

src   = ['rt_vsnprintf.c']
CPPDEFINES = []

if rtconfig.CROSS_TOOL == 'keil': # MDK must add ' for string-like micros.
    CPPDEFINES += ["'sprintf(str, ...)=rt_sprintf(str,__VA_ARGS__)'"]
else: # GCC and IAR must not add ' for string-like micros; otherwise, compiler will give errors.
    CPPDEFINES += ['sprintf(str, ...)=rt_sprintf(str,__VA_ARGS__)'] 

group = DefineGroup('rt_vsnprintf', src, depend = [], CPPDEFINES = CPPDEFINES)
Return('group')
