/*
	Copyright 2009, Marat Radchenko

	This file is part of opendsme.

	opendsme is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	opendsme is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with opendsme.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <mtd/mtd-user.h>

#define DEFAULT_DSME_PATH "/tmp/dsmesock"
#define DEFAULT_DIRECT_ACCESS_PATH "/dev/mtd1"

size_t get_from_mtd(const char *path, void *buf, const off_t seek_to,
		const size_t bytes_read, const size_t bytes_skip, const int mode);

ssize_t get_from_dsme(const char *path, const void *request, const size_t bytes_send,
		void *buf, const size_t bytes_read, const size_t bytes_skip);