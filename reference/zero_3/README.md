# rk3566 Zero 3 Install

## Install OS to eMMC Maskrom Mode ZERO 3W

How to enter Maskrom mode on Radxa ZERO 3W

1. Remove the micro SD card and power cable
2. Press and hold the Maskrom button on the back of the
3. Connect the USB of PC host via USB-A to USB-C cable, if the green light of
   the power supply is always on, it will enter the Maskrom mode successfully

![ZERO 3E Overview](https://docs.radxa.com/en/assets/images/radxa_zero_3e-5dd80fbef63346e2ccb826313afd5683.webp)

How to enter Maskrom mode on Radxa ZERO 3E

1. Remove the micro SD card and power cable
2. Connect the USB of PC host via USB-A to USB-C cable, if the green light of
   the power supply is always on, it will enter the Maskrom mode successfully

The OTG interface on the Radxa ZERO 3 is TYPE-C, which allows communication
between the host computer and the motherboard entering the Maskrom via a USB-C
to USB-A cable.

In Maskrom mode, you can use the
[Rockchip Development Kit](https://docs.radxa.com/en/general-tutorial/rksdk) to
erase, wire-flash, etc. your product.

## rkdeveloptool

### SPI Loader

ROCK 3 Family:(**Corresponding CPU models:RK3566/RK3568/RK3568J**)

- [CM3 IO SPI U-Boot image](https://dl.radxa.com/rock3/images/loader/radxa-cm3-io/radxa-cm3-io-idbloader-g8684d740b9f.img)
- [rk356x\_spl\_loader\_ddr1056\_v1.10.111.bin](https://dl.radxa.com/rock3/images/loader/radxa-cm3-io/rk356x_spl_loader_ddr1056_v1.10.111.bin)
- [rk356x\_spl\_loader\_ddr1056\_v1.12.109\_no\_check\_todly.bin](https://dl.radxa.com/rock3/images/loader/rk356x_spl_loader_ddr1056_v1.12.109_no_check_todly.bin)

```
sudo rkdeveloptool db <loader>
```

eg:

```
sudo rkdeveloptool db rk356x_spl_loader_ddr1056_v1.10.111.bin
```

### Write Image

Download an image from
[ZERO 3 Release](https://github.com/radxa-build/radxa-zero3/releases/latest),
and also check out the
[full zero 3 releases page](https://github.com/radxa-build/radxa-zero3/releases)--it
has more options and build 4 was recommended in discord over build 3, the
current default.

Decompress the file. You can use unxz command to extract .xz files:

`unxz file.xz`

or using with --decompress option of xz:

`xz --decompress file.xz`

then run `shasum -c <radxa-zero3_debian_bullseye_cli_b4.img.sha512>` to verify
the download.

```
sudo rkdeveloptool wl 0 <image>
```

eg

```
sudo rkdeveloptool wl 0 radxa-zero3_debian_bullseye_cli_b4.img
```

### Reboot device[](https://docs.radxa.com/en/zero/zero3/low-level-dev/install-to-emmc#reboot-device)

```
sudo rkdeveloptool rd
```
