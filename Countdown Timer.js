<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>Countdown Timer</title>
  <link href='https://fonts.googleapis.com/css?family=Inconsolata' rel='stylesheet' type='text/css'>
  <link rel="stylesheet" href="style.css">
  <style>
      html {
  box-sizing: border-box;
  font-size: 10px;
  background: #8E24AA;
  background: linear-gradient(45deg,  #42a5f5 0%,#478ed1 50%,#0d47a1 100%);
}

*, *:before, *:after {
  box-sizing: inherit;
}

body {
  margin: 0;
  text-align: center;
  font-family: 'Inconsolata', monospace;
}

.display__time-left {
  font-weight: 100;
  font-size: 20rem;
  margin: 0;
  color: white;
  text-shadow: 4px 4px 0 rgba(0,0,0,0.05);
}

.timer {
  display: flex;
  min-height: 100vh;
  flex-direction: column;
}

.timer__controls {
  display: flex;
}

.timer__controls > * {
  flex: 1;
}

.timer__controls form {
  flex: 1;
  display: flex;
}

.timer__controls input {
  flex: 1;
  border: 0;
  padding: 2rem;
}

.timer__button {
  background: none;
  border: 0;
  cursor: pointer;
  color: white;
  font-size: 2rem;
  text-transform: uppercase;
  background: rgba(0,0,0,0.1);
  border-bottom: 3px solid rgba(0,0,0,0.2);
  border-right: 1px solid rgba(0,0,0,0.2);
  padding: 1rem;
  font-family: 'Inconsolata', monospace;
}

.timer__button:hover,
.timer__button:focus {
  background: rgba(0,0,0,0.2);
  outline: 0;
}

.display {
  flex: 1;
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;
}

.display__end-time {
  font-size: 4rem;
  color: white;
}
  </style>
</head>
<body>
  <div class="timer">
    <div class="timer__controls">
      <button data-time="20" class="timer__button">20 Secs</button>
      <button data-time="300" class="timer__button">Work 5</button>
      <button data-time="900" class="timer__button">Quick 15</button>
      <button data-time="1200" class="timer__button">Snack 20</button>
      <button data-time="3600" class="timer__button">Lunch Break</button>
      <form name="customForm" id="custom">
        <input type="text" name="minutes" placeholder="Enter Minutes">
      </form>
    </div>
    <div class="display">
      <h1 class="display__time-left"></h1>
      <p class="display__end-time"></p>
    </div>
  </div>

  <script>
      let countdown;
const timerDisplay = document.querySelector('.display__time-left');
const endTime = document.querySelector('.display__end-time');
const buttons = document.querySelectorAll('[data-time]');

function timer(seconds) {
  // clear any existing timers
  clearInterval(countdown);

  const now = Date.now();
  const then = now + seconds * 1000;
  displayTimeLeft(seconds);
  displayEndTime(then);

  countdown = setInterval(() => {
    const secondsLeft = Math.round((then - Date.now()) / 1000);
    // check if we should stop it!
    if(secondsLeft < 0) {
      clearInterval(countdown);
      return;
    }
    // display it
    displayTimeLeft(secondsLeft);
  }, 1000);
}

function displayTimeLeft(seconds) {
  const minutes = Math.floor(seconds / 60);
  const remainderSeconds = seconds % 60;
  const display = `${minutes}:${remainderSeconds < 10 ? '0' : '' }${remainderSeconds}`;
  document.title = display;
  timerDisplay.textContent = display;
}

function displayEndTime(timestamp) {
  const end = new Date(timestamp);
  const hour = end.getHours();
  const adjustedHour = hour > 12 ? hour - 12 : hour;
  const minutes = end.getMinutes();
  endTime.textContent = `Be Back At ${adjustedHour}:${minutes < 10 ? '0' : ''}${minutes}`;
}

function startTimer() {
  const seconds = parseInt(this.dataset.time);
  timer(seconds);
}

buttons.forEach(button => button.addEventListener('click', startTimer));
document.customForm.addEventListener('submit', function(e) {
  e.preventDefault();
  const mins = this.minutes.value;
  console.log(mins);
  timer(mins * 60);
  this.reset();
});

  </script>
</body>
</html>
