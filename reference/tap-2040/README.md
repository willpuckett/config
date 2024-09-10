# Piezo Gather

<<<<<<< HEAD
This piezo sensor is based on the TAP-XXX. It uses the idea of a mass-loaded piezo to sense not jerk. In theory.


=======
This piezo sensor is based on the [TAP-XXX/TAP-100](https://www.thingiverse.com/groups/anycubic-predator/forums/general/topic:52143#comment-5364482) [[word document](https://cdn.thingiverse.com/assets/2d/9e/af/be/b5/TAP-100.docx)] [[mount](https://cdn.thingiverse.com/assets/a6/f7/3a/f5/64/35mm_Nema17_Inserts.stl)]. It uses the idea of a mass-loaded piezo to sense jerk not acceleration. In theory.
>>>>>>> d5aeb7627819f8a478c22e859906372a6ebcac24

## Influences

The following references were influential: 
[RepRap Forum Post](https://reprap.org/forum/read.php?424,885697,888855)
[Tap-XXX Video](https://www.youtube.com/watch?v=UJbq8bXZKmc)

I also looked at the [tap-attiny](https://github.com/ripinteer/tap-attiny) while working on this.

<<<<<<< HEAD
=======
I later found some [mass dampened piezos](https://www.sparkfun.com/products/9198) on Sparkfun that were small enough to put on the effector.

>>>>>>> d5aeb7627819f8a478c22e859906372a6ebcac24
## Working Concepts

The Sensor relies on clipping diodes in conjunction with a low pass filter (both implemented in hardware). 

The data is then gathered by an ADC on a small mcu.

I was unable to source either of the mcus in the original two projects, so I rewrote the project for RP2040 since I had several spare Xiaos lying around. 

I was led somewhat astray by the tap-attiny code. It does some serial logging, which I duplicated. It wasn't till about a week in to working with (failing miserably) the code that I discovered that eliminating the logging dramatically increases the sensitivity. 

It is my suspicion that the pulses are so brief that the measurements are damaged even by an additional insturction or two. It make sense that the original TAP-XXX uses assembly language to implement the sensor. It needs to run VERY cleanly to be useful (aka not driving the head into the bed).

<<<<<<< HEAD
=======
I later found that for effector mounted piezos, I needed to still the heaters before making a measurement, as documented in the phi and tau branches of this repo.

>>>>>>> d5aeb7627819f8a478c22e859906372a6ebcac24
## Usage

1. Run `PRE_PROBE` macro. It will heat things, still the fan (probably not actually necessary, but hey!), and bring the steppers into a lower power and quiet state.
2. Run `PROBE_CALIBRATE`.
3. Run `DELTA_CALIBRATE`.
4. DELTA_CALIBRATE will invalidate the probe offset, so run `PROBE_CALIBRATE` again.
5. Run a bed mesh level, either in the UI, or via `G29`.