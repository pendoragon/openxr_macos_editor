# openxr_macos_editor
This is a Godot external openxr editor module for macos. Since the in-tree build disables openxr module as a whole on macos, this module simply builds the editor part so that we can edit action sets, profiles and so forth on macos.
# How to use
This module needs to be compiled with Godot, so you need to get the Godot source code first and place this module under `modules` directory:
```shell
$ git clone https://github.com/godotengine/godot.git
$ git clone https://github.com/pendoragon/openxr_macos_editor.git godot/modules/openxr_macos_editor
```
To build the editor with this module on macos, simply run
```shell
$ cd godot
$ scons platform=macos --jobs=$(sysctl -n hw.logicalcpu)
```