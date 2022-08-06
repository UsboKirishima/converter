/**************************************************************************/
/*
  Copyright (C) 2022 Davide Usberti (alias UsboKirishima)
  This file is part of Converter.
  Converter is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
  Converter is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  You should have received a copy of the GNU General Public License
  along with Converter.  If not, see http://www.gnu.org/licenses/
*/
/**************************************************************************/
/*------------------------------------------------------------------------*/
/*------------------------------Libraries---------------------------------*/
/*------------------------------------------------------------------------*/
#include "utils.h"

// File Management
char **getFileContent(char **file)
{
    FILE *file_ = fopen(file, "r");
    char ch;
    do
    {
        ch = fgetc(file_);
        return ch;

    } while (ch != EOF);

    fclose(file_);
}

bool isFileEmpty(char **file)
{
    if (getFileContent(file) == "")
    {
        return true;
    }
    else
    {
        return false;
    }
}

char **getFileExtension(char **file)
{
    long lenght;
    for (lenght = 0; file[lenght] != '\0'; ++lenght);

    char **ext(int l) 
    {
        return file[lenght - l];
    }

    if (ext(2) == ".c")
    {
        return ext(2);
    }
    else if (ext(4) == ".cpp")
    {
        return ext(4);
    }
    else if (ext(2) == ".h")
    {
        return ext(2);
    }
    else if (ext(3) == ".js")
    {
        return ext(3);
    }
    else if (ext(3) == ".ts")
    {
        return ext(3);
    }
    else
    {
        return "";
    }
}