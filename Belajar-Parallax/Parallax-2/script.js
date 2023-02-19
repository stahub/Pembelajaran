$(window).scroll(function(){
    var wScroll = $(this).scrollTop();

    
    $('.belakangparallax').css ({
        'transform' : 'translate(0px, '+ wScroll/3.95 +'%)'
    })

    $('.logoparallax').css ({
        'transform' : 'translate(0px, '+ wScroll/2 +'%)'
    })
    $('.depanparallax').css ({
        'transform' : 'translate(0px, -'+ wScroll/22 +'%)'
    })
    if(wScroll > $('.clothes').offset().top - ($(window).height() / 1.2)) {


        $('.clothes figure').each(function(i){

            setTimeout(function(){

            $('.clothes figure').eq(i).addClass('is-showing')
            
            }, 150 * (i+1));
        });

    }
})