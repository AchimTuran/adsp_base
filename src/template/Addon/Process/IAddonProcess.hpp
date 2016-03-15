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


#include "kodi/kodi_adsp_types.h"

class CAddonProcessManager;


class IAddonProcess
{
  friend class CAddonProcessManager;

public:
  IAddonProcess()
  {
    m_ProcessID = -1;
  }

  virtual ~IAddonProcess()
  {
  }


// Fixed public methods
  virtual AE_DSP_ERROR Create() = 0;
  virtual AE_DSP_ERROR Destroy() = 0;

private:
  int m_ProcessID;
};