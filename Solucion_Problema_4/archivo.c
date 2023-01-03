
//Habilitamos señal de reloj para UART6
RCC->APB2ENR |= 0x00000020;

//Habilitamos deñar de reloj del puerto A
RCC->AHB1ENR |= 0x00000001;

//Habilitamos funcion alterna del puerto PA11 y PA12
GPIOA->MODER |= 0x00001800;
GPIOA->MODER &= 0xFFFF18FF;

//Conectamos UART6 con PA11 y PA12
GPIOA->AFR[1] |= 0x00008800;
GPIOA->AFR[1] &= 0xFFFF88FF;

//Habilitar UART6 en CR1
USART6->CR1 |= 0x00002000;

//Configuramos velocidad de transmision
USART6->BRR 

//Habilitar recepcion y transmision UART6 
USART6->CR1 |= 0x0000000C;