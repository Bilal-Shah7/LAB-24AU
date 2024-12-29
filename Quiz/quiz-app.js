// JavaScript file for the interactive quiz application

// DOM elements
const startBtn = document.getElementById("start-btn");
const questionContainer = document.getElementById("question-container");
const questionElement = document.getElementById("question");
const optionsContainer = document.getElementById("options");
const submitBtn = document.getElementById("submit-btn");
const timerElement = document.getElementById("timer");
const feedbackElement = document.getElementById("feedback");
const finalScoreElement = document.getElementById("final-score");
const restartBtn = document.getElementById("restart-btn");

// Quiz variables
let currentQuestionIndex = 0;
let score = 0;
let timer;
const timeLimit = 30;

// Questions array
const questions = [
  {
    question: "What is the capital of France?",
    options: ["Berlin", "Madrid", "Paris", "Rome"],
    answer: 2,
  },
  {
    question: "Which programming language is used for web development?",
    options: ["Python", "JavaScript", "C++", "Java"],
    answer: 1,
  },
  {
    question: "What is 2 + 2?",
    options: ["3", "4", "5", "6"],
    answer: 1,
  },
];

// Start quiz
startBtn.addEventListener("click", () => {
  startBtn.classList.add("hidden");
  questionContainer.classList.remove("hidden");
  startTimer(timeLimit);
  loadQuestion();
});

// Load question
function loadQuestion() {
  const currentQuestion = questions[currentQuestionIndex];
  questionElement.textContent = currentQuestion.question;
  optionsContainer.innerHTML = "";
  currentQuestion.options.forEach((option, index) => {
    const optionBtn = document.createElement("button");
    optionBtn.textContent = option;
    optionBtn.className = "option-btn";
    optionBtn.setAttribute("data-index", index);
    optionBtn.addEventListener("click", () => selectAnswer(index));
    optionsContainer.appendChild(optionBtn);
  });
  submitBtn.classList.remove("hidden");
  feedbackElement.textContent = "";
}

// Select answer
let selectedAnswer = null;
function selectAnswer(index) {
  selectedAnswer = index;
  const optionButtons = document.querySelectorAll(".option-btn");
  optionButtons.forEach((btn) => btn.classList.remove("selected"));
  optionButtons[index].classList.add("selected");
}

// Submit answer
submitBtn.addEventListener("click", () => {
  if (selectedAnswer === null) {
    feedbackElement.textContent = "Please select an answer!";
    return;
  }

  const currentQuestion = questions[currentQuestionIndex];
  if (selectedAnswer === currentQuestion.answer) {
    score++;
    feedbackElement.textContent = "Correct!";
  } else {
    feedbackElement.textContent = "Wrong!";
  }

  selectedAnswer = null;
  currentQuestionIndex++;
  if (currentQuestionIndex < questions.length) {
    setTimeout(loadQuestion, 1000);
  } else {
    endQuiz();
  }
});

// Timer
function startTimer(seconds) {
  let timeRemaining = seconds;
  timerElement.textContent = `Time left: ${timeRemaining} seconds`;
  timer = setInterval(() => {
    timeRemaining--;
    timerElement.textContent = `Time left: ${timeRemaining} seconds`;
    if (timeRemaining <= 0) {
      clearInterval(timer);
      endQuiz();
    }
  }, 1000);
}

// End quiz
function endQuiz() {
  clearInterval(timer);
  questionContainer.classList.add("hidden");
  finalScoreElement.textContent = `Your final score is ${score} out of ${questions.length}`;
  restartBtn.classList.remove("hidden");
  feedbackElement.textContent = "Quiz Over!";
}

// Restart quiz
restartBtn.addEventListener("click", () => {
  score = 0;
  currentQuestionIndex = 0;
  restartBtn.classList.add("hidden");
  finalScoreElement.textContent = "";
  startBtn.classList.remove("hidden");
});