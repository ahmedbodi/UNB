
Debian
====================
This directory contains files used to package voxelsd/voxels-qt
for Debian-based Linux systems. If you compile voxelsd/voxels-qt yourself, there are some useful files here.

## voxels: URI support ##


voxels-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install voxels-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your voxels-qt binary to `/usr/bin`
and the `../../share/pixmaps/voxels128.png` to `/usr/share/pixmaps`

voxels-qt.protocol (KDE)

