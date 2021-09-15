//app.js
var express = require('express');
var app = express();
var port = 3000;

app.get('/', function(req, res){
    res.send('<a href="/aa01">Hello Page</a>');
});

app.get('/aa01', function(req, res){
    res.send('Hello aa01,comsi! My first express server!!!');
});

app.get('/comsi', function(req, res){
    res.send('Hello comsi!');
});

var server = app.listen(port, function(){
console.log('Listening on port %d', server.address().port);
});