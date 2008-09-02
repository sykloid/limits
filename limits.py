#! /usr/bin/env python
# Helper script to format output from the limts_backend program.
#
# Copyright 2008 P.C. Shyamshankar <sykora@lucentbeing.com>
#
# This file is part of Limits.
#
# Limits is free software: you can redistribute it and/or modify it under the
# terms of the GNU General Public License as published by the Free Software
# Foundation, either version 3 of the License, or (at your option) any later
# version.

# Limits is distributed in the hope that it will be useful, but WITHOUT ANY
# WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
# A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

# You should have received a copy of the GNU General Public License along with
# this program.  If not, see <http://www.gnu.org/licenses/>.

from subprocess import Popen, PIPE

def getCharDump() :
    limitSource = Popen(["limits_backend"], stdout=PIPE)
    chardump = limitSource.stdout.read()
    return str(chardump).split('\n')

def main() :
    output = getCharDump()

    for line in output :
        if not line :
            continue
        tokens = tuple(line.split('\t'))
        dataType, size, low, high = tokens
        print "%25s %8s %25s %25s" % (dataType, size, low, high)

if __name__ == '__main__' :
    main()
