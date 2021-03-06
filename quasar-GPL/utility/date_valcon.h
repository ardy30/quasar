// $Id: date_valcon.h,v 1.10 2005/02/24 01:25:01 bpepers Exp $
//
// Copyright (C) 1998-2004 Linux Canada Inc.  All rights reserved.
//
// This file is part of Quasar Accounting
//
// This file may be distributed and/or modified under the terms of the
// GNU General Public License version 2 as published by the Free Software
// Foundation and appearing in the file LICENSE.GPL included in the
// packaging of this file.
//
// Licensees holding a valid Quasar Commercial License may use this file
// in accordance with the Quasar Commercial License Agreement provided
// with the Software in the LICENSE.COMMERCIAL file.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// See http://www.linuxcanada.com or email sales@linuxcanada.com for
// information about Quasar Accounting support and maintenance options.
//
// Contact sales@linuxcanada.com if any conditions of this licensing are
// not clear to you.

#ifndef DATE_VALCON_H
#define DATE_VALCON_H

#include "valcon.h"
#include "date_time.h"

class DateValcon: public Valcon
{
public:
    DateValcon();
    ~DateValcon();

    bool parse(const QString& text);
    QString format();
    QString format(Variant value);
    QString format(const QDate& date);

    QDate getDate() const			{ return _value; }
    void setDate(const QDate& value)		{ _value = value; }

protected:
    QDate _value;
};

#endif // DATE_VALCON_H
