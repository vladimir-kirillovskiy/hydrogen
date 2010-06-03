/*
 * Hydrogen
 * Copyright(c) 2002-2008 by Alex >Comix< Cominu [comix@users.sourceforge.net]
 *
 * http://www.hydrogen-music.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *
 */

#include "VirtualPatternDialog.h"

#include <hydrogen/hydrogen.h>
#include <hydrogen/Song.h>
#include <hydrogen/basics/pattern.h>
#include <hydrogen/basics/pattern_list.h>

#include "Skin.h"

namespace
{

/*
struct SimplePatternNode
{
    H2Core::Pattern *curPattern;
    int colour;
    std::set<H2Core::Pattern*> edges;
};//SimplePatternNode
*/
    
}//anonymous namespace

const char* VirtualPatternDialog::__class_name = "VirtualPatternDialog";

VirtualPatternDialog::VirtualPatternDialog(QWidget* parent)
 : QDialog(parent)
 , Object( __class_name )
{
	setupUi( this );

	setFixedSize( width(), height() );
	setWindowTitle( trUtf8( "Select virtual pattern" ) );
}



VirtualPatternDialog::~VirtualPatternDialog()
{
}



void VirtualPatternDialog::on_cancelBtn_clicked()
{
	reject();
}



void VirtualPatternDialog::on_okBtn_clicked()
{
	accept();
}

