# rt_vsnprintf 完整功能版本

在RT-Thread的kservice.c源码中的这些函数的实现是为了满足RT-Thread内核的自持能力，即在不依赖标准C库的情况下，RT-Thread核心代码也可以正常运行，因此rt_kprintf、rt_sprintf、rt_snprintf、rt_vsnprintf这类打印函数（或者称之为rt_kprintf家族函数）仅仅满足内核的使用需求，不会实现完整的、和标准C库一致的功能，以减少ROM占用。但是，很多社区小伙伴希望rt_kprintf家族函数可以支持上更多的功能（例如打印浮点数据等等）。因此，本软件包实现了该功能。

本软件包实现了rt_kprintf家族函数的全功能版本，因为rt_kprintf的核心功能都是依赖rt_vsnprintf函数，因此只需要重新实现rt_vsnprintf函数即可。本软件包基于开源项目[printf](https://github.com/eyalroz/printf)重新实现了rt_vsnprintf，在4.1.0以及以上的RT-Thread版本中，只需要安装本软件包即可。若RT-Thread低于4.1.0版本，需要手动将kservice.c内的rt_vsnprintf函数注释掉，再安装本软件包。

# 维护
[Meco Man](https://github.com/mysterywolf)
