let boxes=document.querySelectorAll(".box");
let reset=document.querySelector("#reset");
// let newgame=document.querySelector("#new-btn");
let msgContainer=document.querySelectorAll(".msg-container");
let msg=document.querySelector("#msg");

let turn0=true; //playerX , player0;

const winpattern = [
    [0,1,2],
    [0,3,6],
    [0,4,8],
    [1,4,7],
    [2,5,8],
    [2,4,6],
    [3,4,5],
    [6,7,8],
];


boxes.forEach((box) => {
     box.addEventListener("click",() => {
          if(turn0)
            {
                box.innerText="0";
                turn0=false;
            }
            else{
                box.innerText="X";
                turn0=true;
            }
          box.disabled=true;
          checkWinner();  
     });
});

let set=document.querySelectorAll("#set");

//for reset
const inablbox=()=>{
    for(let box of boxes)
        {
            box.disabled=false;
            box.innerText="";
            
        }
        msg.innerText="winner";
        document.getElementById("msg").style.color="yellowgreen";
}

//after end
const disablbox=()=>{
    for(let box of boxes)
        {
            box.disabled=true;
        }
}
const Nowinner=()=>{
    document.getElementById("msg").style.color="red";
    msg.innerText="oops game over no one win game";
}

const Showinner = (winner) => {
    msg.innerText=`Congratulations ,winner is ${winner}`;
      document.getElementById("msg").style.color="yellow";
      disablbox();
    
}

const checkWinner=() =>
{
   for(let pattern of  winpattern )
    {
        // console.log(pattern[0],pattern[1],pattern[2]);
        let posval1 = boxes[pattern[0]].innerText;
        let posval2 = boxes[pattern[1]].innerText;
        let posval3 = boxes[pattern[2]].innerText;
        if(posval1!="" && posval2!="" && posval3!="")
            {
                if(posval1===posval2 && posval2===posval3)
                    {
                        Showinner(posval1);
                    }
            }

         
    }
// Nowinner();
}
const resetbtn=()=>{
    turn0=true;
    inablbox(); 
 };
reset.addEventListener("click",resetbtn);
