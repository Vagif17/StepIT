namespace Calculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (Example.Text == "0")
            {
                Example.Text = "";
            }
            Example.Text += 1;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (Example.Text == "0")
            {
                Example.Text = "";
            }
            Example.Text += 2;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (Example.Text == "0")
            {
                Example.Text = "";
            }
            Example.Text += 3;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (Example.Text == "0")
            {
                Example.Text = "";
            }
            Example.Text += 4;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (Example.Text == "0")
            {
                Example.Text = "";
            }
            Example.Text += 5;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (Example.Text == "0")
            {
                Example.Text = "";
            }
            Example.Text += 6;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (Example.Text == "0")
            {
                Example.Text = "";
            }
            Example.Text += 7;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            if (Example.Text == "0")
            {
                Example.Text = "";
            }
            Example.Text += 7;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            if (Example.Text == "0")
            {
                Example.Text = "";
            }
            Example.Text += 9;
        }

        private void button0_Click(object sender, EventArgs e)
        {
            if (Example.Text == "0")
            {
                Example.Text = "";
            }
            Example.Text += 0;
        }

        private void buttonEquals_Click(object sender, EventArgs e)
        {
            Char symbol_now = ' ';
            String tmp_num = "";
            String tmp_dot_num = "";
            float number_now = 0;
            float dot_number = 0;
            float final = 0;
            Int32 degree = 1;
            float dot_degree = 1;
            Example.Text += "!";
            for (int i = 0; i < Example.Text.Length   ; i++)
            {
                if (Example.Text[i] >= 48 && Example.Text[i] <= 57)
                {
                    tmp_num += Example.Text[i];
                    degree *= 10;
                    
                    if (Example.Text[i + 1] == ',') 
                    {
                        i += 2;
                        while (Example.Text[i] != '+' && Example.Text[i] != '-' && Example.Text[i] != '*' && Example.Text[i] != '/' && Example.Text[i] != '%' && Example.Text[i] != '!')
                        {
                            dot_degree *= 10;
                            tmp_dot_num += Example.Text[i]; 
                            i++;
                        }

                        for (int b = 0; b < tmp_dot_num.Length; b++)
                        {
                            number_now += (((Int32)(tmp_dot_num[b])) - 48) / dot_degree;
                            dot_degree *= 10;
                            i--;
                        }

                        tmp_dot_num = "";
                        dot_degree = 1;
                    }

                    

                }

                else
                {
                    if (Example.Text[i] == '+' || Example.Text[i] == '-' || symbol_now == ' ' || Example.Text[i] == '*' || Example.Text[i] == '/' || Example.Text[i] == '%')
                    {

                        degree /= 10;
                        for (int b = 0; b < tmp_num.Length; b++)
                        {
                            number_now += (((Int32)(tmp_num[b])) - 48) * degree;
                            degree /= 10;
                        }

                        final += number_now;



                        number_now = 0;
                        tmp_num = "";
                        symbol_now = Example.Text[i];
                        degree = 1;
                    }
                    else
                    {

                        if (symbol_now != ' ')
                        {
                            if (symbol_now == '+')
                            {
                                degree /= 10;
                                for (int b = 0; b < tmp_num.Length; b++)
                                {
                                    number_now += (((Int32)(tmp_num[b])) - 48) * degree;
                                    degree /= 10;
                                }

                                final += number_now;
                            }

                            if (symbol_now == '-')
                            {
                                degree /= 10;
                                for (int b = 0; b < tmp_num.Length; b++)
                                {
                                    number_now += (((Int32)(tmp_num[b])) - 48) * degree;
                                    degree /= 10;
                                }

                                final -= number_now;
                            }
                              
                            if (symbol_now == '*')
                            {
                                degree /= 10;
                                for (int b = 0; b < tmp_num.Length; b++)
                                {
                                    number_now += (((Int32)(tmp_num[b])) - 48) * degree;
                                    degree /= 10;
                                }

                                final *= number_now;
                            }

                            if (symbol_now == '/')
                            {
                                degree /= 10;
                                for (int b = 0; b < tmp_num.Length; b++)
                                {
                                    number_now += (((Int32)(tmp_num[b])) - 48) * degree;
                                    degree /= 10;
                                }

                                final /= number_now;
                            }

                            if (symbol_now == '%')
                            {
                                degree /= 10;
                                for (int b = 0; b < tmp_num.Length; b++)
                                {
                                    number_now += (((Int32)(tmp_num[b])) - 48) * degree;
                                    degree /= 10;
                                }

                                final /= 100;
                                final *= number_now;
                            }

                            number_now = 0;
                            tmp_num = "";
                            symbol_now = Example.Text[i];
                            degree = 1;
                        }
                    }
                }

            }

           
           Example.Text = final.ToString();
        }



        private void buttonPlus_Click(object sender, EventArgs e)
        {
            if (Example.Text != "0")
            {
                Example.Text += '+';
            }
        }

        private void buttonMinus_Click(object sender, EventArgs e)
        {
            if (Example.Text != "0")
            {
                Example.Text += '-';
            }
        }

        private void buttonMultiple_Click(object sender, EventArgs e)
        {
            if (Example.Text != "0")
            {
                Example.Text += '*';
            }
        }

        private void buttonDivide_Click(object sender, EventArgs e)
        {
            if (Example.Text != "0")
            {
                Example.Text += '/';
            }
        }

        

        private void buttonPercent_Click(object sender, EventArgs e)
        {
            if (Example.Text != "0")
            {
                Example.Text += '%';
            }
        }

        private void buttonClear_Click(object sender, EventArgs e)
        {
            Example.Text = "0";
        }

       

        private void buttonDot_Click(object sender, EventArgs e)
        {
            Example.Text += ',';
        }
    }
    
}