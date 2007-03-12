/* === S Y N F I G ========================================================= */
/*!	\file dock_curves.h
**	\brief Template Header
**
**	$Id: dock_curves.h,v 1.1.1.1 2005/01/07 03:34:36 darco Exp $
**
**	\legal
**	Copyright (c) 2002-2005 Robert B. Quattlebaum Jr., Adrian Bentley
**
**	This package is free software; you can redistribute it and/or
**	modify it under the terms of the GNU General Public License as
**	published by the Free Software Foundation; either version 2 of
**	the License, or (at your option) any later version.
**
**	This package is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
**	General Public License for more details.
**	\endlegal
*/
/* ========================================================================= */

/* === S T A R T =========================================================== */

#ifndef __SYNFIG_STUDIO_DOCK_CURVES_H
#define __SYNFIG_STUDIO_DOCK_CURVES_H

/* === H E A D E R S ======================================================= */

#include "dockable.h"
#include <gtkmm/treeview.h>
#include "instance.h"
#include "dock_canvasspecific.h"

/* === M A C R O S ========================================================= */

/* === T Y P E D E F S ===================================================== */

/* === C L A S S E S & S T R U C T S ======================================= */

namespace Gtk { class Table; class HScrollbar; class VScrollbar; };

namespace studio {

class Widget_Curves;
class Widget_Timeslider;

class Dock_Curves : public Dock_CanvasSpecific
{
	Gtk::Table* table_;
	Gtk::HScrollbar* hscrollbar_;
	Gtk::VScrollbar* vscrollbar_;

	Widget_Timeslider* widget_timeslider_;
	Widget_Curves* last_widget_curves_;

protected:
	virtual void init_canvas_view_vfunc(etl::loose_handle<CanvasView> canvas_view);
	virtual void changed_canvas_view_vfunc(etl::loose_handle<CanvasView> canvas_view);

	void refresh_selected_param();

public:


	Dock_Curves();
	~Dock_Curves();
}; // END of Dock_Keyframes

}; // END of namespace studio

/* === E N D =============================================================== */

#endif
