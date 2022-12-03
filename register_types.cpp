/*************************************************************************/
/*  register_types.cpp                                                   */
/*************************************************************************/
/*                       This file is part of:                           */
/*                           GODOT ENGINE                                */
/*                      https://godotengine.org                          */
/*************************************************************************/
/* Copyright (c) 2007-2022 Juan Linietsky, Ariel Manzur.                 */
/* Copyright (c) 2014-2022 Godot Engine contributors (cf. AUTHORS.md).   */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/

#include "register_types.h"
#include "main/main.h"

#include "action_map/openxr_action.h"
#include "action_map/openxr_action_map.h"
#include "action_map/openxr_action_set.h"
#include "action_map/openxr_interaction_profile.h"

#ifdef TOOLS_ENABLED
#include "editor/editor_node.h"
#include "editor/openxr_editor_plugin.h"

static void _editor_init() {
        OpenXREditorPlugin *openxr_plugin = memnew(OpenXREditorPlugin());
        EditorNode::get_singleton()->add_editor_plugin(openxr_plugin);
}
#endif

void initialize_openxr_macos_editor_module(ModuleInitializationLevel p_level) {
        if (p_level == MODULE_INITIALIZATION_LEVEL_SCENE) {
                GDREGISTER_CLASS(OpenXRAction);
                GDREGISTER_CLASS(OpenXRActionSet);
                GDREGISTER_CLASS(OpenXRActionMap);
                GDREGISTER_CLASS(OpenXRIPBinding);
                GDREGISTER_CLASS(OpenXRInteractionProfile);
#ifdef TOOLS_ENABLED
                EditorNode::add_init_callback(_editor_init);
#endif
        }
}

void uninitialize_openxr_macos_editor_module(ModuleInitializationLevel p_level) {
    
}