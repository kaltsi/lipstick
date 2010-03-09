/***************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (directui@nokia.com)
**
** This file is part of duihome.
**
** If you have questions regarding the use of this file, please contact
** Nokia at directui@nokia.com.
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation
** and appearing in the file LICENSE.LGPL included in the packaging
** of this file.
**
****************************************************************************/

#ifndef QUICKLAUNCHBARSTYLE_H_
#define QUICKLAUNCHBARSTYLE_H_

#include <DuiWidgetStyle>

/*!
 * A style class for the QuickLaunchBar widget.
 */
class QuickLaunchBarStyle : public DuiWidgetStyle
{
    Q_OBJECT
    DUI_STYLE(QuickLaunchBarStyle)
};

class QuickLaunchBarStyleContainer : public DuiWidgetStyleContainer
{
    DUI_STYLE_CONTAINER(QuickLaunchBarStyle)
};

#endif /* QUICKLAUNCHBARSTYLE_H_ */