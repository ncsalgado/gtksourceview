/*
 * gtksourcecompletionui.h
 * This file is part of gtksourceview
 *
 * Copyright (C) 2009 - Jesse van den Kieboom
 *
 * gtksourceview is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * gtksourceview is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with gtksourceview; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, 
 * Boston, MA  02110-1301  USA
 */

#ifndef __GTK_SOURCE_COMPLETION_UI_H__
#define __GTK_SOURCE_COMPLETION_UI_H__

static gchar gtk_source_completion_ui[] =
"<?xml version=\"1.0\"?>"
"<interface>"
"  <requires lib=\"gtk+\" version=\"2.16\"/>"
"  <!-- interface-naming-policy project-wide -->"
"  <object class=\"GtkWindow\" id=\"window_completion\">"
"    <property name=\"border_width\">1</property>"
"    <property name=\"type\">popup</property>"
"    <property name=\"resizable\">False</property>"
"    <property name=\"skip_taskbar_hint\">True</property>"
"    <property name=\"skip_pager_hint\">True</property>"
"    <property name=\"accept_focus\">False</property>"
"    <property name=\"focus_on_map\">False</property>"
"    <property name=\"decorated\">False</property>"
"    <child>"
"      <object class=\"GtkVBox\" id=\"vbox_completion\">"
"        <property name=\"visible\">True</property>"
"        <property name=\"orientation\">vertical</property>"
"        <child>"
"          <object class=\"GtkScrolledWindow\" id=\"scrolled_window_completion\">"
"            <property name=\"visible\">True</property>"
"            <property name=\"can_focus\">False</property>"
"            <property name=\"hscrollbar_policy\">automatic</property>"
"            <property name=\"vscrollbar_policy\">automatic</property>"
"            <child>"
"              <object class=\"GtkTreeView\" id=\"tree_view_completion\">"
"                <property name=\"visible\">True</property>"
"                <property name=\"headers_visible\">False</property>"
"                <property name=\"headers_clickable\">False</property>"
"                <property name=\"enable_search\">False</property>"
"                <property name=\"fixed_height_mode\">True</property>"
"                <property name=\"show_expanders\">False</property>"
"                <child>"
"                  <object class=\"GtkTreeViewColumn\" id=\"tree_view_column_proposal\">"
"                    <property name=\"sizing\">fixed</property>"
"                    <property name=\"expand\">False</property>"
"                    <child>"
"                      <object class=\"GtkCellRendererPixbuf\" id=\"cell_renderer_icon\"/>"
"                    </child>"
"                    <child>"
"                      <object class=\"GtkCellRendererText\" id=\"cell_renderer_proposal\"/>"
"                    </child>"
"                  </object>"
"                </child>"
"                <child>"
"                  <object class=\"GtkTreeViewColumn\" id=\"tree_view_column_accelerator\">"
"                    <property name=\"sizing\">fixed</property>"
"                    <property name=\"expand\">False</property>"
"                    <child>"
"                      <object class=\"GtkCellRendererText\" id=\"cell_renderer_accelerator\"/>"
"                    </child>"
"                  </object>"
"                </child>"
"              </object>"
"            </child>"
"          </object>"
"          <packing>"
"            <property name=\"position\">0</property>"
"          </packing>"
"        </child>"
"        <child>"
"          <object class=\"GtkHBox\" id=\"hbox_bottom_bar\">"
"            <property name=\"visible\">True</property>"
"            <child>"
"              <object class=\"GtkToggleButton\" id=\"toggle_button_info\">"
"                <property name=\"visible\">True</property>"
"                <property name=\"can_focus\">False</property>"
"                <property name=\"receives_default\">True</property>"
"                <property name=\"tooltip_text\" translatable=\"yes\">Show detailed proposal information</property>"
"                <property name=\"focus_on_click\">False</property>"
"                <property name=\"relief\">GTK_RELIEF_NONE</property>"
"                <child>"
"                  <object class=\"GtkHBox\" id=\"hbox_info\">"
"                    <property name=\"visible\">True</property>"
"                    <property name=\"spacing\">2</property>"
"                    <child>"
"                      <object class=\"GtkImage\" id=\"image_info\">"
"                        <property name=\"visible\">True</property>"
"                        <property name=\"stock\">gtk-info</property>"
"                      </object>"
"                      <packing>"
"                        <property name=\"position\">0</property>"
"                      </packing>"
"                    </child>"
"                    <child>"
"                      <object class=\"GtkLabel\" id=\"label_info\">"
"                        <property name=\"visible\">True</property>"
"                        <property name=\"label\" translatable=\"yes\">_Details...</property>"
"                        <property name=\"use_markup\">True</property>"
"                        <property name=\"use_underline\">True</property>"
"                      </object>"
"                      <packing>"
"                        <property name=\"position\">1</property>"
"                      </packing>"
"                    </child>"
"                  </object>"
"                </child>"
"              </object>"
"              <packing>"
"                <property name=\"expand\">False</property>"
"                <property name=\"position\">0</property>"
"              </packing>"
"            </child>"
"            <child>"
"              <object class=\"GtkImage\" id=\"image_selection\">"
"                <property name=\"visible\">True</property>"
"              </object>"
"              <packing>"
"                <property name=\"expand\">False</property>"
"                <property name=\"pack_type\">end</property>"
"                <property name=\"position\">2</property>"
"              </packing>"
"            </child>"
"            <child>"
"              <object class=\"GtkLabel\" id=\"label_selection\">"
"                <property name=\"visible\">True</property>"
"              </object>"
"              <packing>"
"                <property name=\"expand\">False</property>"
"                <property name=\"padding\">6</property>"
"                <property name=\"pack_type\">end</property>"
"                <property name=\"position\">1</property>"
"              </packing>"
"            </child>"
"          </object>"
"          <packing>"
"            <property name=\"expand\">False</property>"
"            <property name=\"position\">1</property>"
"          </packing>"
"        </child>"
"      </object>"
"    </child>"
"  </object>"
"</interface>";

#endif /* __GTK_SOURCE_COMPLETION_UI_H__ */