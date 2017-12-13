#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/BitcoinPro.ico

convert ../../src/qt/res/icons/BitcoinPro-16.png ../../src/qt/res/icons/BitcoinPro-32.png ../../src/qt/res/icons/BitcoinPro-48.png ${ICON_DST}
