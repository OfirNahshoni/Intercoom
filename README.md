# Intercoom

## Overview
Intercoom system with video & audio capabilities. A system in which the user can 
communicate by video &amp; audio with the person within the house. <br />
This system includes 2 main components:
1. External Device (Server): can be Raspberry PI/Arduino with camera, 
   microphone, 
   bell-button, speaker.
2. Internal Device (Client): this used as the server, which essentially some 
   device 
- can be also Raspberry PI. it includes display-monitor, buttons grid 
  (answer/open connection, decline), speaker.

## Diagrams

### Hardware Diagram
![Hardware Diagram](assets/hardware-diagram.png)

| **Button** | **Description**                                      |
|------------|------------------------------------------------------|
| **Red**    | Block. lock and disable any communication.           |
| **Blue**   | transmit audio from server to client.                |
| **Green**  | open lock machanism.                                 |
| **Yellow** | Client's request - waiting for response from server. |


### Class Diagram
![Class Diagram](assets/class-diagram.png)
