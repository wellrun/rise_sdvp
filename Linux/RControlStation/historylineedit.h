/*
    Copyright 2018 Benjamin Vedder	benjamin@vedder.se

    This file is part of RControlStation.

    RControlStation is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    VESC Tool is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef HISTORYLINEEDIT_H
#define HISTORYLINEEDIT_H

#include <QObject>
#include <QWidget>
#include <QLineEdit>
#include <QStringList>
#include <QEvent>
#include <QKeyEvent>

class HistoryLineEdit : public QLineEdit
{
public:
    HistoryLineEdit(QWidget *parent = 0);
    bool eventFilter(QObject *object, QEvent *e);

private:
    QStringList mHistory;
    int mIndexNow;
    QString mCurrentText;

};

#endif // HISTORYLINEEDIT_H
