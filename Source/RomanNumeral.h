/*!
 * @file
 * @brief Generates Roman numerals for provided numbers.
 */

#ifndef ROMANNUMERAL_H
#define ROMANNUMERAL_H

/*!
 * Convert to a Roman numeral.
 * @pre The output must be large enough to contain the Roman numeral as a string.
 * @param input The number to convert.
 * @param output String buffer in which to store the converted Roman numeral.
 */

typedef struct {
    int num;
    const char * romanNumeral;
} TableEntry_t;

const TableEntry_t romanNumeralTable[] = {
    {1000, "M"},
    {900, "CM"},
    {500, "D"},
    {400, "CD"},
    {100, "C"},
    {90, "XC"},
    {50, "L"},
    {40, "XL"},
    {10, "X"},
    {9, "IX"},
    {5, "V"},
    {4, "IV"},
    {1, "I"}
};

static void Append(char *output, const char *toAppend);
void RomanNumeral_Convert(unsigned input, char *output);

#endif
