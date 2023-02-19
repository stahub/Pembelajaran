$(window).scroll(function(){
    var wScroll = $(this).scrollTop();

    
    $('.belakangparallax').css ({
        'transform' : 'translate(0px, '+ wScroll/10 +'%)'
    })

    $('.logoparallax').css ({
        'transform' : 'translate(0px, '+ wScroll/12 +'%)'
    })
    $('.depanparallax').css ({
        'transform' : 'translate(0px, -'+ wScroll/25 +'%)'
    })
})