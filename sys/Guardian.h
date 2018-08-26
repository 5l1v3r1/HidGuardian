/*
* Windows kernel-mode driver for controlling access to various input devices.
* Copyright (C) 2016-2018  Benjamin H�glinger-Stelzer
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#pragma once

#define REG_MULTI_SZ_EXCEMPTED_DEVICES      L"ExemptedDevices"
#define HIDGUARDIAN_HARDWARE_ID             L"Nefarius\\HidGuardian\\Gen4"

NTSTATUS AmIAffected(PDEVICE_CONTEXT DeviceContext);
BOOLEAN AmIMaster(PDEVICE_CONTEXT DeviceContext);
