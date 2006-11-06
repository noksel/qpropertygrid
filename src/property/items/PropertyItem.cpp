/***************************************************************************
*   Copyright (C) 2006 by ludo   *
*   ludo42fr@free.fr   *
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 2 of the License, or     *
*   (at your option) any later version.                                   *
*                                                                         *
*   This program is distributed in the hope that it will be useful,       *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
*   GNU General Public License for more details.                          *
*                                                                         *
*   You should have received a copy of the GNU General Public License     *
*   along with this program; if not, write to the                         *
*   Free Software Foundation, Inc.,                                       *
*   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
*                                                                         *
*   In addition, as a special exception, the copyright holders give       *
*   permission to link the code of this program with any edition of       *
*   the Qt library by Trolltech AS, Norway (or with modified versions     *
*   of Qt that use the same license as Qt), and distribute linked         *
*   combinations including the two.  You must obey the GNU General        *
*   Public License in all respects for all of the code used other than    *
*   Qt.  If you modify this file, you may extend this exception to        *
*   your version of the file, but you are not obligated to do so.  If     *
*   you do not wish to do so, delete this exception statement from        *
*   your version.                                                         *
***************************************************************************/
#include "PropertyItem.h"

PropertyItem::PropertyItem( QString name, PropertyItem *parent, PropertyItemValueHolder* setGet )
    : QObject()
    , TreeContainer<PropertyItem>( parent )
    , _valueHolder( setGet )
    , _columnCount( 2 )
    , _flags( 0 )    //invalid entres autres
, _data() {
  setName( name );
  setValid( true );
  }

QString PropertyItem::name() const {
  return data( nameValueRole ).toString();
  }

void PropertyItem::setName( QString name ) {
  setData( nameValueRole, name );
  }


int PropertyItem::columnCount() const {
  return _columnCount;
  }

void PropertyItem::setColumnCount( int count ) {
  _columnCount = count;
  }


void PropertyItem::setData( const QVariant &data ) {
  setData( valueRole, data );
  }


QVariant PropertyItem::data( int id ) const {
  if ( id == valueRole )
    return _valueHolder->get
           ( this );
  if ( !_data.contains( id ) )
    return QVariant();
  return _data[ id ];
  }

void PropertyItem::setData( int id, const QVariant &extra ) {
  if ( id == valueRole )
    return _valueHolder->set
           ( this, extra );
  _data[ id ] = extra;
  }


//manip des flags
unsigned long PropertyItem::flags() const {
  return _flags;
  }
void PropertyItem::setFlags( const unsigned long &fl ) {
  _flags = fl;
  }
bool PropertyItem::isValid() const {
  return _flags & flgValid;
  }
bool PropertyItem::hasData() const {
  return _flags & flgData;
  }
bool PropertyItem::isVisible() const {
  return !( _flags & flgHidden );
  }
bool PropertyItem::isASection() const {
  return _flags & flgSection;
  }
bool PropertyItem::isAGroup() const {
  return _flags & flgGroup;
  }
bool PropertyItem::isSystem() const {
  return _flags & flgSystem;
  }
bool PropertyItem::isReadonly() const {
  return _flags & flgRDOnly;
  }

void PropertyItem::setValid( bool valid ) {
  if ( valid )
    _flags |= flgValid;
  else
    _flags |= ~flgValid;
  }
void PropertyItem::setVisible( bool visible ) {
  if ( visible )
    _flags |= ~flgHidden;
  else
    _flags |= flgHidden;
  }

void PropertyItem::setSection( bool section ) {
  if ( section )
    _flags |= flgSection;
  else
    _flags |= ~flgSection;
  }

void PropertyItem::setGroup( bool grp ) {
  if ( grp )
    _flags |= flgGroup;
  else
    _flags |= ~flgGroup;
  }

void PropertyItem::setSystem( bool sys ) {
  if ( sys )
    _flags |= flgSystem;
  else
    _flags |= ~flgSystem;
  }
void PropertyItem::setReadOnly( bool rd ) {
  if ( rd )
    _flags |= flgRDOnly;
  else
    _flags |= ~flgRDOnly;
  }


