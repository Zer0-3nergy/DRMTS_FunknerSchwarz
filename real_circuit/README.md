# Realization of the Modulator with SG13G2 CMOS Technology

**Technology:** SG13G2 (IHP 130 nm SiGe BiCMOS)

🔗 **Technology documentation:** [https://www.ihp-microelectronics.com/services/research-and-prototyping-service/sg13g2](https://www.ihp-microelectronics.com/services/research-and-prototyping-service/sg13g2)

## Overview

This repository contains the schematic-level realization of a modulator using the **SG13G2 CMOS technology**, focusing on circuits implemented with **hv_nmos** and **hv_pmos** devices. The work is organized around reusable building blocks, verification testbenches, and supporting design utilities following a **gm/ID-based sizing methodology**.

The designs are intended for use with **xschem** and SPICE-based simulation flows and can also serve as a sandbox for experimenting with SG13G2 CMOS devices.

---

## Repository Structure

### `final/`

Finalized circuits based on **SG13G2 hv_nmos and hv_pmos** devices:

* Schematic
* Symbol
* Testbench

Implemented components:

#### Inverter (INV)

* CMOS inverter using high-voltage devices
* Wp/Wn 2 - 3 Ratio and L = 0.6 

<img src="https://github.com/Zer0-3nergy/DRMTS_FunknerSchwarz/blob/main/img/inv.png">

---

#### Transmission Gate (TG)

* Complementary NMOS/PMOS transmission gate
* Wp/Wn 2 - 3 Ratio and L = 0.6

<img src="https://github.com/Zer0-3nergy/DRMTS_FunknerSchwarz/blob/main/img/tg.png">

---

#### 5-Transistor OTA (5T OTA)

* Simple 5-transistor operational transconductance amplifier
* Sized with notebook in gmid folder

<img src="https://github.com/Zer0-3nergy/DRMTS_FunknerSchwarz/blob/main/img/ota.png">

---

### Modulator-Level Circuit

A top-level circuit combining:

* Ideal comparator
* Inverter (INV)
* Transmission Gate (TG)
* 5T OTA

<img src="https://github.com/Zer0-3nergy/DRMTS_FunknerSchwarz/blob/main/img/cir.png">

This schematic demonstrates the integration of the individual blocks into a complete modulator architecture.

---

### `gmid/`

Device sizing and biasing resources based on the **gm/ID methodology**:

* Lookup tables (LUTs) for **hv_nmos** and **hv_pmos**
* Scripts for extracting mosfet parameters
* Sizing flows consistent with SG13G2 PDK models

---

### `scripts/`

Utility scripts to support simulation and data analysis:

* Export of `.raw` simulation files from **xschem**
* Conversion of simulation data to `data.csv` format
* Intended for post-processing in Python, MATLAB, or similar tools

---

### `sandbox/`

Experimental schematics and test circuits for:

* Exploring SG13G2 CMOS behavior
* Trying alternative biasing schemes
* Rapid prototyping before migration to `final/`

