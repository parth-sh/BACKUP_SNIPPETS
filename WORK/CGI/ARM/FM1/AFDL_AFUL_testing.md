Debugging of client and debugging of mss

There are 2 testers, 
AFDL Tester.java for incoming messages, AFUL Tester.java for testing outgoing messages

# 1. Debug Configuration
Arguments: CREW_ID Device_ID

# Tesing Incoming message
Either copy failling message from the logs

Or copy the message from 
SELECT * FROM ms_uploaded_message_arch;
 
SELECT * FROM ms_downloaded_message_arch;
 
SELECT * FROM ms_downloaded_message_err_arch;

Put the xml message at location: server\mss\mss\msg