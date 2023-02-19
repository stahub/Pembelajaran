$(window).scroll(function(){
    var wScroll = $(this).scrollTop();

    
    $('.parallax-bg1').css ({
        'transform' : 'translate(0px, '+ wScroll / 1 +'%)'
    })
    $('.parallax-bg2').css ({
        'transform' : 'translate(0px, '+ wScroll / 2 +'%)'
    })
    $('.parallax-bg3').css ({
        'transform' : 'translate(0px, '+ wScroll / 3 +'%)'
    })
    $('.parallax-bg4').css ({
        'transform' : 'translate(0px, '+ wScroll / 4 +'%)'
    })
    $('.parallax-bg5').css ({
        'transform' : 'translate(0px, '+ wScroll / 5 +'%)'
    })
    $('.parallax-bg6').css ({
        'transform' : 'translate(0px, '+ wScroll / 6 +'%)'
    })
    $('.parallax-bg7').css ({
        'transform' : 'translate(0px, '+ wScroll / 7 +'%)'
    })
    $('.parallax-bg8').css ({
        'transform' : 'translate(0px, '+ wScroll / 9 +'%)'
    })
    $('.parallax-bg9').css ({
        'transform' : 'translate(0px, '+ wScroll / 10 +'%)'
    })


})