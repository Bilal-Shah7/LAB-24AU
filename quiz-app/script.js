const questions = [
    {
        question: "Which animal is known as the king of the Jungle?",
        answers: [
            {Text: "Lion", correct: true},
            {Text: "Eagle", correct : false},
            {Text: "Tiger", correct : false},
            {Text: "Elephant", correct : false},
        ]
    },
    {
        question: "Which one is the coldest continent?",
        answers: [
            {Text: "Africa", correct: false},
            {Text: "Australia", correct : false},
            {Text: "Antartica", correct : true},
            {Text: "Asia", correct : false},
        ]
    },
    {
        question: "Which bird was used for communication purposes?",
        answers: [
            {Text: "Pigeon", correct: true},
            {Text: "Eagle", correct : false},
            {Text: "Sparrow", correct : false},
            {Text: "Crow", correct : false},
        ]
    },
    {
        question: "Which animal is known as the king of the Jungle?",
        answers: [
            {Text: "Lion", correct: true},
            {Text: "Eagle", correct : false},
            {Text: "Tiger", correct : false},
            {Text: "Elephant", correct : false},
        ]
    },
];
const questionElement = document.getElementById("question"); 
const answerbuttons = document.getElementById("question-buttons"); 
const nextbtn = document.getElementById("next-button"); 

let questionindex = 0;
let score = 0;

function startquiz(){
    questionindex= 0;
    score = 0;
    nextbtn.innerHTML= "Next";
    showquestion();
};

function showquestion(){
    resetState();
    let currentquestion = questions[questionindex];
    let questionNo = questionindex + 1;
    questionElement.innerHTML = questionNo + ". " + currentquestion.question;

    currentquestion.answers.forEach(answer=> {
        const button = document.createElement("button");
        button.innerHTML = answer.Text;
        button.classList.add("btn");
        answerbuttons.appendChild(button); 
        if (answer.correct){
            button.dataset.correct = answer.correct;
        }
        button.addEventListener("click", selectAnswer)
    })
}

function resetState(){
nextbtn.style.display = "none";
while(answerbuttons.firstChild){
    answerbuttons.removeChild(answerbuttons.firstChild);
}

}

function selectAnswer(e){

const selectedBtn = e.target;
const isCorrect = selectedBtn.dataset.correct==="true";
if (isCorrect){
    selectedBtn.classList.add("correct");
    score+=25;
}
else {
    selectedBtn.classList.add("incorrect");
    
}

Array.from(answerbuttons.children).forEach(button=>{
    if (button.dataset.correct ==="true"){
button.classList.add("correct");
    }
    button.disabled= true;
})
nextbtn.style.display="block"; 
}

function showscore(){
resetState();
questionElement.innerHTML = `You scored ${score} out of 100!`;
nextbtn.innerHTML="Play Again";
nextbtn.style.display = "block"; 
}
function handlenextbtn(){
    questionindex++;
    if(questionindex<questions.length){
        showquestion();
    }
else{
    showscore();
}
}


nextbtn.addEventListener("click",()=>{
    if(questionindex<questions.length){
        handlenextbtn();
    }
    else {
        startquiz();
    }
})
startquiz();
