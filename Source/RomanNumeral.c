/*!
 * @file
 * @brief Generates Roman Numerals from
 */

#include <stdio.h>
#include "RomanNumeral.h"

static char *Append(char *output, const char *toAppend)
{
   return output + sprintf(output, "%s", toAppend);
}

void RomanNumeral_Convert(unsigned input, char *output)
{
   memset(output, 0, 1000);

   for(int i = 0; i < sizeof(romanNumeralTable) / sizeof(romanNumeralTable[0]); i++)
   {
      while(input >= romanNumeralTable[i].num)
      {
         Append(output, romanNumeralTable[i].romanNumeral);
         input -= romanNumeralTable[i].num;
      }
   }
}
