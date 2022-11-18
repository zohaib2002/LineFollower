# LineFollower
Line Following robot using Arduino and infrared sensors

#L>S>R>B Algorithm
This LSRB algorithm can be simplified into these simple conditions:
1-If you can turn left then go ahead and turn left,
2-else if you can continue driving straight then drive straight,
3-else if you can turn right then turn right.
4-If you are at a dead end then turn around.

The expunction of LSRB is shown below:
L- Left
R- Right
S- Straight
B- Turning around (Back).
