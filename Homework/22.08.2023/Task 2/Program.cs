#region Task 1

//#region initialization
//Int32[] A = new Int32[5];
//Int32 tmp_num = 0;
//for (int i = 0; i < 5; i++)
//{
//    Console.WriteLine("Enter number : ");
//    bool tmp = Int32.TryParse(Console.ReadLine(), out tmp_num);
//    A[i] = tmp_num;
//}
//Int32[,] B = new Int32[3,4];

//Random r = new ();
//for (int i = 0; i < 3; i++)
//{
//    for (int b = 0; b < 4; b++)
//    {
//        Int32 num = r.Next(1, 10);
//        B[i,b] = num;
//    }
//}

//#endregion

//#region show

//Console.WriteLine("Array A :\n");
//for (int i = 0; i < 5; i++)
//{
//    Console.Write(A[i]);
//}


//Console.WriteLine("\n\nArray B :");
//for (int i = 0;i < 3; i++)
//{
//    Console.WriteLine();
//    for (int b = 0; b < 4; b++)
//    {
//        Console.Write(B[i,b]);
//        Console.Write(' ');
//    }
//}

//#endregion

//#region max_between

//Int32 max_A = A.Max();
//Int32 max_B = 0;
//Int32 max_between = 0;


//for (int i = 0;i < 3; i++)
//{
//    for (int b = 0; b < 4; b++)
//    {
//        if (B[i,b] > max_B)
//        {
//            max_B = B[i,b];
//        }
//    }
//}

//if (max_A > max_B)
//{
//    max_between= max_A;
//}

//if (max_B > max_A)
//{
//    max_between= max_B;
//}
//Console.WriteLine($"\n\nMax number between arrays = {max_between}");


//#endregion

//#region min_between

//Int32 min_A = A.Min();
//Int32 min_B = max_B;
//Int32 min_between = 100;


//for (int i = 0; i < 3; i++)
//{
//    for (int b = 0; b < 4; b++)
//    {
//        if (B[i, b] < min_B)
//        {
//            min_B = B[i, b];
//        }
//    }
//}

//if (min_A < min_B)
//{
//    min_between = max_A;
//}

//if (min_B < min_A)
//{
//    min_between = min_B;
//}

//if (min_A == min_B)
//{
//    min_between= min_B;
//}
//Console.WriteLine($"\n\nMin number between arrays = {min_between}\n\n");

//#endregion

//#region amount_all

//Int32 amount = 0;
//for (int i = 0;i < 5;i++)
//{
//    amount += A[i];
//}

//for (int i = 0; i < 3; i++)
//{
//    for (int b = 0; b < 4; b++)
//    {
//        amount += B[i, b];
//    }
//}

//Console.WriteLine($"Amount of all : {amount}");

//#endregion

//#region products_all

//Int32 products_all = 1;

//for (int i = 0; i > 5; i++)
//{
//    products_all *= A[i];
//}

//for (int i = 0; i < 3; i++)
//{
//    for (int b = 0; b < 4; b++)
//    {
//        products_all *= B[i, b];
//    }
//}

//Console.WriteLine($"Products of all : {products_all}\n\n");
//#endregion

//#region Odd&Even

//Int32 even_a = 0;

//for (int i = 0; i < 5; i++)
//{
//    if (i % 2 == 0)
//    {
//        even_a += A[i];
//    }
//}

//Console.Write($"\nAmount of even elements in array A : ");
//for (int i = 0; i < 5; i++)
//{
//    Console.Write($"{A[i]} ");
//}

//Int32 odd_b = 0;
//for (int i = 0; i < 3; i++)
//{
//    if (i % 2 == 0)
//    {
//        for (int b = 0; b < 4; b++)
//        {
//            odd_b += B[i, b];
//        }
//    }
//}
//Console.WriteLine($"\nAmount of odd сolumn in array B : {odd_b}");

//#endregion

#endregion

#region Task 2 

//Random random = new Random();
//Int32[,] array = new Int32[5, 5];
//Int32 amount = 0;

//Int32 max_column = 0;
//Int32 max_index = 0;
//Int32 max_number = -101;

//Int32 min_column = 0;
//Int32 min_index = 0;
//Int32 min_number = 101;

//for (int i = 0;i < 5; i++)
//{
//	Console.WriteLine("");
//	for (int b = 0; b < 5; b++)
//	{ 
//		array[i,b] = random.Next(-100,100);
//		if (array[i,b] > max_number)
//		{
//			max_number = array[i,b];
//			max_column = i;
//			max_index = b;
//		}

//		if (array[i,b] < min_number)
//		{
//			min_number = array[i,b];
//			min_column = i;
//			min_index = b;
//		}
//        Console.Write($"{array[i, b]} ");
//    }
//}


//Console.WriteLine($"\n\nMax column : {max_column}    Max index : {max_index}    Max number : {max_number}\n\n");
//Console.WriteLine($"Min column : {min_column}    Min index : {min_index}    Min number : {min_number}");

//if (max_column > min_column)
//{
//	for (int i = min_column; i < 5; i++)
//	{

