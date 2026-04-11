{.passL: "-lc".}
proc setbuf*(stream: File, buf: cstring) {.importc: "setbuf",  header: "<stdio.h>".}
proc printf*(format: cstring): cint {.varargs, importc: "printf",  header: "<stdio.h>".}
proc dprintf*(fd: cint; fmt: cstring): cint {.varargs, importc: "dprintf",  header: "<stdio.h>".}
