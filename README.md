# ParentScheme
This is the values in a map of the Parent's numerical scheme of the linearized odometric model.


SETUP :

I have taken the Ubuntu 20.04.3 LTS distribution with the USB key after getting the Windows 10 by ASUS on a G6400 processor's chip from the Intel compagny.

This is the S300MA-0G6400002T - Intel Pentium G6400 - RAM 8 Go - Stockage SSD 512 Go - Windows 10 with the keyboard and the mouse to compute and simulate with Scilab.

I have tested the Parent's scheme on the Ubuntu distribution with the ollivier-HP-Pavilion-Desktop-590-a0xxx.

To compile do gcc -o test2 test2.c -lm with glibc,

> ./glibc/configure
> 

To plot do gnuplot> plot "text.txt"

> gnuplot
> 


CITING :

C. Zhang, D. Chu, S. Liu, Z. Deng, C. Wu and X. Su, "Trajectory Planning and Tracking for Autonomous Vehicle Based on State Lattice and Model Predictive Control," in IEEE Intelligent Transportation Systems Magazine, vol. 11, no. 2, pp. 29-40, Summer 2019, doi: 10.1109/MITS.2019.2903536.
Abstract: Trajectory planning and tracking control are two keys of collision avoidance for autonomous vehicles in critical traffic scenarios. It requires not only the system functionality, but also strong real-time. In this paper, we integrated trajectory planner and tracking controller for autonomous vehicle to implement trace planning and tracking for obstacle avoidance. The trajectory planner is based on the state lattice approach and the tracking controller is designed based on the model predictive control using the vehicle kinematics model. The simulation shows that the planner can generate smooth trajectories which could be selected as references for the controller. The maximum tracking error is less than 0.2 m when the vehicle speed is below 50 km/h. Additionally, the on field test shows that the test vehicle with this method is capable of following the reference path accurately, even at sharp corners.
URL: https://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=8668708&isnumber=8694967
