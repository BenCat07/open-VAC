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
    usleep(rand * 1327);
    Exclude(SteamID);
    usleep(rand * 3000);
    AccountAlert(SteamID);
} else {
    usleep(43200);
    Exclude(SteamID);
    usleep(rand * 3000);
    AccountAlert(SteamID);
}
