%{ 

/*codigo colocado aqui aparece no arquivo gerado pelo flex*/ 

%} 

/* This tells flex to read only one input file */ 
%option noyywrap 

/* definicoes regulares */ 

delim        [ \t\n] 
ws        {delim}+ 

%% 

{ws}        {/*nenhuma acao e nenhum retorno*/} 


[+]*[0-9]+ {printf("\nFoi encontrado um número inteiro positivo. LEXEMA: %s\n",yytext);}

[-][0-9]+ {printf("\nFoi encontrado um número inteiro negativo. LEXEMA: %s\n",yytext);}

[+|-]*[0-9]+[.][0-9]+ {printf("\nFoi encontrado um número flutuante. LEXEMA: %s\n",yytext);}

[A-Z][A-Z][A-Z][-][0-9][0-9][0-9][0-9] {printf("\nFoi encontrado uma placa. LEXEMA: %s\n",yytext);}

[a-zA-Z]+ {printf("\nFoi encontrado uma palavra. LEXEMA: %s\n", yytext);}

[0-9][0-9][0-9][0-9][-][0-9][0-9][0-9][0-9] {printf("\nFoi encontrado um telefone. LEXEMA: %s\n",yytext);}

[A-Z][a-z]+" "[A-Z][a-z]+" "[A-Z][a-z]+[" "]*[A-Z]*[a-z]*[" "]* {printf("\nFoi encontrado um nome próprio. LEXEMA: %s\n",yytext);}

%% 

/*codigo em C. Foi criado o main, mas podem ser criadas outras funcoes aqui.*/ 

int main(void) 
{ 
    /* Call the lexer, then quit. */ 
    yylex(); 
    return 0; 
}
