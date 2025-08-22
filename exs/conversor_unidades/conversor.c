
int menu(){

    int escolha;
    int conf = 1;

    do{
        // menu
        printf("------MENU------");
        printf("Digite o número para fazer sua escolha: \n");
        printf("1. Celsius para Fahrenheit");
        printf("2. metros para km");
        printf("3. segundos para minutos");

        scanf("%d", &escolha);

        switch (escolha)
            {
            case 1:
                celsiusToF();
                break;

            case 2:
                mTokm();
                break;
            
            case 3:
                secToMin();
                break;
            
            default:
                break;
            }
    }
    while(conf = 1);

}

celsiusToF(){
    int celsius;

    printf("digite o valor em Celsius: ");
    scanf("%d", &celsius);

    return celsius * 32;
}

mTokm(){
    int m;

    printf("digite o valor em metros: ");
    scanf("%d", &m);

    return m / 1000;
}

secToMin(){
    int s;

    printf("digite o valor em segundos: ");
    scanf("%d", &s);

    return s * 60;
}