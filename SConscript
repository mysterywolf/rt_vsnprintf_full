from building import *

src   = ['rt_vsnprintf.c']
CPPDEFINES = []

CPPDEFINES += ['sprintf=rt_sprintf']
CPPDEFINES += ['snprintf=rt_snprintf']
CPPDEFINES += ['printf=rt_kprintf']

group = DefineGroup('Kernel', src, depend = ['PKG_USING_RT_VSNPRINTF_FULL'], CPPDEFINES = CPPDEFINES)
Return('group')
