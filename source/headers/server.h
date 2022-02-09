#ifndef ANSI_IRC_SERVER_H
#define ANSI_IRC_SERVER_H

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <sys/ipc.h>
#include <sys/msg.h>

#include "message.h"
#include "aux.h"
#include "user.h"
#include "globals.h"

volatile sig_atomic_t done = 0;
void catchSignal(int signum);

#endif //ANSI_IRC_SERVER_H