//		for (int b = 0; b < 5; b++)
//		{
//			if (i == max_column && b == max_index)
//			{
//				amount += array[i, b];
//				break;
//			}

//			if (i == min_column)
//			{
//				if (b >= min_index)
//				{
//					amount += array[i, b];
//				}
//			}

//			else
//			{
//				if (i > min_column)
//				{
//					amount += array[i,b];
//				}
//			}
//		}

//		if (i == max_column)
//		{
//			break;
//		}
//	}
//}

//if (max_column < min_column)
//{
//	Int32 i = min_column;
//	Int32 b = min_index;
//	while (true)
//	{


//		if (b < 5)
//		{
//			amount += array[i, b];
//			b++;
//            if (max_column == i && max_index == b)
//            {
//                amount += array[i, b];
//                break;
//            }
//        }

//		if (b == 5)
//		{
//			b = 0;
//			i++;

//        }

//		if (i == 5)
//		{
//			i = 0;
//		}
//	}
//}


//if (max_column == min_column && min_index < max_index)
//{
//    for (int i = min_column; i < 5; i++)
//    {

//        for (int b = 0; b < 5; b++)
//        {
//            if (i == max_column && b == max_index)
//            {
//                amount += array[i, b];
//                break;
//            }

//            if (i == min_column)
//            {
//                if (b >= min_index)
//                {
//                    amount += array[i, b];
//                }
//            }

//            else
//            {
//                if (i > min_column)
//                {
//                    amount += array[i, b];
//                }
//            }
//        }

//        if (i == max_column)
//        {
//            break;
//        }
//    }
//}

//if (max_column == min_column && min_index < max_index)
//{
//    Int32 i = min_column;
//    Int32 b = min_index;
//    while (true)
//    {


//        if (b < 5)
//        {
//            amount += array[i, b];
//            b++;
//            if (max_column == i && max_index == b)
//            {
//                amount += array[i, b];
//                break;
//            }
//        }

//        if (b == 5)
//        {
//            b = 0;
//            i++;

//        }

//        if (i == 5)
//        {
//            i = 0;
//        }
//    }
//}
//Console.WriteLine(amount);
#endregion

#region Task 3
//String final_text = "";
//Int32 choice = 0;
//Console.WriteLine("Choose : \n1.Encryption\n2.Decryption");
//bool choice_b = Int32.TryParse(Console.ReadLine(), out choice);

//if (choice == 1)
//{
//    Console.WriteLine("Enter text : ");
//    String text = Console.ReadLine().ToUpper();
//    for (int i = 0; i < text.Length; i++)
//    {
//        if (text[i] >= 65 && text[i] <= 67) { final_text += ((Char)(text[i] + 23)); }
//        if (text[i] >= 68 && text[i] <= 90) { final_text += ((Char)(text[i] - 3)); }
//        if (text[i] == ' ') { final_text += ' '; }
//    }
//    Console.WriteLine(final_text);
//}

//if (choice == 2)
//{
//    Console.WriteLine("Enter text : ");
//    String text = Console.ReadLine().ToUpper();
//    for (int i = 0; i < text.Length; i++)
//    {
//        if (text[i] >= 65 && text[i] <= 67) { final_text += ((Char)(text[i] + 3)); }
//        if (text[i] >= 68 && text[i] <= 87) { final_text += ((Char)(text[i] + 3)); }
//        if (text[i] >= 88 && text[i] <= 90) { final_text += ((Char)(text[i] - 23));}
//        if (text[i] == ' ') { final_text += ' '; }
//    }
//    Console.WriteLine(final_text);
//}
#endregion

#region Task 4

//Int32[,] matrices = new int[3, 3];
//Random r = new Random();

//for (int i = 0; i < 3; i++)
//{
//	for (int b = 0; b < 3; b++)
//	{
//        Int32 num = r.Next(1, 10);
//		matrices[i, b] = num;
//	}
//}

//Console.WriteLine("Matrices : ");
//for (int i = 0; i < 3; i++)
//{
//	for (int b = 0; b < 3; b++)
//	{
//		Console.Write($"{matrices[i, b]  }");
//		Console.Write(' ');
//	}
//    Console.WriteLine();

//}


//Console.WriteLine("\nChoose : \n1.multiplication by number\n2.Addition matrices \n3.Multiplication matrices\n: ");
//Int32 choice = 0;
//bool choice_b = Int32.TryParse(Console.ReadLine(), out choice);

//if (choice == 1)
//{
//    Int32[,] matrices_1 = new int[3, 3];
//    Console.WriteLine("Enter number : ");
//	Int32 num_to_multiplication = 0;
//	bool num_to_multiplication_b = Int32.TryParse(Console.ReadLine(),out num_to_multiplication);
//    Console.WriteLine();
//    for (int i = 0; i < 3; i++)
//	{
//		for (int b = 0; b < 3; b++)
//		{
//			matrices_1[i, b] = num_to_multiplication * matrices[i, b];
//		}
//	}

//	for (int i = 0; i < 3; i++)
//	{
//		for (int b = 0; b < 3; b++)
//		{
//			Console.Write(matrices_1[i,b]);
//			Console.Write(' ');
//		}
//		Console.WriteLine();
//	}

//}


