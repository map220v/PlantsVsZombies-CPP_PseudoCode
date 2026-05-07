// Class: CardGameRoundActionFactory


/* CardGameRoundActionFactory::CreateCardGameRoundAction(CardGameRoundActionType) */

CardGameZombieGenerateRoundAction *
CardGameRoundActionFactory::CreateCardGameRoundAction(int param_1)

{
  CardGameZombieGenerateRoundAction *this;
  
  if (param_1 == 0) {
    this = ::operator_new(0x20);
    CardGameZombieGenerateRoundAction::CardGameZombieGenerateRoundAction(this);
    return this;
  }
  return (CardGameZombieGenerateRoundAction *)0x0;
}

