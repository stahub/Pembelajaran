window.alert("Welcome to my site!")

function gotosite(){
var konfirm = confirm("Sure?")
if(konfirm) {
    window.location.assign("https://smktelkom-jkt.sch.id/");
} else {
    document.write(`<p style="width: 100vw;
    height: 100vh;
    font-size: 10em;
    font-weight: bold;
    padding: 50px;">Thanks To Staying</p>`)
}}
function identy(){
 var name = prompt("Name:")
 document.write("Hi "+name+"!")}
