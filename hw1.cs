using System;

namespace HelloWorld{
    
    class Program{
        
        static void Main(string[] args){
            
            do{
                string inputText = Console.ReadLine();
                if(inputText.Length == 0){
                    break;
                }
                for(int i = 0;i < inputText.Length;i ++){
                    Console.Write(inputText[i]);
                }
                Console.WriteLine();

            } while (true);
            
        }
    }
}
