// Class: CardGameRound


/* CardGameRound::CardGameRound() */

void __thiscall CardGameRound::CardGameRound(CardGameRound *this)

{
  *(undefined ***)this = &PTR__CardGameRound_069d6490;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  *(undefined4 *)(this + 8) = 0;
  std::vector<CardGameRoundAction*,std::allocator<CardGameRoundAction*>>::clear
            ((vector<CardGameRoundAction*,std::allocator<CardGameRoundAction*>> *)(this + 0x10));
  return;
}


/* CardGameRound::~CardGameRound() */

void __thiscall CardGameRound::~CardGameRound(CardGameRound *this)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(this + 0x10);
  *(undefined ***)this = &PTR__CardGameRound_069d6490;
  iVar1 = FUN_04e1143c(uVar4,*(undefined8 *)(this + 0x18));
  if (0 < iVar1) {
    lVar5 = 0;
    while( true ) {
      puVar2 = (undefined8 *)FUN_04e11448(uVar4,lVar5);
      plVar3 = (long *)*puVar2;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
        puVar2 = (undefined8 *)FUN_04e11448(*(undefined8 *)(this + 0x10),lVar5);
        *puVar2 = 0;
      }
      lVar5 = lVar5 + 1;
      if (iVar1 <= (int)lVar5) break;
      uVar4 = *(undefined8 *)(this + 0x10);
    }
  }
  std::vector<CardGameRoundAction*,std::allocator<CardGameRoundAction*>>::clear
            ((vector<CardGameRoundAction*,std::allocator<CardGameRoundAction*>> *)(this + 0x10));
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  std::vector<CardGameRoundAction*,std::allocator<CardGameRoundAction*>>::~vector
            ((vector<CardGameRoundAction*,std::allocator<CardGameRoundAction*>> *)(this + 0x10));
  return;
}


/* CardGameRound::~CardGameRound() */

void __thiscall CardGameRound::~CardGameRound(CardGameRound *this)

{
  ~CardGameRound(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameRound::Init(Sexy::RtWeakPtr<CardGameRoundProperties>) */

void __thiscall CardGameRound::Init(CardGameRound *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  CardGameRoundAction *pCVar5;
  long lVar6;
  RtWeakPtrBase *pRVar7;
  code *pcVar8;
  CardGameRoundAction *local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  *(undefined4 *)(this + 8) = *(undefined4 *)(lVar3 + 0x10);
  std::vector<CardGameRoundAction*,std::allocator<CardGameRoundAction*>>::clear
            ((vector<CardGameRoundAction*,std::allocator<CardGameRoundAction*>> *)(this + 0x10));
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar2 = FUN_04e11450(*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20));
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04e11478(*(undefined8 *)(lVar4 + 0x18),lVar3);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      pCVar5 = (CardGameRoundAction *)
               CardGameRoundActionFactory::CreateCardGameRoundAction(*(undefined4 *)(lVar4 + 0x10));
      uVar1 = *(undefined4 *)(this + 8);
      pcVar8 = *(code **)(*(long *)pCVar5 + 0x10);
      local_18 = pCVar5;
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      lVar4 = lVar3 + 1;
      pRVar7 = (RtWeakPtrBase *)FUN_04e11478(*(undefined8 *)(lVar6 + 0x18),lVar3);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar7);
      (*pcVar8)(pCVar5,uVar1,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      std::vector<CardGameRoundAction*,std::allocator<CardGameRoundAction*>>::push_back
                ((vector<CardGameRoundAction*,std::allocator<CardGameRoundAction*>> *)(this + 0x10),
                 &local_18);
      lVar3 = lVar4;
    } while ((int)lVar4 < iVar2);
  }
  (**(code **)(*(long *)this + 0x18))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

