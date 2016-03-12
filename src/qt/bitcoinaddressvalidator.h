// Copyright (c) 2011-2014 The Voxels developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef VOXELSADDRESSVALIDATOR_H
#define VOXELSADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class VoxelsAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit VoxelsAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Voxels address widget validator, checks for a valid voxels address.
 */
class VoxelsAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit VoxelsAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // VOXELSADDRESSVALIDATOR_H
