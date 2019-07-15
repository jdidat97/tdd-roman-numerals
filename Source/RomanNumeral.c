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

typedef struct
{
   uint16_t num;
   const char *romanNumeral;
} TableEntry_t;

static const TableEntry_t romanNumeralTable[] = {
   { 1000, "M" },
   { 900, "CM" },
   { 500, "D" },
   { 400, "CD" },
   { 100, "C" },
   { 90, "XC" },
   { 50, "L" },
   { 40, "XL" },
   { 10, "X" },
   { 9, "IX" },
   { 5, "V" },
   { 4, "IV" },
   { 1, "I" }
};

void RomanNumeral_Convert(unsigned input, char *output)
{
   for(int i = 0; i < sizeof(romanNumeralTable) / sizeof(romanNumeralTable[0]); i++)
   {
      while(input >= romanNumeralTable[i].num)
      {
         output = Append(output, romanNumeralTable[i].romanNumeral);
         input -= romanNumeralTable[i].num;
      }
   }
}
