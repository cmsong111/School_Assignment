using System;
///0. Namespace HCI21_Midterm_본인이름_ID 사용한다.
namespace HCI21_Midterm_김남주_C20192336
{
    //  3번 문제의 클래스
    class TemperatureConverter
    {
        //Fahrenheit -> Celsius
        //숫자 뒤에 f값을 주어야 실수형 계산이 가능합니다.
        public static double FromFahrenheitToCelsius(double x)
        {
            double result = (x - 32f) * 5f / 9f;
            return result;
        }
        public static double FromCelsiusToFahrenheit(double x)
        {
            double result = (x * 9f / 5f) + 32f;
            return result;
        }
    }
    //7번 문제의 인터페이스
    interface IMetricConverter
    {
        public static double FromKilometerToMile(double km)
        {
            return km * 0.62137;
        }
        public static double FromMileToKilometer(double mile)
        {
            return mile / 0.62137;
        }
    }
    //7번 문제의 IMetricConverter를 상속받은 class
    class SpeedConverter : IMetricConverter
    {
        //소수점이 너무 길면 지저분해 보이기 때문에 한자리까지만 출력되도록 설정하였습니다.
        public static void printKtoM(double x)
        {
            Console.Write("{0:0.0}", IMetricConverter.FromKilometerToMile(x));
        }
        public static void printMtoF(double x)
        {
            Console.Write("{0:0.0}", IMetricConverter.FromMileToKilometer(x));
        }
    }
    //메인 클래스 및 
    class Program : TemperatureConverter
    {
        static void Main(string[] args)
        {
            ///1. Console.WriteLine("W/F\t40\t35\t30\t25\t20\t15\t10\t5\t0\t-5\t-10\t- 15\t-20\t-25\t-30\t-35\t-40\t-45");와 동일하게 출력을 하도록, for-loop를 코드를 작성하라. (10점)
            Console.WriteLine("1번 문제"); ///문제 구문용
            //W/F 구문은 반복하면 안되므로 Write구문을 써서 줄바꿈 없이 \t(탭) 까지만 프린트 해줌
            Console.Write("W/F\t");
            for (int i = 40; i > -46; i -= 5) ///i값이 45부터 -45까지 -5단위로 반복하게 설정
            {
                ///$값을 주어서 {}안에 값을 바로 넣을수 있게 해줌 그리고 \t을 주어서 탭키 역할을 하게 함
                Console.Write($"{i}\t");
            }

            Console.WriteLine();///줄바꿈용
            Console.WriteLine("---------------------------------------------");///줄바꿈용
            Console.WriteLine("2번 문제"); ///문제 구문용

            ///2. Console.WriteLine("W/F\t40\t35\t30\t25\t20\t15\t10\t5\t0\t-5\t-10\t- 15\t-20\t-25\t-30\t-35\t-40\t-45"); 와 동일하게 출력을 하도록, array와 foreach 코드를 작성하라. (10점)
            int[] fahrenheits = { 40, 35, 30, 25, 20, 15, 10, 5, 0, -5, -10, -15, -20, -25, -30, -35, -40, -45 };
            //W/F 구문은 반복하면 안되므로 Write구문을 써서 줄바꿈 없이 \t(탭) 까지만 프린트 해줌
            Console.Write("W/F\t");
            foreach (int i in fahrenheits)
            {
                Console.Write($"{i}\t"); ///array값의 요소를 받아오면서 계속해서 프린트 하게 만듬
            }

            Console.WriteLine();///줄바꿈용
            Console.WriteLine("---------------------------------------------");///줄바꿈용
            Console.WriteLine("3번 문제"); ///문제 구문용
            //W/C 구문은 반복하면 안되므로 Write구문을 써서 줄바꿈 없이 \t(탭) 까지만 프린트 해줌
            Console.Write("W/C\t");
            //foreach 구문으로 리스트 내부 value값을 차례로 반복함
            foreach (int i in fahrenheits)
            {
                Console.Write("{0:0.0}\t", TemperatureConverter.FromFahrenheitToCelsius(i)); ///array값의 요소를 받아오면서 계속해서 프린트 하게 만듬
            }

            Console.WriteLine();///줄바꿈용
            Console.WriteLine("---------------------------------------------");///줄바꿈용
            Console.WriteLine("4번 문제"); ///문제 구문용

            ///4. Program 클래스에서 체감온도 계산하는 WindChillFormulaFahrenheitMPH 와 WindChillFormulaCelsiusKPH 메소드를 작성한다. (10 점)
            double WindChillFormulaFahrenheitMPH(double T, double V)
            {
                double result = (35.74 + 0.6215 * T) - (35.75 * Math.Pow(V, 0.16)) + (0.4275 * T * Math.Pow(V, 0.16));
                return result;
            }
            double WindChillFormulaCelsiusKPH(double T, double V)
            {
                double result = (13.12 + 0.6215 * T) - (11.37 * Math.Pow(V, 0.16)) + (0.3965 * T * Math.Pow(V, 0.16));
                return result;
            }
            ///콘솔에서 비어보이기 떄문에 오류없이 작성됨을 아래 코드로 시각화 하였습니다.
            Console.WriteLine("메소드 작성완료");


            Console.WriteLine();///줄바꿈용
            Console.WriteLine("---------------------------------------------");///줄바꿈용
            Console.WriteLine("5번 문제"); ///문제 구문용

            ///5. Program 클래스에서 PrintWindChillTable 메소드를 작성하고, 메인에서 출력한다. (10 점)

            //PrintWindChillTable 메소드를 작성하였습니다.
            void PrintWindChillTable()
            {
                int[] winds = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60 }; // MPH  12개
                int[] fahrenheits = { 40, 35, 30, 25, 20, 15, 10, 5, 0, -5, -10, -15, -20, -25, -30, -35, -40, -45 }; // F 18개
                Console.WriteLine("W/F\t40\t35\t30\t25\t20\t15\t10\t5\t0\t-5\t-10\t- 15\t-20\t-25\t-30\t-35\t-40\t-45");
                for (int i = 0; i < 12; i++)
                {
                    Console.Write("{0}\t", winds[i]);
                    for (int i1 = 0; i1 < 18; i1++)
                    {
                        Console.Write("{0:0.0}\t", WindChillFormulaFahrenheitMPH(fahrenheits[i1], winds[i]));
                    }
                    Console.WriteLine();
                }
            }
            //메소드를 호출하여 테이블을 출력하였습니다.
            PrintWindChillTable();

