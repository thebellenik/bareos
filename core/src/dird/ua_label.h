/*
   BAREOS® - Backup Archiving REcovery Open Sourced

   Copyright (C) 2018-2018 Bareos GmbH & Co. KG

   This program is Free Software; you can redistribute it and/or
   modify it under the terms of version three of the GNU Affero General Public
   License as published by the Free Software Foundation and included
   in the file LICENSE.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
   Affero General Public License for more details.

   You should have received a copy of the GNU Affero General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
   02110-1301, USA.
*/

#ifndef DIRD_UA_LABEL_H
#define DIRD_UA_LABEL_H

bool is_volume_name_legal(UaContext *ua, const char *name);
bool send_label_request(UaContext *ua,
                        StoreResource *store, MediaDbRecord *mr, MediaDbRecord *omr, PoolDbRecord *pr,
                        bool media_record_exists, bool relabel,
                        drive_number_t drive, slot_number_t slot);

#endif // DIRD_UA_LABEL_H