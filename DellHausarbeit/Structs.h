#pragma once
typedef struct {
    int id = 0;
    char name[30] = "\0";
    char vorname[30] = "\0";
    char eintritsjahr[20] = "\0";
    char email[70] = "\0";
    int abteilung = 0;
    char strasse[30] = "\0";
    char hausnr[8] = "\0";
    char plz[8] = "\0";
    char ort[20] = "\0";
    char mobil[20] = "\0";
    char festnetz[20] = "\0";
}MITARB;
typedef struct {
    char abtName[20] = "\0";
    char strasse[30] = "\0";
    char hausnr[8] = "\0";
    char plz[8] = "\0";
    char stadt[20] = "\0";
    char sitz[20] = "\0";
    int abtleiter = 0;
}ABT;