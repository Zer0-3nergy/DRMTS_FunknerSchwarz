v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N 320 -30 340 -30 {lab=Vdd}
N -10 -30 20 -30 {lab=Vin}
N 320 10 340 10 {lab=GND}
N 320 -10 340 -10 {lab=Vout}
C {gnd.sym} -100 50 0 0 {name=l1 lab=GND}
C {lab_pin.sym} -100 -10 1 0 {name=p3 sig_type=std_logic lab=Vin}
C {vsource.sym} -170 20 0 0 {name=VDD value=3 savecurrent=false}
C {gnd.sym} -170 50 0 0 {name=l4 lab=GND}
C {lab_pin.sym} -170 -10 1 0 {name=p4 sig_type=std_logic lab=Vdd}
C {/foss/designs/delta_sigma/real/real_inv.sym} 170 -10 0 0 {name=x1}
C {lab_pin.sym} 340 -30 0 1 {name=p1 sig_type=std_logic lab=Vdd}
C {lab_pin.sym} -10 -30 2 1 {name=p2 sig_type=std_logic lab=Vin}
C {gnd.sym} 340 10 0 0 {name=l2 lab=GND}
C {lab_pin.sym} 340 -10 0 1 {name=p5 sig_type=std_logic lab=Vout}
C {code_shown.sym} -200 -220 0 0 {name=NGSPICE
only_toplevel=true
value="
.control
save all
tran 0.4u 4u
.endc
" }
C {devices/code_shown.sym} 20 -220 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.lib cornerMOShv.lib mos_tt
"}
C {vsource.sym} -100 20 0 0 {name=V1 value="PULSE(0 3 0ns 0.1ns 0.1ns 4ns 10ns)" savecurrent=false}
