class timer {

    constructor () {
        this._locale = "pt-BR"
        this._timeEl = document.querySelector("#timer-area")
        this._currentTime
        this.__displayTime
        this.inicial()
    }

    inicial() {
        console.log('teste')
        this.setDisplayTime()
    }

    setDisplayTime() {
        this.displayTime = this.currentDate.toLocaleTimeString(this._locale)

        setInterval(()=>{

            this.setDisplayTime();

        }, 1000);

        return this.displayTime
    }



    get currentDate () {
        return new Date()
    }

    set currentDate(value){

        this._currentDate = value;

    }



    get displayTime(){

        return this._timeEl.innerHTML;

    }

    set displayTime(value) {

        this._timeEl.innerHTML = value
    }
    
}


let mytimer1 = new timer