#include <stdio.h>

#define COLOR_RESET "\e[0m"
#define COLOR_DEFAULT "\e[39m"
#define COLOR_BLACK "\e30m"
#define COLOR_RED "\e[31m"
#define COLOR_GREEN "\e[32m"
#define COLOR_YELLOW "\e[33m"
#define COLOR_BLUE "\e[34m"
#define COLOR_PURPLE "\e[35m"
#define COLOR_CYAN "\e[36m"
#define COLOR_LIGHT_GRAY "\e[37m"
#define COLOR_DARK_GRAY "\e[90m"
#define COLOR_LIGHT_RED "\e[91m"
#define COLOR_LIGHT_GREEN "\e[92m"
#define COLOR_LIGHT_YELLOW "\e[93m"
#define COLOR_LIGHT_BLUE "\e[94m"
#define COLOR_LIGHT_PURPLE "\e[95m"
#define COLOR_LIGHT_CYAN "\e[96m"
#define COLOR_WHITE "\e[97m"

void COLOR_MSG(char *text, char *color, int reset){
  printf("%s%s",color,text);
  if(reset) printf("%s",COLOR_RESET);
}
