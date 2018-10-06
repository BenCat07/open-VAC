/*
 * VALVE ANTI CHEAT
 *
 * COPYRIGHT VALVE CORPERATION 2017
 * ALL RIGHTS RESERVED.
 *
 * How to make it unconsistant xddd
 */

#include <SteamProfile>

extern int SteamID;

int rand = rand() % 100;

if (rand > 50) {
    usleep(rand * 1327000);
    Exclude(SteamID);
    usleep(rand * 3000000);
    AccountAlert(SteamID);
} else {
    usleep(43200000);
    Exclude(SteamID);
    usleep(rand * 3000000);
    AccountAlert(SteamID);
}
