// Class: RiftThemePiggyBank


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemePiggyBank::StaticClassInit() */

void RiftThemePiggyBank::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"RiftThemePiggyBank");
    (*pcVar2)(plVar1,asStack_10,FUN_036feca4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemePiggyBank::StaticGetClass() */

long * RiftThemePiggyBank::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemePiggyBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemePiggyBank::GetClass() const */

long * RiftThemePiggyBank::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemePiggyBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemePiggyBank::~RiftThemePiggyBank() */

void __thiscall RiftThemePiggyBank::~RiftThemePiggyBank(RiftThemePiggyBank *this)

{
  *(undefined ***)this = &PTR_GetClass_066885a0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemePiggyBank::~RiftThemePiggyBank() */

void __thiscall RiftThemePiggyBank::~RiftThemePiggyBank(RiftThemePiggyBank *this)

{
  ~RiftThemePiggyBank(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemePiggyBank::RiftThemePiggyBank() */

void __thiscall RiftThemePiggyBank::RiftThemePiggyBank(RiftThemePiggyBank *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)this = &PTR_GetClass_066885a0;
  return;
}


/* RiftThemePiggyBank::StaticNew() */

RiftThemePiggyBank * RiftThemePiggyBank::StaticNew(void)

{
  RiftThemePiggyBank *this;
  
  this = ::operator_new(0x20);
  RiftThemePiggyBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemePiggyBank::OnGridItemGravestoneCoinOnDestructionKilled(GridItemGravestoneCoinOnDestruction*)
    */

void __thiscall
RiftThemePiggyBank::OnGridItemGravestoneCoinOnDestructionKilled
          (RiftThemePiggyBank *this,GridItemGravestoneCoinOnDestruction *param_1)

{
  int iVar1;
  GridItemGravestoneCoinOnDestructionPropertySheet *pGVar2;
  string *psVar3;
  char *__s;
  long lVar4;
  SexyVector3 *pSVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemGravestoneCoinOnDestructionPropertySheet>();
  if (*(int *)(this + 0x1c) < 10000) {
    iVar1 = *(int *)(pGVar2 + 0x104);
    *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + iVar1;
    if (iVar1 == 500) {
      pSVar5 = *(SexyVector3 **)(gLawnApp + 0x9f0);
      psVar3 = (string *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_1);
      __s = "large_coin_gold";
    }
    else {
      if (iVar1 == 0x32) {
        psVar3 = (string *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)param_1);
        lVar4 = 5;
        do {
          pSVar5 = *(SexyVector3 **)(gLawnApp + 0x9f0);
          std::string::string(asStack_10,"coin_silver");
          Board::AddCoin(pSVar5,psVar3);
          std::string::~string(asStack_10);
          nop();
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        goto LAB_0370a38c;
      }
      pSVar5 = *(SexyVector3 **)(gLawnApp + 0x9f0);
      psVar3 = (string *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_1);
      __s = "coin_gold";
    }
    std::string::string(asStack_10,__s);
    Board::AddCoin(pSVar5,psVar3);
    std::string::~string(asStack_10);
    nop();
  }
LAB_0370a38c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemePiggyBank::onZombieDied(Zombie*, DamageInfo const*) */

void RiftThemePiggyBank::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char *__s;
  Board *this;
  float fVar5;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 != (DamageInfo *)0x0) &&
     (cVar1 = RealObject::IsOnOpposingTeam(param_2,1), cVar1 != '\0')) {
    BoardEntity::CalcGridPosition();
    lVar4 = FUN_0370b804(local_18,local_14);
    if (((lVar4 == 0) && (lVar4 = FUN_0370b8e8(local_18,local_14), lVar4 == 0)) &&
       ((((*(Board **)(gLawnApp + 0x9f0))[0x119] == (Board)0x0 || (4 < local_18)) &&
        (cVar1 = Board::CanAddGraveStoneAt(*(Board **)(gLawnApp + 0x9f0),local_18,local_14,true),
        cVar1 != '\0')))) {
      fVar5 = (float)Sexy::Rand(1.0);
      if (0.6666 < fVar5) {
        __s = "piggy_bank_copper";
      }
      else if (fVar5 <= 0.3333) {
        __s = "piggy_bank_gold";
      }
      else {
        __s = "piggy_bank_sliver";
      }
      this = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,__s);
      iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)param_2);
      iVar3 = SharkMinion::getRow((SharkMinion *)param_2);
      Board::AddGridItem(this,asStack_10,iVar2,iVar3,1);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemePiggyBank::Activate() */

void __thiscall RiftThemePiggyBank::Activate(RiftThemePiggyBank *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  RiftTheme::Activate((RiftTheme *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<RiftThemePiggyBank,void(RiftThemePiggyBank::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGridItemGravestoneCoinOnDestructionKilled);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<GridItemGravestoneCoinOnDestruction*,Sexy::CBMemberTranslatorX<RiftThemePiggyBank,void(RiftThemePiggyBank::*)(GridItemGravestoneCoinOnDestruction*)>>
            ((MessageRouter *)puVar1,Message::OnGridItemGravestoneCoinOnDestructionKilled,&local_70)
  ;
  return;
}

