/**************************************************************************/
/*  test_node_3d.h                                                        */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

#ifndef TEST_NODE_3D_H
#define TEST_NODE_3D_H

#include "scene/3d/node_3d.h"
#include "scene/main/window.h"

#include "tests/test_macros.h"

namespace TestNode3D {

TEST_CASE("[SceneTree][Node3D] Test Transform Getters and Setters") {
	Node3D *test_node = memnew(Node3D);

	SceneTree::get_singleton()->get_root()->add_child(test_node);

	test_node->set_position(Vector3(1, 5, 10));
	test_node->set_rotation(Vector3(Math::deg_to_rad(30.0), 0, 0));
	test_node->set_scale(Vector3(1, 1, 1));

	SUBCASE("[Node3D] Test set/get transform") {
		ClassDB::bind_method(D_METHOD("set_transform", "local"), &Node3D::set_transform);
		ClassDB::bind_method(D_METHOD("get_transform"), &Node3D::get_transform);
	}

	SUBCASE("[Node3D] Test set/get position") {
		ClassDB::bind_method(D_METHOD("set_position", "position"), &Node3D::set_position);
		ClassDB::bind_method(D_METHOD("get_position"), &Node3D::get_position);
	}

	SUBCASE("[Node3D] Test set/get rotation") {
		ClassDB::bind_method(D_METHOD("set_rotation", "euler_radians"), &Node3D::set_rotation);
		ClassDB::bind_method(D_METHOD("get_rotation"), &Node3D::get_rotation);
	}

	SUBCASE("[Node3D] Test set/get rotation degrees") {
		ClassDB::bind_method(D_METHOD("set_rotation_degrees", "euler_degrees"), &Node3D::set_rotation_degrees);
		ClassDB::bind_method(D_METHOD("get_rotation_degrees"), &Node3D::get_rotation_degrees);
	}

	SUBCASE("[Node3D] Test set/get rotation order") {
		ClassDB::bind_method(D_METHOD("set_rotation_order", "order"), &Node3D::set_rotation_order);
		ClassDB::bind_method(D_METHOD("get_rotation_order"), &Node3D::get_rotation_order);
	}

	SUBCASE("[Node3D] Test set/get rotation edit mode") {
		ClassDB::bind_method(D_METHOD("set_rotation_edit_mode", "edit_mode"), &Node3D::set_rotation_edit_mode);
		ClassDB::bind_method(D_METHOD("get_rotation_edit_mode"), &Node3D::get_rotation_edit_mode);
	}

	SUBCASE("[Node3D] Test set/get scale") {
		ClassDB::bind_method(D_METHOD("set_scale", "scale"), &Node3D::set_scale);
		ClassDB::bind_method(D_METHOD("get_scale"), &Node3D::get_scale);
	}

	SUBCASE("[Node3D] Test set/get quaternion") {
		ClassDB::bind_method(D_METHOD("set_quaternion", "quaternion"), &Node3D::set_quaternion);
		ClassDB::bind_method(D_METHOD("get_quaternion"), &Node3D::get_quaternion);
	}

	SUBCASE("[Node3D] Test set/get basis") {
		ClassDB::bind_method(D_METHOD("set_basis", "basis"), &Node3D::set_basis);
		ClassDB::bind_method(D_METHOD("get_basis"), &Node3D::get_basis);
	}

	SUBCASE("[Node3D] Test set/get global transform") {
		ClassDB::bind_method(D_METHOD("set_global_transform", "global"), &Node3D::set_global_transform);
		ClassDB::bind_method(D_METHOD("get_global_transform"), &Node3D::get_global_transform);
	}

	SUBCASE("[Node3D] Test set/get global position") {
		ClassDB::bind_method(D_METHOD("set_global_position", "position"), &Node3D::set_global_position);
		ClassDB::bind_method(D_METHOD("get_global_position"), &Node3D::get_global_position);
	}

	SUBCASE("[Node3D] Test set/get global basis") {
		ClassDB::bind_method(D_METHOD("set_global_basis", "basis"), &Node3D::set_global_basis);
		ClassDB::bind_method(D_METHOD("get_global_basis"), &Node3D::get_global_basis);
	}

	SUBCASE("[Node3D] Test set/get global rotation") {
		ClassDB::bind_method(D_METHOD("set_global_rotation", "euler_radians"), &Node3D::set_global_rotation);
		ClassDB::bind_method(D_METHOD("get_global_rotation"), &Node3D::get_global_rotation);
	}

	SUBCASE("[Node3D] Test set/get global rotation degrees") {
		ClassDB::bind_method(D_METHOD("set_global_rotation_degrees", "euler_degrees"), &Node3D::set_global_rotation_degrees);
		ClassDB::bind_method(D_METHOD("get_global_rotation_degrees"), &Node3D::get_global_rotation_degrees);
	}
}

TEST_CASE("[SceneTree][Node3D] Test Utility methods") {
	Node3D *test_node = memnew(Node3D);

	SceneTree::get_singleton()->get_root()->add_child(test_node);

	test_node->set_position(Vector3(1, 5, 10));
	test_node->set_rotation(Vector3(Math::deg_to_rad(30.0), 0, 0));
	test_node->set_scale(Vector3(1, 1, 1));

	SUBCASE("[Node3D] Test get_parent_node_3d") {
	}

	SUBCASE("[Node3D] Test set_ignore_transform_notification") {
	}

	SUBCASE("[Node3D] Test set_as_top_level") {
	}

	SUBCASE("[Node3D] Test set_disable_scale") {
	}

	SUBCASE("[Node3D] Test get_world_3d") {
	}

	SUBCASE("[Node3D] Test force_update_transform") {
	}

	SUBCASE("[Node3D] Test get/set visibility_parent") {
		ClassDB::bind_method(D_METHOD("set_visibility_parent", "path"), &Node3D::set_visibility_parent);
		ClassDB::bind_method(D_METHOD("get_visibility_parent"), &Node3D::get_visibility_parent);
	}

	SUBCASE("[Node3D] Test gizmos") {
		ClassDB::bind_method(D_METHOD("update_gizmos"), &Node3D::update_gizmos);
		ClassDB::bind_method(D_METHOD("add_gizmo", "gizmo"), &Node3D::add_gizmo);
		ClassDB::bind_method(D_METHOD("get_gizmos"), &Node3D::get_gizmos_bind);
		ClassDB::bind_method(D_METHOD("clear_gizmos"), &Node3D::clear_gizmos);
		ClassDB::bind_method(D_METHOD("set_subgizmo_selection", "gizmo", "id", "transform"), &Node3D::set_subgizmo_selection);
		ClassDB::bind_method(D_METHOD("clear_subgizmo_selection"), &Node3D::clear_subgizmo_selection);
	}

	SUBCASE("[Node3D] Test get/set visibility") {
		ClassDB::bind_method(D_METHOD("set_visible", "visible"), &Node3D::set_visible);
		ClassDB::bind_method(D_METHOD("is_visible"), &Node3D::is_visible);
		ClassDB::bind_method(D_METHOD("is_visible_in_tree"), &Node3D::is_visible_in_tree);
		ClassDB::bind_method(D_METHOD("show"), &Node3D::show);
		ClassDB::bind_method(D_METHOD("hide"), &Node3D::hide);
	}

	SUBCASE("[Node3D] Test notification") {
		ClassDB::bind_method(D_METHOD("set_notify_local_transform", "enable"), &Node3D::set_notify_local_transform);
		ClassDB::bind_method(D_METHOD("is_local_transform_notification_enabled"), &Node3D::is_local_transform_notification_enabled);

		ClassDB::bind_method(D_METHOD("set_notify_transform", "enable"), &Node3D::set_notify_transform);
		ClassDB::bind_method(D_METHOD("is_transform_notification_enabled"), &Node3D::is_transform_notification_enabled);
	}
}

TEST_CASE("[SceneTree][Node3D] Test Transformation utility methods") {
	Node3D *test_node1 = memnew(Node3D);
	Node3D *test_node2 = memnew(Node3D);
	Node3D *test_node3 = memnew(Node3D);
	Node3D *test_sibling = memnew(Node3D);

	SceneTree::get_singleton()->get_root()->add_child(test_node1);

	test_node1->add_child(test_node2);
	test_node2->add_child(test_node3);
	test_node2->add_child(test_sibling);

	test_node1->set_position(Vector3(1, 5, 10));
	test_node1->set_rotation(Vector3(Math::deg_to_rad(30.0), 0, 0));
	test_node1->set_scale(Vector3(1, 1, 1));

	test_node2->set_position(Vector3(10, -5, 2));
	test_node2->set_rotation(Vector3(0, Math::deg_to_rad(30.0), 0));
	test_node2->set_scale(Vector3(2, 2, 2));

	test_node3->set_position(Vector3(5, 20, 1));
	test_node3->set_rotation(Vector3(0, 0, Math::deg_to_rad(30.0)));
	test_node3->set_scale(Vector3(3, 3, 3));

	test_sibling->set_position(Vector3(-5, -20, 1));
	test_sibling->set_rotation(Vector3(0, 0, Math::deg_to_rad(30.0)));
	test_sibling->set_scale(Vector3(1.5, 1.5, 1.5));

	SUBCASE("[Node3D] Test ") {
	}

	ClassDB::bind_method(D_METHOD("rotate", "axis", "angle"), &Node3D::rotate);
	ClassDB::bind_method(D_METHOD("global_rotate", "axis", "angle"), &Node3D::global_rotate);
	ClassDB::bind_method(D_METHOD("global_scale", "scale"), &Node3D::global_scale);
	ClassDB::bind_method(D_METHOD("global_translate", "offset"), &Node3D::global_translate);
	ClassDB::bind_method(D_METHOD("rotate_object_local", "axis", "angle"), &Node3D::rotate_object_local);
	ClassDB::bind_method(D_METHOD("scale_object_local", "scale"), &Node3D::scale_object_local);
	ClassDB::bind_method(D_METHOD("translate_object_local", "offset"), &Node3D::translate_object_local);
	ClassDB::bind_method(D_METHOD("rotate_x", "angle"), &Node3D::rotate_x);
	ClassDB::bind_method(D_METHOD("rotate_y", "angle"), &Node3D::rotate_y);
	ClassDB::bind_method(D_METHOD("rotate_z", "angle"), &Node3D::rotate_z);
	ClassDB::bind_method(D_METHOD("translate", "offset"), &Node3D::translate);
	ClassDB::bind_method(D_METHOD("orthonormalize"), &Node3D::orthonormalize);
	ClassDB::bind_method(D_METHOD("set_identity"), &Node3D::set_identity);

	ClassDB::bind_method(D_METHOD("look_at", "target", "up", "use_model_front"), &Node3D::look_at, DEFVAL(Vector3(0, 1, 0)), DEFVAL(false));
	ClassDB::bind_method(D_METHOD("look_at_from_position", "position", "target", "up", "use_model_front"), &Node3D::look_at_from_position, DEFVAL(Vector3(0, 1, 0)), DEFVAL(false));

	ClassDB::bind_method(D_METHOD("to_local", "global_point"), &Node3D::to_local);
	ClassDB::bind_method(D_METHOD("to_global", "local_point"), &Node3D::to_global);
}

} // namespace TestNode3D

#endif // TEST_NODE_3D_H
