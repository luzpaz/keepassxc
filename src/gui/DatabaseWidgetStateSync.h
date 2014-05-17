/*
 *  Copyright (C) 2014 Felix Geyer <debfx@fobos.de>
 *  Copyright (C) 2014 Florian Geyer <blueice@fobos.de>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 or (at your option)
 *  version 3 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KEEPASSX_HEADERVIEWSYNC_H
#define KEEPASSX_HEADERVIEWSYNC_H

#include "gui/DatabaseWidget.h"

class DatabaseWidgetStateSync : public QObject
{
    Q_OBJECT

public:
    explicit DatabaseWidgetStateSync(QObject* parent = Q_NULLPTR);
    ~DatabaseWidgetStateSync();

public Q_SLOTS:
    void setActive(DatabaseWidget* dbWidget);

private Q_SLOTS:
    void updateSplitterSizes();

private:
    DatabaseWidget* m_activeDbWidget;

    QList<int> m_splitterSizes;
};

#endif // KEEPASSX_HEADERVIEWSYNC_H