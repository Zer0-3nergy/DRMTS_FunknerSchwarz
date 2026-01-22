v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N -230 -20 -190 -20 {lab=GND}
N -230 -30 -230 -20 {lab=GND}
N 620 40 660 40 {lab=#net1}
N 620 40 620 1080 {lab=#net1}
N 580 40 620 40 {lab=#net1}
N -110 120 -110 150 {lab=Vcm}
N -160 100 -110 100 {lab=#net2}
N 220 100 280 100 {lab=Vint}
N -160 40 -160 100 {lab=#net2}
N 220 40 220 100 {lab=Vint}
N 190 100 220 100 {lab=Vint}
N -160 40 -0 40 {lab=#net2}
N 60 40 220 40 {lab=Vint}
N 540 1080 620 1080 {lab=#net1}
N 960 40 1060 40 {lab=Vdd}
N -520 540 -520 650 {lab=#net3}
N -550 540 -520 540 {lab=#net3}
N -550 400 -550 540 {lab=#net3}
N -520 540 -450 540 {lab=#net3}
N -240 400 -240 540 {lab=#net4}
N -230 540 -230 650 {lab=#net4}
N -240 540 -230 540 {lab=#net4}
N -390 540 -240 540 {lab=#net4}
N -540 950 -540 1060 {lab=#net5}
N -310 400 -310 460 {lab=#net6}
N -310 460 -260 460 {lab=#net6}
N -260 400 -260 460 {lab=#net6}
N -620 400 -620 460 {lab=#net7}
N -620 460 -570 460 {lab=#net7}
N -570 400 -570 460 {lab=#net7}
N -610 950 -610 1000 {lab=#net8}
N -610 1000 -560 1000 {lab=#net8}
N -560 950 -560 1000 {lab=#net8}
N -330 950 -330 1000 {lab=#net9}
N -330 1000 -270 1000 {lab=#net9}
N -270 950 -270 1000 {lab=#net9}
N -540 1060 240 1060 {lab=#net5}
N -220 100 -160 100 {lab=#net2}
N 960 60 1060 60 {lab=Vout}
C {vcvs.sym} -190 -50 0 0 {name=Etrip value=0.5
}
C {gnd.sym} -190 -20 0 0 {name=l2 lab=GND}
C {gnd.sym} -360 -20 0 0 {name=l1 lab=GND}
C {vsource.sym} -190 -180 0 0 {name=Vref value=3 savecurrent=false}
C {gnd.sym} -190 -150 0 0 {name=l3 lab=GND}
C {vsource.sym} -110 -50 0 0 {name=VDD value=3 savecurrent=false}
C {gnd.sym} -110 -20 0 0 {name=l4 lab=GND}
C {lab_pin.sym} -190 -80 1 0 {name=p1 sig_type=std_logic lab=trip}
C {lab_pin.sym} -190 -210 1 0 {name=p2 sig_type=std_logic lab=Vref}
C {lab_pin.sym} -360 -80 1 0 {name=p3 sig_type=std_logic lab=Vin}
C {lab_pin.sym} -110 -80 1 0 {name=p4 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -230 -70 0 0 {name=p5 sig_type=std_logic lab=Vdd}
C {vsource.sym} -110 -180 0 0 {name=VCM value=1.5 savecurrent=false}
C {gnd.sym} -110 -150 0 0 {name=l5 lab=GND}
C {lab_pin.sym} -110 -210 1 0 {name=p6 sig_type=std_logic lab=Vcm}
C {vsource.sym} -360 -50 0 0 {name=Vin value="sin(1.5 1.4 500k)" savecurrent=false}
C {code_shown.sym} -360 -200 0 0 {name=Sim only_toplevel=false 
value="
.tran 0.4u 4u
.save all
"}
C {vsource.sym} -40 -180 0 0 {name=Vphi1 value="PULSE(0 3 0ns 0.1ns 0.1ns 4ns 10ns)" savecurrent=false}
C {gnd.sym} -40 -150 0 0 {name=l6 lab=GND}
C {lab_pin.sym} -40 -210 1 0 {name=p7 sig_type=std_logic lab=phi1}
C {vsource.sym} -40 -50 0 0 {name=Vphi2 value="PULSE(0 3 5ns 0.1ns 0.1ns 4ns 10ns)" savecurrent=false}
C {gnd.sym} -40 -20 0 0 {name=l7 lab=GND}
C {lab_pin.sym} -40 -80 1 0 {name=p8 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} 1060 60 0 1 {name=p19 sig_type=std_logic lab=Vout}
C {lab_pin.sym} 1060 40 2 0 {name=p20 sig_type=std_logic lab=Vdd}
C {gnd.sym} 960 80 0 0 {name=l8 lab=GND}
C {lab_pin.sym} -110 150 3 0 {name=p21 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 280 80 0 0 {name=p22 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} 280 60 0 0 {name=p23 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 280 40 0 0 {name=p24 sig_type=std_logic lab=Vdd}
C {capa.sym} 30 40 3 0 {name=Cin1
m=1
value=1p
footprint=1206
device="ceramic capacitor"}
C {lab_pin.sym} 240 1080 0 0 {name=p25 sig_type=std_logic lab=Vref}
C {gnd.sym} 240 1040 2 0 {name=l9 lab=GND}
C {lab_pin.sym} 220 100 3 0 {name=p26 sig_type=std_logic lab=Vint}
C {/foss/designs/delta_sigma/ideal/ideal_opamp.sym} 40 110 0 0 {name=x5}
C {/foss/designs/delta_sigma/ideal/ideal_comp.sym} 430 70 0 0 {name=x1}
C {devices/code_shown.sym} 250 -200 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.lib cornerMOShv.lib mos_tt
"}
C {/foss/designs/delta_sigma/real/real_inv.sym} 390 1060 2 0 {name=x3}
C {/foss/designs/delta_sigma/real/real_inv.sym} 810 60 0 0 {name=x2}
C {lab_pin.sym} -530 100 1 0 {name=p17 sig_type=std_logic lab=Vin}
C {capa.sym} -420 540 3 0 {name=Cin
m=1
value=0.25p
footprint=1206
device="ceramic capacitor"}
C {/foss/designs/delta_sigma/real/real_switch.sym} -550 250 1 0 {name=x4}
C {/foss/designs/delta_sigma/real/real_switch.sym} -240 250 1 0 {name=x6}
C {/foss/designs/delta_sigma/real/real_switch.sym} -540 800 1 0 {name=x7}
C {/foss/designs/delta_sigma/real/real_switch.sym} -250 800 1 0 {name=x8}
C {lab_pin.sym} -530 400 3 0 {name=p9 sig_type=std_logic lab=phi1}
C {lab_pin.sym} -230 950 3 0 {name=p10 sig_type=std_logic lab=phi1}
C {/foss/designs/delta_sigma/real/real_inv.sym} -620 250 1 0 {name=x9}
C {lab_pin.sym} -600 100 1 0 {name=p11 sig_type=std_logic lab=phi1}
C {/foss/designs/delta_sigma/real/real_inv.sym} -330 800 1 0 {name=x10}
C {lab_pin.sym} -310 650 1 0 {name=p12 sig_type=std_logic lab=phi1}
C {/foss/designs/delta_sigma/real/real_inv.sym} -610 800 1 0 {name=x11}
C {/foss/designs/delta_sigma/real/real_inv.sym} -310 250 1 0 {name=x12}
C {lab_pin.sym} -590 650 1 0 {name=p13 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -290 100 1 0 {name=p14 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -220 400 3 0 {name=p15 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -600 400 3 0 {name=p28 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -290 400 3 0 {name=p29 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -520 950 3 0 {name=p30 sig_type=std_logic lab=phi2
}
C {lab_pin.sym} -250 950 3 0 {name=p31 sig_type=std_logic lab=Vcm}
C {lab_pin.sym} -590 950 3 0 {name=p33 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -310 950 3 0 {name=p34 sig_type=std_logic lab=Vdd}
C {gnd.sym} -630 950 0 0 {name=l11 lab=GND}
C {gnd.sym} -350 950 0 0 {name=l13 lab=GND}
C {gnd.sym} -330 400 0 0 {name=l14 lab=GND}
C {gnd.sym} -640 400 0 0 {name=l15 lab=GND}
C {capa.sym} 1030 90 0 0 {name=Cin3
m=1
value=100f
footprint=1206
device="ceramic capacitor"}
C {gnd.sym} 1030 120 1 0 {name=l10 lab=GND}
