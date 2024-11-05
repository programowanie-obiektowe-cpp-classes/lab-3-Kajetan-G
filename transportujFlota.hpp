#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if (towar == 0) return 0;

    unsigned int sumarycznyTowar = 0;
    unsigned int liczbaZaglowcow = 0; 
    Stocznia stocznia;

    while (sumarycznyTowar < towar) {
    
        Statek* statek = stocznia();

        sumarycznyTowar += statek->transportuj();

        if (dynamic_cast<Zaglowiec*>(statek) != nullptr) {
            ++liczbaZaglowcow;
        }

        delete statek;
    }

    return liczbaZaglowcow;
}