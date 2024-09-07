class Person {
    constructor(name, age){
        this.name = name;
        this.age = age
    }
    sleep(){
        return `Person ${this.name} is sleeping at ${this.age}`;
    }
    getName(){
        return this.name;
    }
    setName(){
        this.name = name;
    }
}


class Students extends Person{
    
    constructor(name, age, grade){
        super(name, age);
        this.grade = grade;
    }
    getGrade() {
        return `Person ${this.name} of age ${this.age} scored ${this.grade}`;
    }
    
}
    function main(){
        const person = new Person("Basil", 35);
        console.log(person.sleep());

        const student = new Students("Griffin", 20, "B+");
        console.log(student.getGrade());
    }
    main();

   

