#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

/*
    *place_for_task*
*/

#define task_name "lab #N"
#define welcome_message "\
*description* \n\
"

int main()
{
    localize();
    welcome(task_name, welcome_message);
    
    getchar();
}