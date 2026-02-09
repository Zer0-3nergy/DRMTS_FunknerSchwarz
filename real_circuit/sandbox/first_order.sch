v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N 1050 -220 1090 -220 {lab=#net1}
N 1010 -220 1050 -220 {lab=#net1}
N 270 -140 320 -140 {lab=#net2}
N 650 -160 710 -160 {lab=Vint}
N 650 -220 650 -160 {lab=Vint}
N 620 -140 650 -140 {lab=Vint}
N 270 -220 430 -220 {lab=#net2}
N 490 -220 650 -220 {lab=Vint}
N 1030 150 1050 150 {lab=#net1}
N 1050 -220 1050 150 {lab=#net1}
N -230 100 -230 240 {lab=#net3}
N -270 240 -270 700 {lab=#net3}
N -270 240 -230 240 {lab=#net3}
N 100 640 100 700 {lab=#net4}
N 30 700 100 700 {lab=#net4}
N 30 240 30 700 {lab=#net4}
N 150 -220 150 160 {lab=#net2}
N -220 640 -220 760 {lab=#net5}
N -230 240 -130 240 {lab=#net3}
N -70 240 30 240 {lab=#net4}
N 30 240 80 240 {lab=#net4}
N 100 100 100 160 {lab=#net2}
N 100 160 150 160 {lab=#net2}
N -270 700 -200 700 {lab=#net3}
N -200 640 -200 700 {lab=#net3}
N 120 -260 120 -200 {lab=#net6}
N 200 -260 200 -200 {lab=#net6}
N -210 -260 -210 -200 {lab=#net7}
N -150 -260 -150 -200 {lab=#net7}
N -210 -260 -150 -260 {lab=#net7}
N 120 280 120 340 {lab=#net8}
N 120 280 180 280 {lab=#net8}
N 180 280 180 340 {lab=#net8}
N -180 280 -180 340 {lab=#net9}
N -120 280 -120 340 {lab=#net9}
N -180 280 -120 280 {lab=#net9}
N 120 -260 200 -260 {lab=#net6}
N 150 -220 270 -220 {lab=#net2}
N 270 -220 270 -140 {lab=#net2}
N -220 760 240 760 {lab=#net5}
N -250 100 -250 140 {lab=Vin}
N 80 100 80 240 {lab=#net4}
N 240 130 730 130 {lab=#net5}
N -310 140 -250 140 {lab=Vin}
N 240 130 240 760 {lab=#net5}
N 1440 -200 1440 -170 {lab=Vout}
N 1440 -200 1460 -200 {lab=Vout}
N 1390 -200 1440 -200 {lab=Vout}
N 650 -160 650 -140 {lab=Vint}
C {lab_pin.sym} 1390 -220 2 0 {name=p20 sig_type=std_logic lab=Vdd}
C {gnd.sym} 1390 -180 0 0 {name=l8 lab=GND}
C {lab_pin.sym} 320 -160 0 0 {name=p21 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 710 -180 0 0 {name=p22 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 710 -200 0 0 {name=p23 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 710 -220 0 0 {name=p24 sig_type=std_logic lab=Vdd}
C {capa.sym} 460 -220 3 0 {name=Cint2
m=1
value=0.8p
footprint=1206
device="ceramic capacitor"}
C {lab_pin.sym} 650 -140 3 0 {name=p26 sig_type=std_logic lab=Vint}
C {/foss/designs/ideal/ideal_comp.sym} 860 -190 0 0 {name=x1}
C {gnd.sym} 290 370 0 0 {name=l1 lab=GND}
C {vsource.sym} 560 350 0 0 {name=VDD value=3 savecurrent=false}
C {gnd.sym} 560 380 0 0 {name=l4 lab=GND}
C {lab_pin.sym} 290 310 1 0 {name=p3 sig_type=std_logic lab=Vin}
C {lab_pin.sym} 560 320 1 0 {name=p4 sig_type=std_logic lab=Vdd}
C {vsource.sym} 440 350 0 0 {name=VCM value=1.5 savecurrent=false}
C {gnd.sym} 440 380 0 0 {name=l5 lab=GND}
C {lab_pin.sym} 440 320 1 0 {name=p6 sig_type=std_logic lab=Vcm}
C {vsource.sym} 290 340 0 0 {name=Vin value="sin(1.5 1.4 200)" savecurrent=false}
C {code_shown.sym} 280 190 0 0 {name=Sim only_toplevel=false 
value="
.tran 10u 5m
.save all
"}
C {vsource.sym} 290 500 0 0 {name=Vphi1 value="PULSE(0V 3V 0 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} 290 530 0 0 {name=l6 lab=GND}
C {lab_pin.sym} 290 470 1 0 {name=p7 sig_type=std_logic lab=phi1}
C {vsource.sym} 520 510 0 0 {name=Vphi2 value="PULSE(0V 3V 500n 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} 520 540 0 0 {name=l7 lab=GND}
C {lab_pin.sym} 520 480 1 0 {name=p8 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -310 140 0 0 {name=p2 sig_type=std_logic lab=Vin}
C {devices/code_shown.sym} 440 190 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.lib cornerMOShv.lib mos_tt
"}
C {capa.sym} -100 240 1 1 {name=C1
m=1
value=0.25p
footprint=1206
device="ceramic capacitor"}
C {lab_pin.sym} -230 -200 1 0 {name=p17 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 100 -200 1 0 {name=p27 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -200 340 1 0 {name=p28 sig_type=std_logic lab=phi2
}
C {/foss/designs/real/real_switch.sym} -240 -50 1 0 {name=x14}
C {/foss/designs/real/real_switch.sym} 90 -50 1 0 {name=x15}
C {/foss/designs/real/real_switch.sym} -210 490 1 0 {name=x16}
C {/foss/designs/real/real_switch.sym} 90 490 1 0 {name=x17}
C {lab_pin.sym} -210 100 3 0 {name=p29 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 120 100 3 0 {name=p30 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 120 640 3 0 {name=p31 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -180 640 3 0 {name=p32 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 100 340 1 0 {name=p33 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 80 640 3 0 {name=p34 sig_type=std_logic lab=Vcm}
C {gnd.sym} -270 100 1 0 {name=l18 lab=GND}
C {gnd.sym} -240 640 1 0 {name=l19 lab=GND}
C {gnd.sym} 60 640 1 0 {name=l20 lab=GND}
C {gnd.sym} 60 100 1 0 {name=l21 lab=GND}
C {gnd.sym} -130 -200 3 0 {name=l22 lab=GND}
C {lab_pin.sym} -170 -200 1 0 {name=p35 sig_type=std_logic lab=Vdd}
C {gnd.sym} 220 -200 3 0 {name=l23 lab=GND}
C {lab_pin.sym} 180 -200 1 0 {name=p36 sig_type=std_logic lab=Vdd}
C {gnd.sym} -100 340 3 0 {name=l24 lab=GND}
C {lab_pin.sym} -140 340 1 0 {name=p37 sig_type=std_logic lab=Vdd}
C {gnd.sym} 200 340 3 0 {name=l25 lab=GND}
C {lab_pin.sym} 160 340 1 0 {name=p38 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 160 640 3 0 {name=p39 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -140 640 3 0 {name=p40 sig_type=std_logic lab=phi2}
C {lab_pin.sym} -170 100 3 0 {name=p41 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 180 100 3 0 {name=p42 sig_type=std_logic lab=phi2}
C {/foss/designs/real/real_inv.sym} -150 -50 3 0 {name=x18}
C {/foss/designs/real/real_inv.sym} 200 -50 3 0 {name=x19}
C {/foss/designs/real/real_inv.sym} 180 490 3 0 {name=x20}
C {/foss/designs/real/real_inv.sym} -120 490 3 0 {name=x21}
C {lab_pin.sym} 1460 -200 0 1 {name=p19 sig_type=std_logic lab=Vout}
C {capa.sym} 1440 -140 0 0 {name=C3
m=1
value=0.1p
footprint=1206
device="ceramic capacitor"}
C {gnd.sym} 1440 -110 0 0 {name=l3 lab=GND}
C {gnd.sym} 730 110 2 0 {name=l10 lab=GND}
C {lab_pin.sym} 730 150 0 0 {name=p9 sig_type=std_logic lab=Vdd}
C {/foss/designs/real/real_inv.sym} 880 130 2 0 {name=x3}
C {/foss/designs/real/real_inv.sym} 1240 -200 0 0 {name=x5}
C {/foss/designs/real/simple_OTA.sym} 470 -140 0 0 {name=x4}
C {gnd.sym} 620 -120 0 0 {name=l2 lab=GND}
C {lab_pin.sym} 620 -160 1 0 {name=p1 sig_type=std_logic lab=Vdd}
