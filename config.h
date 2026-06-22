#include "logos/katana.h"
//define colors
#define BLACK  "\e[1;30m"
#define RED    "\e[1;31m"
#define GREEN  "\e[1;32m"
#define YELLOW "\e[1;33m"
#define BLUE   "\e[1;34m"
#define PURPLE "\e[1;35m"
#define CYAN   "\e[1;36m"
#define WHITE  "\e[1;37m"


//define display colors
#define COLOR BLUE
#define LOGOCOLOR CYAN
#define TITLECOLOR BLUE

#define f false
#define t true

#define CONFIG \
{ \
   /* name            function                 cached */\
    SPACER \
    { "   ",                   get_title,               f }, \
    SPACER \
    /* { "   ",                   get_bar,                 f }, */ \
    { "   OS        : ",       get_os,                  t }, \
    { "   Host      : ",       get_host,                t }, \
    { "   Kernel    : ",       get_kernel,              t }, \
    { "   Up        : ",       get_uptime,              f }, \
    { "   Batt      : ",       get_battery_percentage,  f }, \
    SPACER \
    { "   Pack      : ",       get_packages_pacman,     f }, \
    { "   Shell     : ",       get_shell,               f }, \
    { "   Res       : ",       get_resolution,          f }, \
    { "   Term      : ",       get_terminal,            f }, \
    SPACER \
    { "   CPU       : ",       get_cpu,                 t }, \
    { "   GPU       : ",       get_gpu1,                t }, \
    { "   Memory    : ",       get_memory,              f }, \
}

#define CPU_CONFIG \
{ \
   REMOVE("(R)"), \
   REMOVE("(TM)"), \
   REMOVE("Dual-Core"), \
   REMOVE("Quad-Core"), \
   REMOVE("Six-Core"), \
   REMOVE("Eight-Core"), \
   REMOVE("Core"), \
   REMOVE("CPU"), \
}

#define GPU_CONFIG \
{ \
    REMOVE("Corporation"), \
    REMOVE("Controller"), \
    REMOVE("Graphics"), \
    REMOVE("Integrated"), \
}
