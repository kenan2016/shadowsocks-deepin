/**
 * Copyright (C) 2017 ~ 2018 PikachuHy
 *               2018 ~ 2019 lolimay
 *
 * Author:     PikachuHy <pikachuhy@163.com>
 * Maintainer: lolimay   <lolimay@lolimay.cn>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef URIHELPER_H
#define URIHELPER_H

#include <QString>
#include <QImage>

class URIHelper
{
public:
    virtual ~URIHelper() = 0;

    static QImage convertToGrey(const QImage &input);
    static QString decodeImage(const QImage &img);
};

#endif // URIHELPER_H
