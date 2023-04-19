/*
 * InspIRCd -- Internet Relay Chat Daemon
 *
 *   Copyright (C) 2014, 2016, 2018-2021 Sadie Powell <sadie@witchery.services>
 *
 * This file is part of InspIRCd.  InspIRCd is free software: you can
 * redistribute it and/or modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation, version 2.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#pragma once

/** The branch version that is shown to unprivileged users. */
#define INSPIRCD_BRANCH "ClandestineIRCd-3"

/** Determines whether this version of InspIRCd is older than the requested version. */
#define INSPIRCD_VERSION_BEFORE(MAJOR, MINOR) (((3 << 8) | 15) < ((MAJOR << 8) | (MINOR)))

/** Determines whether this version of InspIRCd is equal to or newer than the requested version. */
#define INSPIRCD_VERSION_SINCE(MAJOR, MINOR) (((3 << 8) | 15) >= ((MAJOR << 8) | (MINOR)))

/** The default location that config files are stored in. */
#define INSPIRCD_CONFIG_PATH "/etc/clandestine/"

/** The default location that data files are stored in. */
#define INSPIRCD_DATA_PATH "/var/lib/clandestine/"

/** The default location that log files are stored in. */
#define INSPIRCD_LOG_PATH "/var/log/clandestine/"

/** The default location that module files are stored in. */
#define INSPIRCD_MODULE_PATH "/usr/lib/clandestine/ircd/modules/"

/** The default location that runtime files are stored in. */
#define INSPIRCD_RUNTIME_PATH "/tmp/clandestine/"

/** The URL of the InspIRCd docs site. */
#define INSPIRCD_DOCS "https://github.com/paigeadelethompson/clandestine"

#ifndef _WIN32

/** Whether the arc4random_buf() function was available at compile time. */
/*# define HAS_ARC4RANDOM_BUF*/

/** Whether the clock_gettime() function was available at compile time. */
# define HAS_CLOCK_GETTIME

/** Whether the eventfd() function was available at compile time. */
# undef HAS_EVENTFD

#endif
