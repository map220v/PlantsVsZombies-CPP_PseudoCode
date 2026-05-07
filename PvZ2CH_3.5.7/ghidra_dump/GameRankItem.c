// Class: GameRankItem


/* GameRankItem::GameRankItem() */

void __thiscall GameRankItem::GameRankItem(GameRankItem *this)

{
  Set8BytesTo0(this + 8);
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  return;
}


/* GameRankItem::TEMPNAMEPLACEHOLDERVALUE(GameRankItem const&) */

GameRankItem * __thiscall GameRankItem::operator=(GameRankItem *this,GameRankItem *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}

