// Class: BungeeCounterSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BungeeCounterSubSystem::StaticClassInit() */

void BungeeCounterSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"BungeeCounterSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04f4b940,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BungeeCounterSubSystem::StaticGetClass() */

long * BungeeCounterSubSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"BungeeCounterSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BungeeCounterSubSystem::GetClass() const */

long * BungeeCounterSubSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"BungeeCounterSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BungeeCounterSubSystem::isNotValidGrid(Sexy::Point) */

byte __thiscall BungeeCounterSubSystem::isNotValidGrid(undefined8 param_1,Point *param_2)

{
  byte bVar1;
  
  bVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),param_2);
  if (bVar1 == 0) {
    bVar1 = FUN_04f4a6b0(*(long *)(gLawnApp + 0x9f0) + 0xf8,*(long *)(gLawnApp + 0x9f0) + 0xfc,
                         param_2);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


/* BungeeCounterSubSystem::~BungeeCounterSubSystem() */

void __thiscall BungeeCounterSubSystem::~BungeeCounterSubSystem(BungeeCounterSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1d710;
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* BungeeCounterSubSystem::~BungeeCounterSubSystem() */

void __thiscall BungeeCounterSubSystem::~BungeeCounterSubSystem(BungeeCounterSubSystem *this)

{
  ~BungeeCounterSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* BungeeCounterSubSystem::BungeeCounterSubSystem() */

void __thiscall BungeeCounterSubSystem::BungeeCounterSubSystem(BungeeCounterSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06a1d710;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x10));
  return;
}


/* BungeeCounterSubSystem::StaticNew() */

BungeeCounterSubSystem * BungeeCounterSubSystem::StaticNew(void)

{
  BungeeCounterSubSystem *this;
  
  this = ::operator_new(0x40);
  BungeeCounterSubSystem(this);
  return this;
}


/* BungeeCounterSubSystem::removeUseNum(int) */

void __thiscall BungeeCounterSubSystem::removeUseNum(BungeeCounterSubSystem *this,int param_1)

{
  long lVar1;
  int local_4;
  
  local_4 = param_1;
  lVar1 = std::set<int,std::less<int>,std::allocator<int>>::count
                    ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x10),&local_4);
  if (lVar1 != 0) {
    std::set<int,std::less<int>,std::allocator<int>>::erase((int *)(this + 0x10));
  }
  return;
}


/* BungeeCounterSubSystem::isValidNum(int) */

bool __thiscall BungeeCounterSubSystem::isValidNum(BungeeCounterSubSystem *this,int param_1)

{
  long lVar1;
  int local_4;
  
  if (-1 < param_1) {
    local_4 = param_1;
    lVar1 = std::set<int,std::less<int>,std::allocator<int>>::count
                      ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x10),&local_4);
    return lVar1 == 0;
  }
  return false;
}


/* BungeeCounterSubSystem::addUseNum(int) */

void __thiscall BungeeCounterSubSystem::addUseNum(BungeeCounterSubSystem *this,int param_1)

{
  long lVar1;
  int local_4;
  
  if (-1 < param_1) {
    local_4 = param_1;
    lVar1 = std::set<int,std::less<int>,std::allocator<int>>::count
                      ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x10),&local_4);
    if (lVar1 == 0) {
      std::set<int,std::less<int>,std::allocator<int>>::insert
                ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x10),&local_4);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BungeeCounterSubSystem::onInitialized() */

void __thiscall BungeeCounterSubSystem::onInitialized(BungeeCounterSubSystem *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = 0;
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar3 = BoardConstants::NUMBER_OF_ROWS();
  if (0 < iVar2) {
    do {
      if (0 < iVar3) {
        iVar5 = 0;
        iVar4 = 0;
        do {
          while( true ) {
            Sexy::Point::Point((Point *)local_10,iVar6,iVar4);
            cVar1 = isNotValidGrid(this,(Point *)local_10);
            if (cVar1 == '\0') break;
            iVar4 = iVar4 + 1;
            local_10[0] = iVar5;
            std::set<int,std::less<int>,std::allocator<int>>::insert
                      ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x10),local_10);
            iVar5 = iVar5 + iVar6;
            if (iVar4 == iVar3) goto LAB_04f4e238;
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + iVar6;
        } while (iVar4 != iVar3);
      }
LAB_04f4e238:
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BungeeCounterSubSystem::GetValidGrid(Sexy::Point&) */

void __thiscall BungeeCounterSubSystem::GetValidGrid(BungeeCounterSubSystem *this,Point *param_1)

{
  set<int,std::less<int>,std::allocator<int>> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this_00 = (set<int,std::less<int>,std::allocator<int>> *)(this + 0x10);
  uVar8 = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  iVar2 = iVar2 * iVar1;
  lVar4 = std::set<int,std::less<int>,std::allocator<int>>::size(this_00);
  if (lVar4 != iVar2) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    local_24 = 0;
    if (0 < iVar2) {
      do {
        while (lVar4 = std::set<int,std::less<int>,std::allocator<int>>::count(this_00,&local_24),
              lVar4 != 0) {
          local_24 = local_24 + 1;
          if (iVar2 <= local_24) goto LAB_04f4e654;
        }
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)&local_20,&local_24);
        local_24 = local_24 + 1;
      } while (local_24 < iVar2);
    }
LAB_04f4e654:
    uVar6 = local_20;
    lVar7 = 0;
    lVar4 = FUN_04f4a718(local_20,local_18);
    if (lVar4 != 1) {
      iVar2 = Sexy::Rand((int)lVar4 + -1);
      lVar7 = (long)iVar2;
      uVar6 = local_20;
    }
    uVar8 = 1;
    piVar5 = (int *)FUN_04f4a740(uVar6,lVar7);
    std::set<int,std::less<int>,std::allocator<int>>::insert(this_00,piVar5);
    piVar5 = (int *)FUN_04f4a740(local_20,lVar7);
    iVar2 = *piVar5;
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = iVar2 / iVar3;
    }
    *(int *)(param_1 + 4) = iVar1;
    piVar5 = (int *)FUN_04f4a740(local_20,lVar7);
    iVar2 = *piVar5;
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = iVar2 / iVar3;
    }
    *(int *)param_1 = iVar2 - iVar1 * iVar3;
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

