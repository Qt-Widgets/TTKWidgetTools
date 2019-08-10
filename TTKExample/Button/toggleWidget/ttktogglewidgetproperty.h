#ifndef TTKTOGGLEWIDGETPROPERTY_H
#define TTKTOGGLEWIDGETPROPERTY_H

/* =================================================
 * This file is part of the TTK Widget Tools project
 * Copyright (C) 2015 - 2019 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include "ttkwidgetproperty.h"

/*!
* @author Greedysky <greedysky@163.com>
*/
class TTK_CORE_EXPORT TTKToggleWidgetProperty : public TTKWidgetProperty
{
    Q_OBJECT
public:
    explicit TTKToggleWidgetProperty(QWidget *parent = nullptr);
    virtual ~TTKToggleWidgetProperty();

private Q_SLOTS:
    virtual void boolPropertyChanged(QtProperty *property, bool value) override;
    virtual void enumPropertyChanged(QtProperty *property, int value) override;
    virtual void colorPropertyChanged(QtProperty *property, const QColor &value) override;

};

#endif // TTKTOGGLEWIDGETPROPERTY_H
