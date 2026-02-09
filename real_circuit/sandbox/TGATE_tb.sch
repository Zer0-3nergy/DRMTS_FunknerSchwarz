v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N 490 200 550 200 {lab=#net1}
N 550 130 550 200 {lab=#net1}
N 490 130 550 130 {lab=#net1}
N 100 110 100 160 {lab=Vout}
N 100 110 190 110 {lab=Vout}
C {lab_pin.sym} 190 20 0 0 {name=p20 sig_type=std_logic lab=Vdd}
C {gnd.sym} 190 -40 2 0 {name=l8 lab=GND}
C {gnd.sym} -350 150 0 0 {name=l1 lab=GND}
C {vsource.sym} -220 120 0 0 {name=VDD value=3 savecurrent=false}
C {gnd.sym} -220 150 0 0 {name=l4 lab=GND}
C {lab_pin.sym} -350 90 1 0 {name=p3 sig_type=std_logic lab=Vin}
C {lab_pin.sym} -220 90 1 0 {name=p4 sig_type=std_logic lab=Vdd}
C {vsource.sym} -350 120 0 0 {name=Vin value="sin(1.5 0.8 200)" savecurrent=false}
C {code_shown.sym} -360 -70 0 0 {name=Sim1 only_toplevel=false 
value="
.tran 1u 5m
.control
save all
.endc
"}
C {vsource.sym} -140 120 0 0 {name=Vphi1 value="PULSE(0V 3V 0 1n 1n 490n 1u)" savecurrent=false}
C {gnd.sym} -140 150 0 0 {name=l6 lab=GND}
C {lab_pin.sym} -140 90 1 0 {name=p7 sig_type=std_logic lab=phi1}
C {devices/code_shown.sym} -360 -140 0 0 {name=MODEL1 only_toplevel=true
format="tcleval( @value )"
value="
.lib cornerMOShv.lib mos_tt
"}
C {lab_pin.sym} 190 0 2 1 {name=p2 sig_type=std_logic lab=Pout}
C {lab_pin.sym} 490 0 2 0 {name=p5 sig_type=std_logic lab=Vdd}
C {/foss/designs/real/real_switch.sym} 340 -10 2 0 {name=x2}
C {lab_pin.sym} 190 130 0 0 {name=p9 sig_type=std_logic lab=Vdd}
C {gnd.sym} 160 180 2 0 {name=l5 lab=GND}
C {lab_pin.sym} 190 180 0 0 {name=p10 sig_type=std_logic lab=phi1}
C {lab_pin.sym} 100 110 2 1 {name=p11 sig_type=std_logic lab=Vout}
C {lab_pin.sym} 490 180 2 0 {name=p12 sig_type=std_logic lab=Vdd}
C {gnd.sym} 490 220 0 0 {name=l7 lab=GND}
C {/foss/designs/real/real_inv.sym} 340 200 0 0 {name=x3}
C {lab_pin.sym} 190 90 0 0 {name=p13 sig_type=std_logic lab=Vin}
C {/foss/designs/real/real_switch.sym} 340 100 2 0 {name=x4}
C {lab_pin.sym} 490 110 2 0 {name=p14 sig_type=std_logic lab=phi1}
C {capa.sym} 100 190 0 0 {name=C1
m=1
value=1p
footprint=1206
device="ceramic capacitor"}
C {gnd.sym} 100 220 0 0 {name=l9 lab=GND}
C {lab_pin.sym} 490 20 2 0 {name=p8 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} 190 -20 0 0 {name=p1 sig_type=std_logic lab=Vin}
