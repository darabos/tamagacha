A character evolution game for the M5 Stick S3.

At first, the selected character is `base`. Display `assets/base/0.jpg`, and then switch to a new picture every 1 second. If hunger is low, switch to one of 0.jpg, 1.jpg, 2.jpg, or 3.jpg at random. (It's okay to "switch" to the current picture.) If hunger is high, increase the probability of switching to 4.jpg — this is the hungry state.

If the user presses button 1, set hunger to zero and switch to one of 5.jpg or 6.jpg.

Button 2 is used for evolving. When button 2 is pressed enter evolution mode until button 2 is released. Display 7.jpg in evolution mode. Review https://docs.m5stack.com/en/arduino/m5sticks3/imu to understand how to access the IMU. Track ImuData.gyro.x. If the current character has N possible evolutions, divide the 360 degrees into (N+1) equal segments. The segment centered around the starting orientation belongs to the current character. The other N segments belong to the possible evolutions. If we detect a turn into another segment, show 7.jpg belonging to that character. (E.g. `assets/cat1/7.jpg`)

The possible evolutions for each character will be specified later. For now start with a simple subset of evolutions: base -> [cat1, diver1], cat1 -> [cat2, base], cat2 -> [cat1], diver1 -> [diver2, base], diver2 -> [diver1].
