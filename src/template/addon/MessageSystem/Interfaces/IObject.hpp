#pragma once
/*
 *      Copyright (C) 2005-2016 Team Kodi
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */



#include <string>

typedef int RTComSignal_t;

class IObject
{
public:
  IObject(std::string Name, RTComSignal_t Signal = -1) : Name(Name), Signal(Signal) {}
  virtual ~IObject() {}

  const std::string Name;
  const RTComSignal_t Signal;
};


// class for sorting RTCObjects with their Signal
class RTComSort
{
public:
  bool operator() (IObject *Object1, IObject *Object2)
  {
    return (Object1->Signal < Object2->Signal);
  }
};