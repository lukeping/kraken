/*
 * Copyright 2013-2014, Derrick Wood <dwood@cs.umd.edu>
 *
 * This file is part of the Kraken taxonomic sequence classification system.
 *
 * Kraken is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Kraken is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Kraken.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef QUICKFILE_HPP
#define QUICKFILE_HPP

#include "kraken_headers.hpp"

namespace kraken {
  class QuickFile {
    public:

    QuickFile();
    QuickFile(std::string filename, std::string mode="r", size_t size=0);
    ~QuickFile();
    void open_file(std::string filename, std::string mode="r", size_t size=0);
    char *ptr();
    size_t size();
    void load_file();
    void sync_file();
    void close_file();

    protected:

    bool valid;
    int fd;
    char *fptr;
    size_t filesize;
  };
}

#endif
