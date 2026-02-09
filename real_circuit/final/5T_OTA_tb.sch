v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
B 2 685 -880 1485 -480 {flags=graph


ypos1=0
ypos2=2
divy=5
subdivy=4
unity=1
x1=0

divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0


dataset=-1
unitx=1
logx=1
logy=0
autoload=0







sim_type=ac

y2=0.029
y1=-160
color=4
node=ph(vout)
x2=7}
B 2 680 -1295 1480 -895 {flags=graph
ypos1=0
ypos2=2
divy=5
subdivy=1
unity=1
x1=0.55499383

divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0
dataset=-1
unitx=1
logx=1
logy=0
color=4
node="vout / db20()"
y2=50
y1=0
x2=7.3392107}
N 280 -830 280 -760 {lab=vm}
N 480 -850 480 -760 {lab=vout}
N 380 -850 480 -850 {lab=vout}
N 340 -760 480 -760 {lab=vout}
C {vsource.sym} 480 -620 0 0 {name=V1 value="DC 1 AC 1 0"
}
C {vsource.sym} 400 -620 0 0 {name=VDD value="DC 3"}
C {gnd.sym} 400 -590 0 0 {name=l1 lab=GND}
C {lab_pin.sym} 400 -650 1 0 {name=p2 sig_type=std_logic lab=vdd}
C {lab_pin.sym} 480 -650 1 0 {name=p3 sig_type=std_logic lab=vp}
C {lab_pin.sym} 280 -870 0 0 {name=p5 sig_type=std_logic lab=vp}
C {lab_pin.sym} 280 -830 0 0 {name=p6 sig_type=std_logic lab=vm}
C {capa.sym} 420 -820 0 0 {name=Cload
m=1
value=0.1p
footprint=1206
device="ceramic capacitor"}
C {gnd.sym} 420 -790 0 0 {name=l5 lab=GND}
C {iopin.sym} 480 -850 0 0 {name=p7 lab=vout}
C {devices/code_shown.sym} 235 -1280 0 0 {name=NGSPICE only_toplevel=false 
value="
.control
op
save all
write tb_OTA_op.raw
.endc

.control
op
ac dec 100 1 10e6 
save all
let Av = db(v(vout))
write output_file.raw 
.endc
"}
C {ind.sym} 310 -760 1 0 {name=L6
m=1
value=4G
footprint=1206
device=inductor}
C {capa.sym} 280 -730 0 0 {name=C1
m=1
value=4G
footprint=1206
device="ceramic capacitor"}
C {gnd.sym} 280 -700 0 0 {name=l7 lab=GND}
C {launcher.sym} 540 -1285 0 0 {name=h5
descr="load waves" 
tclcommand="xschem raw_read $netlist_dir/output_file.raw ac"
}
C {lab_pin.sym} 330 -890 1 0 {name=p1 sig_type=std_logic lab=vdd}
C {gnd.sym} 330 -810 0 0 {name=l2 lab=GND}
C {devices/code_shown.sym} 240 -990 0 0 {name=MODEL1 only_toplevel=true
format="tcleval( @value )"
value="
.lib cornerMOShv.lib mos_tt
"}
C {/foss/designs/final/5T_OTA.sym} 330 -850 0 0 {name=x1}
C {gnd.sym} 480 -590 0 0 {name=l3 lab=GND}
