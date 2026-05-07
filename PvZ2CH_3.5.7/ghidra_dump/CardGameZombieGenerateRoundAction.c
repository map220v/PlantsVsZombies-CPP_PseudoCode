// Class: CardGameZombieGenerateRoundAction


/* CardGameZombieGenerateRoundAction::CardGameZombieGenerateRoundAction() */

void __thiscall
CardGameZombieGenerateRoundAction::CardGameZombieGenerateRoundAction
          (CardGameZombieGenerateRoundAction *this)

{
  CardGameRoundAction::CardGameRoundAction((CardGameRoundAction *)this);
  *(undefined ***)this = &PTR__CardGameZombieGenerateRoundAction_069d6450;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  return;
}


/* CardGameZombieGenerateRoundAction::~CardGameZombieGenerateRoundAction() */

void __thiscall
CardGameZombieGenerateRoundAction::~CardGameZombieGenerateRoundAction
          (CardGameZombieGenerateRoundAction *this)

{
  *(undefined ***)this = &PTR__CardGameZombieGenerateRoundAction_069d6450;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  CardGameRoundAction::~CardGameRoundAction((CardGameRoundAction *)this);
  return;
}


/* CardGameZombieGenerateRoundAction::~CardGameZombieGenerateRoundAction() */

void __thiscall
CardGameZombieGenerateRoundAction::~CardGameZombieGenerateRoundAction
          (CardGameZombieGenerateRoundAction *this)

{
  ~CardGameZombieGenerateRoundAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieGenerateRoundAction::Init(int, Sexy::RtWeakPtr<CardGameRoundActionProperties>) */

void __thiscall
CardGameZombieGenerateRoundAction::Init
          (CardGameZombieGenerateRoundAction *this,undefined4 param_1,RtWeakPtrBase *param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  CardGameRoundAction::Init((CardGameRoundAction *)this,param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x18),param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieGenerateRoundAction::DoRealAction() */

void __thiscall
CardGameZombieGenerateRoundAction::DoRealAction(CardGameZombieGenerateRoundAction *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  RtObject *this_01;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar2 = FUN_04e1141c(*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20));
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      uVar5 = FUN_04e11430(*(undefined8 *)(lVar4 + 0x18),lVar3);
      FUN_05475d88(asStack_10,uVar5);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      lVar4 = FUN_04e11430(*(undefined8 *)(lVar4 + 0x18),lVar3);
      iVar1 = *(int *)(lVar4 + 0xc);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      lVar4 = lVar3 + 1;
      lVar3 = FUN_04e11430(*(undefined8 *)(lVar6 + 0x18),lVar3);
      this_01 = (RtObject *)
                Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),asStack_10,iVar1,
                                   *(int *)(lVar3 + 0x10),1);
      Sexy::RtObject::Cast<GridItemCardGameZombie>(this_01);
      std::string::~string(asStack_10);
      lVar3 = lVar4;
    } while ((int)lVar4 < iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

