#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/voxels.png
ICON_DST=../../src/qt/res/icons/voxels.ico
convert ${ICON_SRC} -resize 16x16 voxels-16.png
convert ${ICON_SRC} -resize 32x32 voxels-32.png
convert ${ICON_SRC} -resize 48x48 voxels-48.png
convert voxels-16.png voxels-32.png voxels-48.png ${ICON_DST}

