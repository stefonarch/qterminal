/***************************************************************************
 *   Copyright (C) 2006 by Vladimir Kuznetsov                              *
 *   vovanec@gmail.com                                                     *
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
 ***************************************************************************/


#ifndef CONFIG_H
#define CONFIG_H

#define ADD_TAB "AddTab"
#define RENAME_TAB "RenameTab"
#define CLOSE_TAB "CloseTab"

#define TAB_NEXT "NextTab"
#define TAB_PREV "PreviousTab"

#define SPLIT_HORIZONTAL "SplitTerminalHorizontally"
#define SPLIT_VERTICAL "SplitTerminalVertically"

#define SUB_COLLAPSE "CollapseSubterminal"
#define SUB_NEXT "NextSubterminal"
#define SUB_PREV "PreviousSubterminal"

#define MOVE_LEFT "MoveTabLeft"
#define MOVE_RIGHT "MoveTabRight"

#define COPY_SELECTION "CopySelection"
#define PASTE_SELECTION "PasteSelection"

/* Some defaults for QTerminal application */

#define DEFAULT_WIDTH                  800
#define DEFAULT_HEIGHT                 600

// ACTIONS
#define TAB_PREV_SHORTCUT	       "Shift+Left"
#define TAB_NEXT_SHORTCUT	       "Shift+Right"
#define SUB_PREV_SHORTCUT	       "Shift+Down"
#define SUB_NEXT_SHORTCUT	       "Shift+Up"

#ifdef Q_WS_MAC
// It's tricky - Ctrl is "command" key on mac's keyboards
#define COPY_SELECTION_SHORTCUT      "Ctrl+C"
#define PASTE_SELECTION_SHORTCUT      "Ctrl+V"
#else
#define COPY_SELECTION_SHORTCUT      "Ctrl+Insert"
#define PASTE_SELECTION_SHORTCUT      "Shift+Insert"
#endif

#define MOVE_LEFT_SHORTCUT             "Shift+Alt+Left"
#define MOVE_RIGHT_SHORTCUT            "Shift+Alt+Right"

#define RENAME_SESSION_SHORTCUT        "Shift+Alt+S"

// XON/XOFF features:

#define FLOW_CONTROL_ENABLED		false
#define FLOW_CONTROL_WARNING_ENABLED	false

#endif
