v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N 0 180 0 220 {
lab=-ctrl}
N 0 -220 0 -180 {
lab=+ctrl}
N 30 -140 40 -140 {
lab=Y}
N 40 -140 40 -80 {
lab=Y}
N -40 -140 -30 -140 {
lab=A}
N -40 -140 -40 -80 {
lab=A}
N -160 -80 -40 -80 {
lab=A}
N -40 140 -30 140 {
lab=A}
N -40 80 -40 140 {
lab=A}
N -160 80 -40 80 {
lab=A}
N 40 80 40 140 {
lab=Y}
N 30 140 40 140 {
lab=Y}
N 0 -140 0 -40 {
lab=VDD}
N 0 -40 140 -40 {
lab=VDD}
N 0 40 0 140 {
lab=VSS}
N 140 40 140 220 {
lab=VSS}
N 0 40 140 40 {
lab=VSS}
N -160 0 -160 80 {
lab=A}
N -200 0 -160 0 {
lab=A}
N -160 -80 -160 0 {
lab=A}
N 260 0 260 80 {
lab=Y}
N 260 0 300 0 {
lab=Y}
N 260 -80 260 0 {
lab=Y}
N 140 -220 140 -40 {lab=VDD}
N 40 80 260 80 {
lab=Y}
N 40 -80 260 -80 {
lab=Y}
C {devices/iopin.sym} -200 0 0 1 {name=p5 lab=A}
C {devices/iopin.sym} 300 0 0 0 {name=p6 lab=B}
C {devices/iopin.sym} 140 -220 3 0 {name=p7 lab=VDD}
C {devices/iopin.sym} 140 220 1 0 {name=p8 lab=VSS}
C {devices/ipin.sym} 0 -220 1 0 {name=p9 lab=+ctrl}
C {devices/ipin.sym} 0 220 3 0 {name=p10 lab=-ctrl}
C {sg13g2_pr/sg13_hv_nmos.sym} 0 160 1 1 {name=M1
l=0.6u
w=1u
ng=1
m=1
model=sg13_hv_nmos
spiceprefix=X
}
C {sg13g2_pr/sg13_hv_pmos.sym} 0 -160 3 1 {name=M2
l=0.6u
w=2.5u
ng=1
m=1
model=sg13_hv_pmos
spiceprefix=X
}
