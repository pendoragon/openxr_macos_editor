# openxr_macos_editor
This is a Godot external openxr editor module for macos. Since the in-tree build disables openxr module as a whole on macos, this module simply builds the editor part so that we can edit action sets, profiles and so forth on macos.
# How to use
This module needs to be compiled with Godot, so you need to clone both this repo and the Godot source code. Then compile godot with it as a custom module:
```shell
$ git clone https://github.com/godotengine/godot.git
$ git clone https://github.com/pendoragon/openxr_macos_editor.git /path/to/this/module
$ cd godot
$ scons platform=macos custom_modules=/path/to/this/module --jobs=$(sysctl -n hw.logicalcpu)
```