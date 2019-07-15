/*!
 * @file
 * @brief Generates Roman Numerals from
 */

#include <stdio.h>
#include "RomanNumeral.h"

void Append(char *output, const char *toAppend)
{
   sprintf(output + strlen(output), "%s", toAppend);
}

void RomanNumeral_Convert(unsigned input, char *output)
{
   memset(output, 0, 1000);

   while (input > 0) {

      if (input >= 1000) {
         Append(output, "M");
         input -= 1000; 
      }
      else if (input >= 900) {
         Append(output, "CM");
         input -= 900; 
      }
      else if (input >= 500) {
         Append(output, "D");
         input -= 500;
      }
      else if (input >= 400) {
         Append(output, "CD");
         input -= 400;
      }
      else if (input >= 100) {
         Append(output, "C");
         input -= 100;
      }
      else if (input >= 90) {
         Append(output, "XC");
         input -= 90;
      }
      else if (input >= 50) {
         Append(output, "L");
         input -= 50; 
      }
      else if (input >= 40) {
         Append(output, "XL");
         input -= 40;
      }
      else if (input >= 10) {
         Append(output, "X");
         input -= 10;
      }
      else if (input >= 9) {
         Append(output, "IX");
         input -= 9;
      }
      else if (input >= 5) {
         Append(output, "V");
         input -= 5;
      }
      else if (input >= 4) {
         Append(output, "IV");
         input -= 4;
      }
      else if (input >= 1) {
         Append(output, "I");
         input--;
      }

   }
}
