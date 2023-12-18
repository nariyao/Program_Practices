using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace CSHARPPRACTICE.Answers
{
    public class Product
    {
        string? _Name;
        double _Price;
        int _StockQuantity;

        public string? Name
        {
            get { return _Name; }
            set { _Name = value; }
        }
        public double Price
        {
            get { return _Price; }
            set { _Price = value; }
        }
        public int StockQuantity
        {
            get { return _StockQuantity; }
            set { _StockQuantity = value; }
        }
        public Product(string? name, double price, int stockquantity)
        {
            Name = name; Price = price; StockQuantity = stockquantity;
        }
        public virtual void DisplayInfo()
        {
            Console.WriteLine("Product Name: "+ Name);
            Console.WriteLine("Price: " + Price);
            Console.WriteLine("StockQuantity: " + StockQuantity);
        }
    }

    internal class Electronic:Product
    {
        string? _Brand, _Model;
        
        public string? Brand
        {
            get { return _Brand; }
            set { _Brand = value; }
        }
        public string? Model
        {
            get { return _Model; }
            set { _Model = value; }
        }


        public Electronic(string? name,double Price,int StockQuantity,string? Brand, string? Model) : base(name, Price, StockQuantity)
        {
            this.Brand = Brand;
            this.Model = Model;
        }

        public override void DisplayInfo()
        {
            base.DisplayInfo();
            Console.WriteLine("Brand: " + Brand);
            Console.WriteLine("Model: " + Model);
        }
    }

    //Question - 2
    public class Movie{
        string? _title,_artist;
        double? _duration;

        public string? Title{
            get{return _title;}
            set{_title=value;}
        }
        public string? Artist{
            get{return _artist;}
            set{_artist=value;}
        }
        public double? Duration{
            get{return _duration;}
            set{_duration=value;}
        }

        public Movie(string? title,string? artist, double duration){
            Title= title;
            Artist=artist;
            Duration=duration;
        }

        public void DisplayInfo(){
            Console.WriteLine("Title: "+Title);
            Console.WriteLine("Artist: "+Artist);
            Console.WriteLine("Duration: "+Duration);
        }
    }

}
