if (msg.payload == 1){

    if(global.payload == 1){

        msg.payload = 0
  
    } else {
        global.payload = 1

        msg.payload = 1
    
    }

} else {

    global.payload = 0

}

return msg;