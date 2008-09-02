/*
 * A Simple program to expose the minimum, maximum and size (in bytes) of the
 * primitive data types.
 *
 * Copyright 2008 P.C. Shyamshankar <sykora@lucentbeing.com>
 *
 * -- Start License stuff. --
 *
 * This file is part of Limits.
 * 
 * Limits is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * Limits is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * -- End License stuff. --
 *
 * The output of this program is messy, which is irrelevant, as the formatting
 * is done by the python script limits.py.
 *
 * Included data types :
 *      - char
 *      - short int
 *      - int
 *      - long int
 *      - long long int
 *      - unsigned short int
 *      - unsigned long int
 *      - unsigned long long int
 *      - float
 *      - double
 *      - long double
 */

#include <iostream>
#include <limits>
#include <climits>

using namespace std;

template <class dataType>
void showLimits() {
    cout << sizeof(dataType) << "\t" << numeric_limits<dataType>::min() << "\t"
         << numeric_limits<dataType>::max() << endl;

    return;
}

int main() {
    cout << "Data Type\tSize\tMinimum\tMaximum\n";

    cout << "char\t";
    cout << sizeof(char) << "\t" << CHAR_MIN << "\t" << CHAR_MAX << "\n";

    cout << "short\t";
    showLimits<short>();

    cout << "int\t";
    showLimits<int>();

    cout << "long int\t";
    showLimits<long>();

    cout << "long long int\t";
    showLimits<long long>();

    cout << "unsigned short\t";
    showLimits<unsigned short>();

    cout << "unsigned int\t";
    showLimits<unsigned int>();

    cout << "unsigned long int\t";
    showLimits<unsigned long int>();

    cout << "unsigned long long int\t";
    showLimits<unsigned long long int>();

    cout << "float\t";
    showLimits<float>();

    cout << "double\t";
    showLimits<double>();

    cout << "long double\t";
    showLimits<long double>();

    return 0;
}
