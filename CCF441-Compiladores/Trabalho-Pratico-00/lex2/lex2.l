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

www\.[a-zA-Z][a-zA-Z]+\.com\.br {printf("\nFoi encontrado um dominio do Brasil. LEXEMA: %s\n",yytext);}

www\.[a-zA-Z][a-zA-Z]+\.com\.ca {printf("\nFoi encontrado um dominio do Canadá. LEXEMA: %s\n",yytext);}

www\.[a-zA-Z][a-zA-Z]+\.com\.kr {printf("\nFoi encontrado um dominio da Coreia do Sul. LEXEMA: %s\n",yytext);}

www\.[a-zA-Z][a-zA-Z]+\.com\.jp {printf("\nFoi encontrado um dominio do Japão. LEXEMA: %s\n",yytext);}

www\.[a-zA-Z][a-zA-Z]+\.com\.uk {printf("\nFoi encontrado um dominio do Reino Unido. LEXEMA: %s\n",yytext);}

www\.[a-zA-Z][a-zA-Z]+\.com\.gb {printf("\nFoi encontrado um dominio do Reino Unido. LEXEMA: %s\n",yytext);}

www\.[a-zA-Z][a-zA-Z]+\.com\.ar {printf("\nFoi encontrado um dominio da Argentina. LEXEMA: %s\n",yytext);}

www\.[a-zA-Z][a-zA-Z]+\.com\.it {printf("\nFoi encontrado um dominio da Itália. LEXEMA: %s\n",yytext);}

www\.[a-zA-Z][a-zA-Z]+\.com\.eg {printf("\nFoi encontrado um dominio do Egito. LEXEMA: %s\n",yytext);}

www\.[a-zA-Z][a-zA-Z]+\.com\.fr {printf("\nFoi encontrado um dominio da França. LEXEMA: %s\n",yytext);}

www\.[a-zA-Z][a-zA-Z]+\.com\.hk {printf("\nFoi encontrado um dominio de Hong Kong. LEXEMA: %s\n",yytext);}

www\.[a-zA-Z][a-zA-Z]+\.com\.mx {printf("\nFoi encontrado um dominio do México. LEXEMA: %s\n",yytext);}

www\.[a-zA-Z][a-zA-Z]+\.com\.au {printf("\nFoi encontrado um dominio da Austrália. LEXEMA: %s\n",yytext);}

www\.[a-zA-Z][a-zA-Z]+\.com\.ng {printf("\nFoi encontrado um dominio da Nigéria. LEXEMA: %s\n",yytext);}

www\.[a-zA-Z][a-zA-Z]+\.com\.pe {printf("\nFoi encontrado um dominio do Peru. LEXEMA: %s\n",yytext);}

www\.[a-zA-Z][a-zA-Z]+\.com {printf("\nFoi encontrado um dominio comercial. LEXEMA: %s\n",yytext);}

%% 

/*codigo em C. Foi criado o main, mas podem ser criadas outras funcoes aqui.*/ 

int main(void) 
{ 
    /* Call the lexer, then quit. */ 
    yylex(); 
    return 0; 
}
