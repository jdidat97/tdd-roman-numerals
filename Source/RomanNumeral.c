/*!
 * @file
 * @brief Generates Roman Numerals from
 */

#include <stdio.h>
#include "RomanNumeral.h"

static void Append(char *output, const char *toAppend)
{
   sprintf(output + strlen(output), "%s", toAppend);
}

typedef struct
{
   int num;
   const char *romanNumeral;
} TableEntry_t;

const TableEntry_t romanNumeralTable[] = {
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
