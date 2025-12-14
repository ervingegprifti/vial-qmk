# handwired/eg/unit

* Keyboard Maintainer: [Ervin Gegprifti](https://github.com/ervingegprifti)
* Hardware Supported: *Seeed Studio XIAO RP2040*
* Hardware Availability: [Seeed Studio XIAO RP2040](https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html)

Make example for this keyboard (after setting up your build environment):

    make handwired/eg/unit:default

Flashing example for this keyboard:

    make handwired/eg/unit:default:flash
	
Build steps using QMK MSYS:

    cd <vial-qmk root directory>
	make handwired/eg/unit:default
	make handwired/eg/unit:vial

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
