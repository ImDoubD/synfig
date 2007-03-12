/* === S Y N F I G ========================================================= */
/*!	\file canvasoptions.h
**	\brief Template Header
**
**	$Id: canvasoptions.h,v 1.1.1.1 2005/01/07 03:34:35 darco Exp $
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

#ifndef __SYNFIG_GTKMM_CANVASOPTIONS_H
#define __SYNFIG_GTKMM_CANVASOPTIONS_H

/* === H E A D E R S ======================================================= */

#include <gtkmm/dialog.h>
#include <gtkmm/tooltips.h>
#include <gtkmm/table.h>
#include <gtkmm/entry.h>
#include <gtkmm/tooltips.h>
#include "widget_value.h"
#include "widget_vector.h"

/* === M A C R O S ========================================================= */

/* === T Y P E D E F S ===================================================== */

/* === C L A S S E S & S T R U C T S ======================================= */

namespace studio
{

class CanvasView;

class CanvasOptions  :  public Gtk::Dialog
{
	Gtk::Tooltips tooltips;

	etl::loose_handle<CanvasView> canvas_view_;

	Gtk::CheckButton toggle_grid_snap;
	Gtk::CheckButton toggle_grid_show;

	Widget_Vector vector_grid_size;

	Gtk::CheckButton toggle_time_snap;

public:
	CanvasOptions(etl::loose_handle<CanvasView> canvas_view);
	~CanvasOptions();

	void refresh();
	void update_title();
private:

	void on_grid_snap_toggle();
	void on_grid_show_toggle();

	void on_ok_pressed();
	void on_apply_pressed();
	void on_cancel_pressed();
}; // END of class CanvasOptions

}; // END of namespace studio

/* === E N D =============================================================== */

#endif