            Console.WriteLine();///줄바꿈용
            Console.WriteLine("---------------------------------------------");///줄바꿈용
            Console.WriteLine("6번 문제"); ///문제 구문용

            //6. 메인에서 TemperatureConverter 클래스를 사용하여 사용자 입력(1. Celsius to Fahrenheit 2. Fahrenheit to Celsius)을 받아 계산한 결과를 출력한다. (10 점)
            //어떤 작업을 할지 선택하는 입력부를 만들었습니다.
            Console.Write("Celsius to Fahrenheit = 1, Fahrenheit to Celsius =2 \nWhich do you want?:");
            int which = Convert.ToInt32(Console.ReadLine());

            if (which == 1)
            { //1 입력시 C에서 F로 변환하는 작업부 입니다.
                Console.Write("Input Celsius:");
                int x = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("{0}°C = {1:0.0}°F", x, FromCelsiusToFahrenheit(x));
            }
            else if (which == 2)
            {//2 입력시 F에서 C로 변환하는 작업부 입니다.
                Console.Write("Input Fahrenheit:");
                int x = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("{0}°F = {1:0.0}°C", x, FromFahrenheitToCelsius(x));
            }

            Console.WriteLine();///줄바꿈용
            Console.WriteLine("---------------------------------------------");///줄바꿈용
            Console.WriteLine("7번 문제"); ///문제 구문용

            //IMetricConverter 인터페이스를 상속받은 SpeedConverter 클래스를 작성한다. 그리고 메인에서 사용자 입력(1. KPH to MPH 2. MPH to KPH)을 받아 계산한 결과를 출력한다. (10 점)
            //어떤 작업을 선택하는 입력부 입니다.
            Console.Write("1. KPH to MPH 2. MPH to KPH \nWhich do you want?:");
            int which_2 = Convert.ToInt32(Console.ReadLine());

            if (which_2 == 1)
            { //1 입력시 KPH to MPH로 변환하는 작업부 입니다.
                Console.Write("Input KPH:");
                double x = Convert.ToDouble(Console.ReadLine());
                Console.Write("{0} km/h = ", x);
                SpeedConverter.printKtoM(x);
                Console.WriteLine(" mi/h");
            }
            else if (which_2 == 2)
            { //2 MPH to KPH로 변환하는 작업부 입니다.
                Console.Write("Input MPH:");
                double x = Convert.ToDouble(Console.ReadLine());
                Console.Write("{0} mi/h = ", x);
                SpeedConverter.printMtoF(x);
                Console.WriteLine(" km/h");
            }

            Console.WriteLine();///줄바꿈용
            Console.WriteLine("---------------------------------------------");///줄바꿈용
            Console.WriteLine("8번 문제"); ///문제 구문용

            //메인에서 사용자 입력(1. TemperatureConverter 2. SpeedConverter)을 받아 IMetricConverter 로 계산한 결과를 테스트한다. (10 점)

