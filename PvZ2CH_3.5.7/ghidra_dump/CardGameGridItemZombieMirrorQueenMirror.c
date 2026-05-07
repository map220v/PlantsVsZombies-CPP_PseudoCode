// Class: CardGameGridItemZombieMirrorQueenMirror


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemZombieMirrorQueenMirror::StaticClassInit() */

void CardGameGridItemZombieMirrorQueenMirror::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameGridItemZombieMirrorQueenMirror");
    (*pcVar2)(plVar1,asStack_10,FUN_04f07c04,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameGridItemZombieMirrorQueenMirror::StaticGetClass() */

long * CardGameGridItemZombieMirrorQueenMirror::StaticGetClass(void)

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
  uVar2 = GridItemZombieMirrorQueenMirror::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameGridItemZombieMirrorQueenMirror",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameGridItemZombieMirrorQueenMirror::GetClass() const */

long * CardGameGridItemZombieMirrorQueenMirror::GetClass(void)

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
  uVar2 = GridItemZombieMirrorQueenMirror::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameGridItemZombieMirrorQueenMirror",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameGridItemZombieMirrorQueenMirror::CardGameGridItemZombieMirrorQueenMirror() */

void __thiscall
CardGameGridItemZombieMirrorQueenMirror::CardGameGridItemZombieMirrorQueenMirror
          (CardGameGridItemZombieMirrorQueenMirror *this)

{
  GridItemZombieMirrorQueenMirror::GridItemZombieMirrorQueenMirror
            ((GridItemZombieMirrorQueenMirror *)this);
  *(undefined ***)this = &PTR_GetClass_06a0e950;
  *(undefined ***)(this + 0x10) = &PTR__CardGameGridItemZombieMirrorQueenMirror_06a0ec10;
  return;
}


/* CardGameGridItemZombieMirrorQueenMirror::StaticNew() */

CardGameGridItemZombieMirrorQueenMirror * CardGameGridItemZombieMirrorQueenMirror::StaticNew(void)

{
  CardGameGridItemZombieMirrorQueenMirror *this;
  
  this = ::operator_new(0x1e0);
  CardGameGridItemZombieMirrorQueenMirror(this);
  return this;
}


/* CardGameGridItemZombieMirrorQueenMirror::~CardGameGridItemZombieMirrorQueenMirror() */

void __thiscall
CardGameGridItemZombieMirrorQueenMirror::~CardGameGridItemZombieMirrorQueenMirror
          (CardGameGridItemZombieMirrorQueenMirror *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0e950;
  *(undefined ***)(this + 0x10) = &PTR__CardGameGridItemZombieMirrorQueenMirror_06a0ec10;
  GridItemZombieMirrorQueenMirror::~GridItemZombieMirrorQueenMirror
            ((GridItemZombieMirrorQueenMirror *)this);
  return;
}


/* non-virtual thunk to
   CardGameGridItemZombieMirrorQueenMirror::~CardGameGridItemZombieMirrorQueenMirror() */

void __thiscall
CardGameGridItemZombieMirrorQueenMirror::~CardGameGridItemZombieMirrorQueenMirror
          (CardGameGridItemZombieMirrorQueenMirror *this)

{
  ~CardGameGridItemZombieMirrorQueenMirror(this + -0x10);
  return;
}


/* CardGameGridItemZombieMirrorQueenMirror::~CardGameGridItemZombieMirrorQueenMirror() */

void __thiscall
CardGameGridItemZombieMirrorQueenMirror::~CardGameGridItemZombieMirrorQueenMirror
          (CardGameGridItemZombieMirrorQueenMirror *this)

{
  ~CardGameGridItemZombieMirrorQueenMirror(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   CardGameGridItemZombieMirrorQueenMirror::~CardGameGridItemZombieMirrorQueenMirror() */

void __thiscall
CardGameGridItemZombieMirrorQueenMirror::~CardGameGridItemZombieMirrorQueenMirror
          (CardGameGridItemZombieMirrorQueenMirror *this)

{
  ~CardGameGridItemZombieMirrorQueenMirror(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemZombieMirrorQueenMirror::canCoypZombie(Zombie*) */

void __thiscall
CardGameGridItemZombieMirrorQueenMirror::canCoypZombie
          (CardGameGridItemZombieMirrorQueenMirror *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  GridItemZombieMirrorQueenMirrorProps *pGVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 != (Zombie *)0x0) && (cVar1 = Zombie::IsBoss(param_1), cVar1 == '\0')) &&
      (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')) &&
     (((iVar3 = Zombie::GetFacing(param_1), iVar3 == 0 &&
       (cVar1 = FUN_04f05d40(param_1[0x5a1]), cVar1 != '\0')) &&
      (cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0')))) {
    pGVar4 = GridItem::GetProps<GridItemZombieMirrorQueenMirrorProps>();
    uVar5 = FUN_04f09fe4(*(undefined8 *)(pGVar4 + 0xd0));
    uVar6 = FUN_04f0a034(*(undefined8 *)(pGVar4 + 0xd8));
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar5,uVar6,lVar7 + 8);
    local_10 = FUN_04f0a034(*(undefined8 *)(pGVar4 + 0xd8));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x1c0);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      ToolPacketData::GetProps();
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar5,uVar6,aRStack_20);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      bVar2 = !bVar2;
      goto LAB_04f0ebf0;
    }
  }
  bVar2 = false;
LAB_04f0ebf0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

