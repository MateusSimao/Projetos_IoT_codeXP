// ==========================================================================
// INICIO: ESCOPO DAS VARIAVEIS


// FIM:  ESCOPO DAS VARIAVEIS
// ==========================================================================

void setup() {
  
  Serial.begin(9600);
}

// ==========================================================================
// INICIO: ESCOPO DAS FUNCOES

/**
 * Descrição     = Função para desligar ou ligar um led em portas digitais.
 * param porta   = Receberá a porta do led que a função irá trablhar.
 * param acao    = Receberá a ação de desligar ou ligar o led, por exemplo, HIGH para ligar ou LOW para desligar.
 * param atraso  = Receberá o delay, caso seja nessessario, caso contrario só executara a ação.
 * param inverso = Receberá true caso queira que ele faça o inverso da primeira acao,delay obrigatorio.
 * exemplo       = ligaDesligaLed(13, HIGH, 1000) irá ligar o led e deixando com um delay de 1 segundo para a proxima ação
 */
void ligaDesligaLedDigital(int porta, int acao, int atraso = 0, bool inverso = false) {
  pinMode(porta, OUTPUT);
  digitalWrite(porta, acao);
  if (atraso != 0) {
    delay(atraso);
  }
  if (inverso == true && atraso != 0) {
    digitalWrite(porta, !digitalRead(porta));
    delay(atraso);
  }
}
// FIM: ESCOPO DAS FUNCOES
// ==========================================================================

void loop() {
  ligaDesligaLedDigital(3, HIGH, 500, true);
  ligaDesligaLedDigital(4, HIGH, 500, true);
  ligaDesligaLedDigital(5, HIGH, 500, true);
}