#source: start.s
#readelf: -d -W
#ld: -shared -z now --disable-new-dtags
#target: *-*-linux* *-*-gnu* arm*-*-uclinuxfdpiceabi
#xfail: h8300-*-*

#failif
#...
 0x[0-9a-f]+ +\(FLAGS\) +BIND_NOW
#pass
