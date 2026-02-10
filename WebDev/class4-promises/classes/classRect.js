class Rectangle{
    //'constructor' method is called when you create an instance (an object) of the class
    //It’s used to initialize the properties of the object.
    constructor(width, height,color){
        this.width = width;
        this.height = height;
        this.color = color;
    }
    //non-static method
    area(){
        const area = this.width * this.height;
        return area;
    }
    //static function 
    static whoami(){
        return "I am rectangle...";
    }
    paint(){
        console.log(`Painting with color ${this.color}`);
    }
}
//When you create an object using new, this points to that object.
const rect = new Rectangle(2,4,'blue');
const area = rect.area();
//onsole.log(rect.whoami());
console.log(Rectangle.whoami());

console.log(area);