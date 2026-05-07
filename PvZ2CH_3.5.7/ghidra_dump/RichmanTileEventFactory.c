// Class: RichmanTileEventFactory


/* RichmanTileEventFactory::CreateTileEvent(RichmanTileEventConfig&) */

RichmanTileEvent_GuessGame *
RichmanTileEventFactory::CreateTileEvent(RichmanTileEventConfig *param_1)

{
  int iVar1;
  RichmanTileEvent_GuessGame *this;
  RichmanTileEvent_MoveForward *this_00;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      this = ::operator_new(0x80);
      RichmanTileEvent_MoveBackward::RichmanTileEvent_MoveBackward
                ((RichmanTileEvent_MoveBackward *)this,param_1);
    }
    else if (iVar1 == 2) {
      this = ::operator_new(0x80);
      RichmanTileEvent_ThrowAgain::RichmanTileEvent_ThrowAgain
                ((RichmanTileEvent_ThrowAgain *)this,param_1);
    }
    else if (iVar1 == 3) {
      this = ::operator_new(0x80);
      RichmanTileEvent_Start::RichmanTileEvent_Start((RichmanTileEvent_Start *)this,param_1);
    }
    else if (iVar1 == 4) {
      this = ::operator_new(0x80);
      RichmanTileEvent_Reward::RichmanTileEvent_Reward((RichmanTileEvent_Reward *)this,param_1);
    }
    else if (iVar1 == 5) {
      this = ::operator_new(0x80);
      RichmanTileEvent_Reward_Big::RichmanTileEvent_Reward_Big
                ((RichmanTileEvent_Reward_Big *)this,param_1);
    }
    else if (iVar1 == 6) {
      this = ::operator_new(0x80);
      RichmanTileEvent_Reward_Coin3::RichmanTileEvent_Reward_Coin3
                ((RichmanTileEvent_Reward_Coin3 *)this,param_1);
    }
    else if (iVar1 == 7) {
      this = ::operator_new(0x80);
      RichmanTileEvent_Reward_Coin4::RichmanTileEvent_Reward_Coin4
                ((RichmanTileEvent_Reward_Coin4 *)this,param_1);
    }
    else if (iVar1 == 8) {
      this = ::operator_new(0x80);
      RichmanTileEvent_Reward_PlantPiecesChest::RichmanTileEvent_Reward_PlantPiecesChest
                ((RichmanTileEvent_Reward_PlantPiecesChest *)this,param_1);
    }
    else if (iVar1 == 9) {
      this = ::operator_new(0x80);
      RichmanTileEvent_Reward_AvatarPiecesChest::RichmanTileEvent_Reward_AvatarPiecesChest
                ((RichmanTileEvent_Reward_AvatarPiecesChest *)this,param_1);
    }
    else if (iVar1 == 10) {
      this = ::operator_new(0x80);
      RichmanTileEvent_MiniGame::RichmanTileEvent_MiniGame
                ((RichmanTileEvent_MiniGame *)this,param_1);
    }
    else if (iVar1 == 0xb) {
      this = ::operator_new(0x98);
      RichmanTileEvent_BossBattle::RichmanTileEvent_BossBattle
                ((RichmanTileEvent_BossBattle *)this,param_1);
    }
    else if (iVar1 == 0xc) {
      this = ::operator_new(0x80);
      RichmanTileEvent_WorldLevel::RichmanTileEvent_WorldLevel
                ((RichmanTileEvent_WorldLevel *)this,param_1);
    }
    else {
      this = (RichmanTileEvent_GuessGame *)0x0;
      if (iVar1 == 0xd) {
        this = ::operator_new(0x88);
        RichmanTileEvent_GuessGame::RichmanTileEvent_GuessGame(this,param_1);
      }
    }
    return this;
  }
  this_00 = ::operator_new(0x80);
  RichmanTileEvent_MoveForward::RichmanTileEvent_MoveForward(this_00,param_1);
  return (RichmanTileEvent_GuessGame *)this_00;
}

