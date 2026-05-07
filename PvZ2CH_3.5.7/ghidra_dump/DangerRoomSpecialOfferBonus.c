// Class: DangerRoomSpecialOfferBonus


/* DangerRoomSpecialOfferBonus::DangerRoomSpecialOfferBonus(DangerRoomSpecialOfferBonus&&) */

void __thiscall
DangerRoomSpecialOfferBonus::DangerRoomSpecialOfferBonus
          (DangerRoomSpecialOfferBonus *this,DangerRoomSpecialOfferBonus *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06989540;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  return;
}


/* DangerRoomSpecialOfferBonus::DangerRoomSpecialOfferBonus(DangerRoomSpecialOfferBonus const&) */

void __thiscall
DangerRoomSpecialOfferBonus::DangerRoomSpecialOfferBonus
          (DangerRoomSpecialOfferBonus *this,DangerRoomSpecialOfferBonus *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06989540;
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 8),(vector *)(param_1 + 8)
            );
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  return;
}


/* DangerRoomSpecialOfferBonus::~DangerRoomSpecialOfferBonus() */

void __thiscall
DangerRoomSpecialOfferBonus::~DangerRoomSpecialOfferBonus(DangerRoomSpecialOfferBonus *this)

{
  *(undefined ***)this = &PTR_GetClass_06989540;
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x20));
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 8));
  nop();
  return;
}


/* DangerRoomSpecialOfferBonus::~DangerRoomSpecialOfferBonus() */

void __thiscall
DangerRoomSpecialOfferBonus::~DangerRoomSpecialOfferBonus(DangerRoomSpecialOfferBonus *this)

{
  ~DangerRoomSpecialOfferBonus(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferBonus::StaticClassInit() */

void DangerRoomSpecialOfferBonus::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LotteryBonus");
    (*pcVar3)(plVar2,asStack_10,FUN_04c4ca70,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DangerRoomSpecialOfferBonus");
    (*pcVar3)(plVar2,asStack_10,FUN_04c4d570,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomSpecialOfferBonus::StaticGetClass() */

long * DangerRoomSpecialOfferBonus::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomSpecialOfferBonus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomSpecialOfferBonus::GetClass() const */

long * DangerRoomSpecialOfferBonus::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomSpecialOfferBonus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomSpecialOfferBonus::DangerRoomSpecialOfferBonus() */

void __thiscall
DangerRoomSpecialOfferBonus::DangerRoomSpecialOfferBonus(DangerRoomSpecialOfferBonus *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06989540;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::clear
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 8));
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::clear
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x20));
  return;
}


/* DangerRoomSpecialOfferBonus::StaticNew() */

DangerRoomSpecialOfferBonus * DangerRoomSpecialOfferBonus::StaticNew(void)

{
  DangerRoomSpecialOfferBonus *this;
  
  this = ::operator_new(0x38);
  DangerRoomSpecialOfferBonus(this);
  return this;
}

