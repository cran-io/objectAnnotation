### Compiling

In order to compile the image annotation tool you need Qt (http://qt.nokia.com/) version 4 and optionally (for extraction of images) the OpenCV library (recent version 2 is working fine) and Boost. This tool has not been tested so far under Windows, nevertheless, it should be compilable there, as well.

### Dependencies

```sh
$ brew install boost
$ brew install qt
```

Once you have installed Qt (and maybe mingw on windows ... see http://www.mingw.org) compiling the sources should work out of the box:
(1) Open a command line
(2) Go into the directory where you extracted the archive file to, i.e., the directory where the project file (.pro) is located.
(3) Type qmake ... this will generate a Makefile.
(4) Type make to create the binary "imgAnnotation" in the same folder as the project file
(5) Launch the program in "imgAnnotation"
(6) Now you can create a new database by adding new image files and saving the database

NOTE: Very important. To compile this you neeq QT and BOOST. brew install qt // brew install boost

### Compiling without OpenCV support

If you have problems with OpenCV support, you can also disable OpenCV support. Do this by modifying the project file imgAnnotation.pro in line 3. Simply remove the '#' sign from the beginning of the line:

DEFINES += NO_OPENCV

This will disable OpenCV support. You then can compile the program which is now dependent only on Qt. 


### Some information about the tool

The features of this tool are as follows:
* annotation of objects with bounding boxes
* creation of files for training with opencv_traincascade (automatically when saving database)
* support for easily modifying, copying and pasting bounding boxes
* zoom in/out
* per object, freely chosen "fix points" can mark additional points on objects (these can be used to align annotated objects more accurately)
* the rotation of an object can be annotated (with fix points)
* each object can have freely chosen properties (numbers, text)
* the tool can even by used to visualize detection results (ordered by a score value)
* a subset of visible objects in an image can be chosen
* support for properties of images (numbers, text)

If OpenCV is enabled, the following features are available, as well:
* selection of objects by filtering over properties
* alignment and extraction of selected objects
* generation of random samples per annotated object by applying various distortion methods

The format in which the database is saved is as follows. All annotations belonging to a specific images follow a line indicating the image filename:

file: <imageFileName>

The path can be absolute or relative (to the position of the annotation database file). 

An object anotation is indicated by a line of the format:

object: <ID>

The ID is a unique and positive integer number or -1 in which case an unique ID is assigned when the database file is loaded into the annotation tool.

All properties belonging to an object follow the 'object:...' line. Their format is given by:

<key>: <value>

In general, keys and values can be chosen arbitrarily. Nevertheless, there are two properties which are of particular interest to the tool and which need to be in a specific format:

bbox: <x>, <y>, <width>, <height>
can also be
bbox: <x>, <y>, <width> x <height>

and

fixpoints: <x1>, <y1>, <x2>, <y2>, ...

The property 'bbox' indicates position and size of the object by a rectangle. X, y, width, and height can be floating point values. The property 'fixpoints' indicates x and y position of a set of points that can optionally be used to align annotated objects and to normalize them with respect to rotation. For "fixpoints", the number of points needs to be even.


### LICENSE CONDITIONS ###

The Image Annotation Tool for image annotations with pixelwise masks

Copyright (C) 2007 Alexander Klaeser

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

