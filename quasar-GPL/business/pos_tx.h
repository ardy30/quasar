// $Id: pos_tx.h,v 1.16 2004/01/30 23:06:57 arandell Exp $
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

#ifndef POS_TX_H
#define POS_TX_H

#include <qstring.h>

class PosTx {
public:
    // Constructors and Destructor
    PosTx();
    ~PosTx();

    // Get methods
    QString type() const			{ return _type; }
    QString id() const				{ return _id; }
    QString data() const			{ return _data; }

    // Set methods
    void setType(const QString& type)		{ _type = type; }
    void setId(const QString& id)		{ _id = id; }
    void setData(const QString& data)		{ _data = data; }

    // Operations
    bool operator==(const PosTx& rhs) const;
    bool operator!=(const PosTx& rhs) const;

protected:
    QString _type;
    QString _id;
    QString _data;
};

#endif // POS_TX_H
