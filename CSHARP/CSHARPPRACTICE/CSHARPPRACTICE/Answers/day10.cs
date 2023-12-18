
namespace CSHARPPRACTICE.Answers
{
    internal class Area
    {
        private double length;
        private double width;
        private double radius;

        public Area() {
            Console.WriteLine("Day 10 : Question 1");
        }
        public Area(double length,double width) {
            Console.WriteLine("Day 10 : Question 1");
            this.length = length;
            this.width = width;
        }
        public Area(double radius) {
            Console.WriteLine("Day 10 : Question 1");
            this.radius = radius;
        }

        public double AreaOfRectangle() { return this.length*this.width; }

        public double AreaOfCircle() { return 3.14*this.radius*this.radius;}
    }

    internal class Car
    {
        public string CarModel;
        public string Color;
        public int CarNumber;
        public int Modelyear;

        public Car() {
            this.CarModel = "RX100";
            this.Color = "Silver";
            this.CarNumber = 1111;
            this.Modelyear = 2020;
        }



    }
    internal class day10
    {
    }
}
