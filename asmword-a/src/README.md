# Assembler in arduino-pico philhower platformio
## Wed  5 Apr 16:49:55 UTC 2023

###For platformio philhower core

  unrelated link, probably:

    https://wokwi.com/projects/360654241673775105

  asmword   - blinks n times

  WORKING PROGRAM  Wed  5 Apr 16:49:55 UTC 2023

  If this becomes portable to wokwi it'll be updated here (in the
  above link) - that's the status for 5 April 2023 16:55 UTC.

  last known working version (but different environment):

    https://wokwi.com/projects/361121585740433409

```
; usual platformio.ini configure for number of blinks:
[env]
build_flags =
  '-DBLINKS_PARAM=3'
  -Wall
  -v
; -v
```

`make install`  is the recommended method for firmware upload
to the target, on 5 April 2023 16:58 UTC.

`./c ; make install`  is full boat (do it all and be thorough).

It also makes a build log and is very fast to do the entire
iteration. ;) go go go

```
void loop() {
    delay(5000);
    reflash();
    while(-1);
}
```

That's why it tries to mount for a .UF2 upload every single time.
Just suppress reflash() if that's unwanted.

#### End.
