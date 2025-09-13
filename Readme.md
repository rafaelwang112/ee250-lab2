# Lab 2

## Team Members
- Rafael Wang
- Robert Fan

## Lab Question Answers

Answer for  QA.1: Because of the 50% loss, the reliability of the UDP decreases as some numbers do not arrive at all. This is because UDP has unreliable delivery because it lacks any way of acknowledging successful data transfer. Thus, if there is packet loss, the receiver never knows that the packet was sent in the first place and it will be lost. 

Answer for QA.2: Despite the 50% loss, the reliability of TCP doesn't change and remains stable because if the receiver doesn't receive a packet, it will send a signal to the sender that it didn't receive it and will wait until it is received before moving on to the next packet.

Answer for QA.3: The speed of the TCP response became slower because TCP acknowledges the transfer of data, and thus if the receiver doesn't receive a packet, it will wait until the packet is successfully resent to the receiver. This maintains TCP's sequential transfer of data, but may cause the response to becomes slower because of having to wait until the current packet is received.

Answer for QC.1: 

Answer for QC.2: 

Answer for QC.3: 

Answer for QC.4: 

Answer for QC.5: 

Answer for QC.6: 

Answer for QC.7: 

Answer for QA.4: We did not use LLMs for this lab.
