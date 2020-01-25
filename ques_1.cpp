
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
char* get_company_name(){
    char *initial = "Print";
    char *rest_name = "hello";
    return strcat(initial,rest_name);
}
int main() {
    char *name = get_company_name();
    printf("%s is the best educational gateway for every year to kickstart their coding life. Thapar Alumni "
    "who gave their heart in teaching languages and prepare students for their placements now starting the best languages batches C/C++ and Python from 8th October onwards."
    "\n\n%%%% not only focus on just completing the course but logic development and making awesome projects with that language is their key goal", name, name);
    printf("\n\nRegister now on\nwww.printhello.in/courses");
    return 0;
}
