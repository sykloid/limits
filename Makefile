# Makefile for Limits.
# Copyright 2008 P.C. Shyamshankar <sykora@lucentbeing.com>
#
# This file is part of the Limits project.
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

CPP_COMPILER = g++
FLAGS = -Wall

all: limits.o
	${CPP_COMPILER} ${FLAGS} limits_backend.o -o limits_backend

limits.o:
	${CPP_COMPILER} ${FLAGS} -c limits_backend.cpp

local:
	cp limits.py ~/bin/limits
	cp limits_backend ~/bin
	chmod +x ~/bin/limits

global:
	cp limits.py /usr/bin/limits
	cp limits_backend /usr/bin/limits_backend
	chmod +x /usr/bin/limits

clean:
	rm limits_backend.o
	rm limits_backend

install:
	@echo Choose make global to install for all users, or
	@echo make local, to install only for the current user.
