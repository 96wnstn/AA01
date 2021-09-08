// tcp client
var net = require('net');
var port = 3000;
var client = new net.Socket() ;

// Connection using socket
client.connect(port, "127.0.0.1");
client.on('data', function (data) {
    console.log('Data: ' +data);
    client .destroy
});
// Receive data from socket


// Add a 'close' event handler for the client socket
client.on('close', function () {
    console.log('Connection closed');
});

