ScrollKeeper
============
ScrollKeeper is a cataloging system for documentation on open systems. It manages documentation metadata (as specified by the Open Source Metadata
Framework(OMF)) and provides a simple API to allow help browsers to find, sort, and search the document catalog. It will also be able to communicate
with catalog servers on the Net to search for documents which are not on the local system.

This repository is built from the source [ScrollKeeper 0.3.14](https://mirror.ossplanet.net/gnome/sources/scrollkeeper/0.3/scrollkeeper-0.3.14.tar.gz)

Build from source
-----------------
**Dependencies:**<br>
`libxml2-dev` `libxml2-utils` and `libxslt1-dev`

**Make and Install:**<br>
Follow below steps inside `scrollkeeper-0.3.14` directory.
1. Configure package `./configure`
2. Compile package `make`
3. Install package `sudo make install`
4. Uninstall package `sudo make uninstall`

Build Debian Package
--------------------
Follow below steps inside `scrollkeeper-0.3.14` directory.
1. Debianizes the source with `debmake -t -p scrollkeeper -u 0.3.14 -r 0 -x 1`
2. Build the Debian package from the debianized source tree `debuild -b -uc -us`
	* if build failed with config, execute `intltoolize --force`

