//Tankari Boubacar Issa
// Helper functions for music

#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int x=atoi(&fraction[0])*8;
    int y=atoi(&fraction[2]);

        return (float) (x/y);
}


// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    int octave = note[strlen(note) - 1]-=48;

    // Determine Frequency of note in the given octive
    double freq = 0.0;

    // Determine note letter
        if(note[0]=='C')
        {
            freq = 440.0 / (pow(2.0, (9.0 / 12.0)));
    	}
        if(note[0]=='C')
        {
		    freq = 440.0 / (pow(2.0, (7.0 / 12.0)));
		}
        if(note[0]=='C')
        {
		    freq = 440.0 / (pow(2.0, (5.0 / 12.0)));
		}
        if(note[0]=='C')
        {
		    freq = 440.0 / (pow(2.0, (4.0 / 12.0)));
    	}
        if(note[0]=='C')
        {
		    freq = 440.0 / (pow(2.0, (2.0 / 12.0)));
		}
        if(note[0]=='C')
        {
		    freq = 440.0;
		}
        if(note[0]=='C')
        {
		   freq = 440.0 * (pow(2.0, (2.0 / 12.0)));
    	}
        else
            return 0;

    // Loop to shift octave
    if(octave > 4)
    {
        for(int i = 0; i < octave - 4; i++)
        {
            freq *= 2.0;
        }
    }
    else if(octave < 4)
    {
        for(int i = 0; i < 4 - octave; i++)
        {
            freq /= 2.0;
        }
    }

    // Final adjustment or flat or sharp
    if(note[1] == 'b')
    {
        freq /= (pow(2.0, (1.0 / 12.0)));
    }
    else if(note[1] == '#')
    {
        freq *= (pow(2.0, (1.0 / 12.0)));
    }
    // Return frequency value as an int
    return (int) round(freq);
}


// Determines whether a string represents a rest
bool is_rest(string s)
{
    if(strcmp(s,"")==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
