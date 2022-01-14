// SPDX-FileCopyrightText: 2011 Manjeet Dahiya <manjeetdahiya@gmail.com>
// SPDX-FileCopyrightText: 2010 Jeremy Lainé <jeremy.laine@m4x.org>
//
// SPDX-License-Identifier: LGPL-2.1-or-later

#include "QXmppSessionIq.h"

#include "QXmppConstants_p.h"
#include "QXmppUtils.h"

#include <QDomElement>
#include <QXmlStreamWriter>

/// \cond
bool QXmppSessionIq::isSessionIq(const QDomElement &element)
{
    QDomElement sessionElement = element.firstChildElement(QStringLiteral("session"));
    return (sessionElement.namespaceURI() == ns_session);
}

void QXmppSessionIq::toXmlElementFromChild(QXmlStreamWriter *writer) const
{
    writer->writeStartElement(QStringLiteral("session"));
    ;
    writer->writeDefaultNamespace(ns_session);
    writer->writeEndElement();
}
/// \endcond