            Console.Write("1. TemperatureConverter 2. SpeedConverter \n which one do you want? : ");
            int num = Convert.ToInt32(Console.ReadLine());
            if (num == 1) //1번이 입력되었을때 TemperatureConverter 입니다.
            {
                Console.WriteLine("1번 TemperatureConverter을 선택하셧습니다.");
                Console.Write("1번 입력시 화씨에서 섭씨로, 2번 입력시 화씨에서 섭씨입니다. :");
                int num2 = Convert.ToInt32(Console.ReadLine());
                if (num2 == 1) //1번이 입력되었을때 화씨 -> 섭씨 변환작업구문 입니다.
                {
                    Console.Write("변환하려는 화씨 온도(F)를 입력해주세요: ");
                    double x = Convert.ToDouble(Console.ReadLine());
                    Console.WriteLine("{0}°F는 {1:0.0}°C 입니다.", x, TemperatureConverter.FromFahrenheitToCelsius(x));
                }
                else if(num2 == 2) //2번이 입력되었을때 섭씨 -> 화씨 변환작업구문 입니다.
                {
                    Console.Write("변환하려는 섭씨 온도(°C)를 입력해주세요: ");
                    double x = Convert.ToDouble(Console.ReadLine());
                    Console.WriteLine("{0}°C는 {1:0.0}°F 입니다.", x, TemperatureConverter.FromCelsiusToFahrenheit(x));
                }

            }
            else if (num == 2) //2번이 입력되었을때 SpeedConverter 입니다.
            {
                Console.WriteLine("2번 SpeedConverter 선택하셧습니다.");
                Console.Write("1번 입력시 Kilometer 에서 Mile로, 2번 Mile에서 Kilometer 입니다. :");
                int num2 = Convert.ToInt32(Console.ReadLine());
                if (num2 == 1) //1번이 입력되었을때 Mi/h to km/h 변환작업구문 입니다.
                {
                    Console.Write("변환하려는 mi/h를 입력해주세요: ");
                    double x = Convert.ToDouble(Console.ReadLine());
                    Console.Write("{0}mi/h는 ", x);
                    SpeedConverter.printMtoF(x);
                    Console.WriteLine(" km/h입니다.");
                }
                else if (num2 == 2) //2번이 입력되었을때 km/h to mi/h 변환작업구문 입니다.
                {
                    Console.Write("변환하려는 km/h를 입력해주세요: ");
                    double x = Convert.ToDouble(Console.ReadLine());
                    Console.Write("{0}km/h는 ", x);
                    SpeedConverter.printKtoM(x);
                    Console.WriteLine(" mi/h입니다.");
                }
            }

            Console.WriteLine();///줄바꿈용
            Console.WriteLine("---------------------------------------------");///줄바꿈용
            Console.WriteLine("9번 문제"); ///문제 구문용

            //Program 클래스에서 PrintWindChillTable2 메소드에서는 내부적으로 F->C 로 변환하고 MPH->KPH 로 변환하여 WindChillFormulaCelsiusKPH 사용하여 테이블 출력을 작성한다. 본인의 추가적인 코드를 작성한다. (20 점)
            double[] fahrenheits_C = { 40, 35, 30, 25, 20, 15, 10, 5, 0, -5, -10, -15, -20, -25, -30, -35, -40, -45 }; // F
            double[] winds_K = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60 }; // MPH
            //위의 문제의 변수와 겹치므로 변수명을 변경하였습니다.

            double PrintWindChillTable2(int x, double y)//x값으로 기능을 변환하고, y값으로 변수를 입력합니다.
            {
                if (x == 1) //1번 기능은 기온을 화씨에서 섭씨로 바꿔주는 기능입니다.
                {//F-> C
                    return TemperatureConverter.FromFahrenheitToCelsius(y);
                }
                else if (x == 2) //2번기능은 mi/h 을 km/h로 바꿔주는 기능입니다.
                { //MPH -> KPH
                    return y * 1.609344;
                }
                else //return 반환되는 값이 없을 수도 있어서 이상한값이 들어오면 1이 반환되도록 하였습니.
                {
                    return 1;
                }
            }

            //리스트가 변수이므로 리스트 값을 전부 바꾸어 주었습니다.
            //아래 for메소드를 조금더 재사용율을 높이려면 조건문을 I<18 대신 i < fahrenheits_C.count처럼 사용해도 좋을것입니다.
            for (int i = 0; i < 18; i++) // 내부적으로 F->C 로 변환
            {
                fahrenheits_C[i] = PrintWindChillTable2(1, fahrenheits_C[i]);
            }
            for (int i = 0; i < 12; i++) //내부적으로 내부적으로 F->C 로 변환
            {
                winds_K[i] = PrintWindChillTable2(2, winds_K[i]);
            }
            //테이블 출력부입니다. 위의 문제처럼 W/F는 반복되면 안되기때문에 따로 출력해줍니다.
            Console.Write("W/F\t");
            //기온부분은 
            foreach (double i in fahrenheits_C)
            {
                Console.Write("{0:0.0}\t", i);
                ///array값의 요소를 받아오면서 계속해서 프린트 하게 만듬(foreach)
            }
            Console.WriteLine();
            for (int i = 0; i < 12; i++)
            {
                Console.Write("{0:0.0}\t", winds_K[i]);
                for (int i1 = 0; i1 < 18; i1++)
                {
                    Console.Write("{0:0.0}\t", WindChillFormulaCelsiusKPH(fahrenheits_C[i1], winds_K[i]));
                }
                Console.WriteLine();
            }

            //제가 맥을 사용중이라 아래 문구가 없으면 자동으로 터미널이 종료되어 넣었습니다.
            Console.WriteLine("아무키나 누르면 종료됩니다");
            Console.ReadLine();///종료를 위한 구문
        }
    }
}