//if (choice == 2)
//{
//    Console.WriteLine();
//    Int32[,] matrices_2 = new int[3, 1];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int b = 0; b < 3; b++)
//		{
//			matrices_2[i, 0] += matrices[i, b];
//		}
//	}

//	for (int i = 0; i < 3; i++)
//	{
//		Console.Write(matrices_2[i,0]);
//		Console.Write(' ');
//		Console.WriteLine();
//	}
//}

//if (choice == 3)
//{
//    Console.WriteLine();
//    Int32[,] matrices_3 = new int[3, 1];
//	matrices_3[0,0] = 1;
//    matrices_3[1,0] = 1;
//    matrices_3[2,0] = 1;

//    for (int i = 0; i < 3; i++)
//    {
//        for (int b = 0; b < 3; b++)
//        {
//            matrices_3[i, 0] *= matrices[i, b];
//        }
//    }

//    for (int i = 0; i < 3; i++)
//    {
//        Console.Write(matrices_3[i, 0]);
//        Console.Write(' ');
//        Console.WriteLine();
//    }
//}

#endregion

#region Task 5 

//Console.WriteLine("Enter  arithmetic expression :"); 
//String arithmetic_expression = Console.ReadLine() + '.'; // To understand that expression is end
//Char symbol_now = ' ';
//String tmp_num = "";
//Int32 number_now = 0;
//Int32 final = 0;
//Int32 degree = 1;
//for (int i = 0; i < arithmetic_expression.Length; i++)
//{
//    if (arithmetic_expression[i] >= 48 && arithmetic_expression[i] <= 57)
//    {
//        tmp_num += arithmetic_expression[i];
//        degree *= 10;
//    }

//    else
//    {
//        if (arithmetic_expression[i] == '+' || arithmetic_expression[i] == '-' && symbol_now == ' ')
//        {

//            degree /= 10;
//            for (int b = 0; b < tmp_num.Length; b++)
//            {
//                number_now += (((Int32)(tmp_num[b])) - 48) * degree;
//                degree /= 10;
//            }

//            final += number_now;



//            number_now = 0;
//            tmp_num = "";
//            symbol_now = arithmetic_expression[i];
//            degree = 1;
//        }
//        else
//        {

//            if (symbol_now != ' ')
//            {
//                if (symbol_now == '+')
//                {
//                    degree /= 10;
//                    for (int b = 0; b < tmp_num.Length; b++)
//                    {
//                        number_now += (((Int32)(tmp_num[b])) - 48) * degree;
//                        degree /= 10;
//                    }

//                    final += number_now;
//                }

//                if (symbol_now == '-')
//                {
//                    degree /= 10;
//                    for (int b = 0; b < tmp_num.Length; b++)
//                    {
//                        number_now += (((Int32)(tmp_num[b])) - 48) * degree;
//                        degree /= 10;
//                    }

//                    final -= number_now;
//                }
//                number_now = 0;
//                tmp_num = "";
//                symbol_now = arithmetic_expression[i];
//                degree = 1;
//            }
//        }
//    }
    
//}

//Console.WriteLine(final);

#endregion

#region Task 6

//Console.WriteLine("Enter text : ");
//String text = Console.ReadLine();
//String final_text = "";

//for (int i = 0; i < text.Length; i++)
//{
//    if (i == 0)
//    {
//        if (text[i] >= 97 && text[i] <= 122)
//        {
//            final_text += (char)(text[i] - 32);
//        }
//    }

//    if (text[i] == '.' || text[i] == '!' || text[i] == '?') 
//    {
//        while (i < text.Length)
//        {
//            if (text[i] >= 97 && text[i] <= 122)
//            {
//                final_text += text[i - 1];
//                final_text += (char)(text[i] - 32);
//                break;
//            }

//            i++;
//        }
//    }
//    else
//    {
//        if (i != 0)
//        {
//            final_text += text[i];
//        }
//    }
//    if (i == text.Length)
//    {
//        final_text += text[text.Length - 1] ;
//    }
//}

//Console.WriteLine("\nFinal text :\n");
//Console.WriteLine(final_text);

#endregion

#region Task 7
//Console.WriteLine("Enter forbidden word : ");
//String word = Console.ReadLine().ToLower();
//Int32 corret_char = word.Length;
//Int32 char_now = 0;
//Int32 b = 0;
//Int32 a = 0;
//Int32 statistic = 0;
//Console.WriteLine("Enter text : ");
//String text = Console.ReadLine().ToLower();
//String final_text = "";
//for (int i = 0 ; i < text.Length ; i++)
//{
//    if (char_now == 0)
//    {
//        if (text[i] == word[b])
//        {
//            for (int j = i; text[j] != ' '; j++)
//            {
//                if (text[j] == word[b])
//                {
//                    char_now++;
//                    b++;
//                }
//                else
//                {
//                    char_now = 0;
//                    b = 0;
//                }
//            }
//        }
//    }

//    if (corret_char == char_now & a < word.Length ) 
//    {
//        final_text += '*';
//        a++;
//    }

//    else
//    {
//        final_text += text[i];
//    }
//}

//Console.WriteLine(final_text);
#endregion