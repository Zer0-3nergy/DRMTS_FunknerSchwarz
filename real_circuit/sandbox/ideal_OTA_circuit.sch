v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N 710 40 750 40 {lab=#net1}
N 710 40 710 430 {lab=#net1}
N 670 40 710 40 {lab=#net1}
N -70 100 -20 100 {lab=#net2}
N 310 100 370 100 {lab=Vint}
N 310 40 310 100 {lab=Vint}
N 280 100 310 100 {lab=Vint}
N 150 40 310 40 {lab=Vint}
N 690 430 710 430 {lab=#net1}
N -660 40 -660 100 {lab=#net3}
N -690 100 -660 100 {lab=#net3}
N -820 40 -660 40 {lab=#net3}
N -1540 360 -1540 500 {lab=#net4}
N -1580 500 -1580 960 {lab=#net4}
N -1580 500 -1540 500 {lab=#net4}
N -1210 900 -1210 960 {lab=#net5}
N -1280 960 -1210 960 {lab=#net5}
N -1280 500 -1280 960 {lab=#net5}
N -1230 360 -1230 500 {lab=#net5}
N -1160 40 -1160 420 {lab=Q}
N -1530 900 -1530 1020 {lab=#net6}
N -1540 500 -1440 500 {lab=#net4}
N -1380 500 -1280 500 {lab=#net5}
N -1280 500 -1230 500 {lab=#net5}
N -1210 360 -1210 420 {lab=Q}
N -1210 420 -1160 420 {lab=Q}
N -1580 960 -1510 960 {lab=#net4}
N -1510 900 -1510 960 {lab=#net4}
N -1190 0 -1190 60 {lab=#net7}
N -1110 0 -1110 60 {lab=#net7}
N -1520 0 -1520 60 {lab=#net8}
N -1460 0 -1460 60 {lab=#net8}
N -1520 0 -1460 0 {lab=#net8}
N -1190 540 -1190 600 {lab=#net9}
N -1190 540 -1130 540 {lab=#net9}
N -1130 540 -1130 600 {lab=#net9}
N -1490 540 -1490 600 {lab=#net10}
N -1430 540 -1430 600 {lab=#net10}
N -1490 540 -1430 540 {lab=#net10}
N -1190 0 -1110 0 {lab=#net7}
N -1040 40 -1040 100 {lab=Q}
N -1160 40 -1040 40 {lab=Q}
N -570 360 -570 500 {lab=#net11}
N -610 500 -610 960 {lab=#net11}
N -610 500 -570 500 {lab=#net11}
N -240 900 -240 960 {lab=#net12}
N -310 960 -240 960 {lab=#net12}
N -310 500 -310 960 {lab=#net12}
N -190 40 -190 420 {lab=#net2}
N -560 900 -560 1020 {lab=#net6}
N -570 500 -470 500 {lab=#net11}
N -410 500 -310 500 {lab=#net12}
N -240 360 -240 420 {lab=#net2}
N -240 420 -190 420 {lab=#net2}
N -610 960 -540 960 {lab=#net11}
N -540 900 -540 960 {lab=#net11}
N -220 0 -220 60 {lab=#net13}
N -140 0 -140 60 {lab=#net13}
N -550 0 -550 60 {lab=#net14}
N -490 0 -490 60 {lab=#net14}
N -550 0 -490 0 {lab=#net14}
N -220 540 -220 600 {lab=#net15}
N -220 540 -160 540 {lab=#net15}
N -160 540 -160 600 {lab=#net15}
N -520 540 -520 600 {lab=#net16}
N -460 540 -460 600 {lab=#net16}
N -520 540 -460 540 {lab=#net16}
N -220 0 -140 0 {lab=#net13}
N -70 40 90 40 {lab=#net2}
N -1530 1020 -560 1020 {lab=#net6}
N -70 40 -70 100 {lab=#net2}
N -100 410 -100 1020 {lab=#net6}
N -560 1020 -100 1020 {lab=#net6}
N -100 410 390 410 {lab=#net6}
N -660 100 -660 400 {lab=#net3}
N -660 400 -590 400 {lab=#net3}
N -590 360 -590 400 {lab=#net3}
N -310 400 -310 500 {lab=#net12}
N 1090 60 1090 110 {lab=Vout}
N 1090 60 1110 60 {lab=Vout}
N 1050 60 1090 60 {lab=Vout}
N -190 40 -70 40 {lab=#net2}
N -1040 100 -990 100 {lab=Q}
N -1040 40 -880 40 {lab=Q}
N -590 400 -480 400 {lab=#net3}
N -310 400 -260 400 {lab=#net12}
N -260 360 -260 400 {lab=#net12}
N -420 400 -310 400 {lab=#net12}
C {gnd.sym} -40 760 0 0 {name=l1 lab=GND}
C {vsource.sym} 90 730 0 0 {name=VDD value=3 savecurrent=false}
C {gnd.sym} 90 760 0 0 {name=l4 lab=GND}
C {lab_pin.sym} -40 700 1 0 {name=p3 sig_type=std_logic lab=Vin}
C {lab_pin.sym} 90 700 1 0 {name=p4 sig_type=std_logic lab=Vdd}
C {vsource.sym} 180 730 0 0 {name=VCM value=1.5 savecurrent=false}
C {gnd.sym} 180 760 0 0 {name=l5 lab=GND}
C {lab_pin.sym} 180 700 1 0 {name=p6 sig_type=std_logic lab=Vcm}
C {vsource.sym} -40 730 0 0 {name=Vin value="sin(1.5 0.8 200)" savecurrent=false}
C {code_shown.sym} -50 540 0 0 {name=Sim only_toplevel=false 
value="
.control
save time v(vout) v(vin)
tran 1u 10m 0 1u
write analog_out.raw
.endc
"}
C {vsource.sym} 260 590 0 0 {name=Vphi1 value="PULSE(0V 3V 0 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} 260 620 0 0 {name=l6 lab=GND}
C {lab_pin.sym} 260 560 1 0 {name=p7 sig_type=std_logic lab=phi1}
C {vsource.sym} 260 730 0 0 {name=Vphi2 value="PULSE(0V 3V 500n 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} 260 760 0 0 {name=l7 lab=GND}
C {lab_pin.sym} 260 700 1 0 {name=p8 sig_type=std_logic lab=phi2
}
C {capa.sym} -440 500 1 1 {name=C2
m=1
value=352f
footprint=1206
device="ceramic capacitor"}
C {lab_pin.sym} 1110 60 0 1 {name=p19 sig_type=std_logic lab=Vout}
C {lab_pin.sym} 1050 40 2 0 {name=p20 sig_type=std_logic lab=Vdd}
C {gnd.sym} 1050 80 0 0 {name=l8 lab=GND}
C {lab_pin.sym} -20 120 0 0 {name=p21 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 370 80 0 0 {name=p22 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 370 60 0 0 {name=p23 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 370 40 0 0 {name=p24 sig_type=std_logic lab=Vdd}
C {capa.sym} 120 40 3 0 {name=Cint2
m=1
value=1p
footprint=1206
device="ceramic capacitor"}
C {lab_pin.sym} 390 430 0 0 {name=p25 sig_type=std_logic lab=Vdd}
C {gnd.sym} 390 390 2 0 {name=l9 lab=GND}
C {lab_pin.sym} 310 100 3 0 {name=p26 sig_type=std_logic lab=Vint}
C {capa.sym} -1410 500 3 0 {name=C1
m=1
value=88f
footprint=1206
device="ceramic capacitor"}
C {capa.sym} -850 40 3 0 {name=Cint1
m=1
value=1p
footprint=1206
device="ceramic capacitor"}
C {/foss/designs/ideal/ideal_comp.sym} 520 70 0 0 {name=x1}
C {devices/code_shown.sym} -50 470 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.lib cornerMOShv.lib mos_tt
"}
C {/foss/designs/real/real_inv.sym} 540 410 2 0 {name=x4}
C {/foss/designs/real/real_inv.sym} 900 60 0 0 {name=x5}
C {lab_pin.sym} -1560 360 3 0 {name=p17 sig_type=std_logic lab=Vin}
C {lab_pin.sym} -1540 60 1 0 {name=p2 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -1210 60 1 0 {name=p37 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -1510 600 1 0 {name=p38 sig_type=std_logic lab=phi2
}
C {/foss/designs/real/real_switch.sym} -1550 210 1 0 {name=x6}
C {/foss/designs/real/real_switch.sym} -1220 210 1 0 {name=x7}
C {/foss/designs/real/real_switch.sym} -1520 750 1 0 {name=x8}
C {/foss/designs/real/real_switch.sym} -1220 750 1 0 {name=x9}
C {lab_pin.sym} -1520 360 3 0 {name=p39 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -1190 360 3 0 {name=p40 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -1190 900 3 0 {name=p41 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -1490 900 3 0 {name=p42 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -1210 600 1 0 {name=p43 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -1230 900 3 0 {name=p44 sig_type=std_logic lab=Vcm}
C {gnd.sym} -1580 360 1 0 {name=l10 lab=GND}
C {gnd.sym} -1550 900 1 0 {name=l11 lab=GND}
C {gnd.sym} -1250 900 1 0 {name=l12 lab=GND}
C {gnd.sym} -1250 360 1 0 {name=l13 lab=GND}
C {gnd.sym} -1440 60 3 0 {name=l14 lab=GND}
C {lab_pin.sym} -1480 60 1 0 {name=p45 sig_type=std_logic lab=Vdd}
C {gnd.sym} -1090 60 3 0 {name=l15 lab=GND}
C {lab_pin.sym} -1130 60 1 0 {name=p46 sig_type=std_logic lab=Vdd}
C {gnd.sym} -1410 600 3 0 {name=l16 lab=GND}
C {lab_pin.sym} -1450 600 1 0 {name=p47 sig_type=std_logic lab=Vdd}
C {gnd.sym} -1110 600 3 0 {name=l17 lab=GND}
C {lab_pin.sym} -1150 600 1 0 {name=p48 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -1150 900 3 0 {name=p49 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -1450 900 3 0 {name=p50 sig_type=std_logic lab=phi2}
C {lab_pin.sym} -1480 360 3 0 {name=p51 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -1130 360 3 0 {name=p52 sig_type=std_logic lab=phi2}
C {/foss/designs/real/real_inv.sym} -1460 210 3 0 {name=x10}
C {/foss/designs/real/real_inv.sym} -1110 210 3 0 {name=x11}
C {/foss/designs/real/real_inv.sym} -1130 750 3 0 {name=x12}
C {/foss/designs/real/real_inv.sym} -1430 750 3 0 {name=x13}
C {lab_pin.sym} -570 60 1 0 {name=p10 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -240 60 1 0 {name=p11 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -540 600 1 0 {name=p12 sig_type=std_logic lab=phi2
}
C {/foss/designs/real/real_switch.sym} -580 210 1 0 {name=x14}
C {/foss/designs/real/real_switch.sym} -250 210 1 0 {name=x15}
C {/foss/designs/real/real_switch.sym} -550 750 1 0 {name=x16}
C {/foss/designs/real/real_switch.sym} -250 750 1 0 {name=x17}
C {lab_pin.sym} -550 360 3 0 {name=p13 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -220 360 3 0 {name=p14 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -220 900 3 0 {name=p15 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -520 900 3 0 {name=p16 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -240 600 1 0 {name=p18 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -260 900 3 0 {name=p27 sig_type=std_logic lab=Vcm}
C {gnd.sym} -610 360 1 0 {name=l18 lab=GND}
C {gnd.sym} -580 900 1 0 {name=l19 lab=GND}
C {gnd.sym} -280 900 1 0 {name=l20 lab=GND}
C {gnd.sym} -280 360 1 0 {name=l21 lab=GND}
C {gnd.sym} -470 60 3 0 {name=l22 lab=GND}
C {lab_pin.sym} -510 60 1 0 {name=p28 sig_type=std_logic lab=Vdd}
C {gnd.sym} -120 60 3 0 {name=l23 lab=GND}
C {lab_pin.sym} -160 60 1 0 {name=p29 sig_type=std_logic lab=Vdd}
C {gnd.sym} -440 600 3 0 {name=l24 lab=GND}
C {lab_pin.sym} -480 600 1 0 {name=p30 sig_type=std_logic lab=Vdd}
C {gnd.sym} -140 600 3 0 {name=l25 lab=GND}
C {lab_pin.sym} -180 600 1 0 {name=p31 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -180 900 3 0 {name=p32 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -480 900 3 0 {name=p33 sig_type=std_logic lab=phi2}
C {lab_pin.sym} -510 360 3 0 {name=p34 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -160 360 3 0 {name=p35 sig_type=std_logic lab=phi2}
C {/foss/designs/real/real_inv.sym} -490 210 3 0 {name=x18}
C {/foss/designs/real/real_inv.sym} -140 210 3 0 {name=x19}
C {/foss/designs/real/real_inv.sym} -160 750 3 0 {name=x20}
C {/foss/designs/real/real_inv.sym} -460 750 3 0 {name=x21}
C {capa.sym} 1090 140 0 0 {name=C3
m=1
value=5p
footprint=1206
device="ceramic capacitor"}
C {gnd.sym} 1090 170 0 0 {name=l3 lab=GND}
C {lab_pin.sym} -1160 40 0 0 {name=p1 sig_type=std_logic lab=Q}
C {lab_pin.sym} -990 120 0 0 {name=p9 sig_type=std_logic lab=Vcm}
C {capa.sym} -450 400 3 0 {name=C4
m=1
value=88f
footprint=1206
device="ceramic capacitor"}
C {/foss/designs/ideal/ideal_opamp.sym} -840 110 0 0 {name=x22}
C {/foss/designs/ideal/ideal_opamp.sym} 130 110 0 0 {name=x3}
